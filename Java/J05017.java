/*
 * HÓA ĐƠN TIỀN NƯỚC
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05017 {

    static class KhachHang {

        int stt;
        String name;
        int oldNum;
        int newNum;
        String id;
        double totalCost;

        public KhachHang(int stt, String name, int oldNum, int newNum) {
            this.stt = stt;
            this.name = name;
            this.oldNum = oldNum;
            this.newNum = newNum;
            this.id = stt < 10 ? "KH0" + stt : "KH" + stt;
            this.totalCost = gAmount();
        }

        public double getTotalCost() {
            return totalCost;
        }

        public double gAmount() {
            double numUsed = (double) newNum - oldNum;
            if (numUsed > 100) {
                double money = (numUsed - 100) * 200 + 50 * 150 + 50 * 100;
                return money + money * 0.05;
            } else if (numUsed > 50) {
                double money = (numUsed - 50) * 150 + 50 * 100;
                return money + money * 0.03;
            } else {
                double money = numUsed * 100;
                return money + money * 0.02;
            }
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + String.format("%.0f", totalCost);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<KhachHang> khList = new ArrayList<>();
        int t = sc.nextInt();
        int stt = 1;
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            int oldNum = Integer.parseInt(sc.nextLine());
            int newNum = Integer.parseInt(sc.nextLine());
            khList.add(new KhachHang(stt, name, oldNum, newNum));
            stt++;
        }
        khList.sort(Comparator.comparing(KhachHang::getTotalCost).reversed());
        for (KhachHang i : khList) {
            System.out.println(i);
        }
    }
}
