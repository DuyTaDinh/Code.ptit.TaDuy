/*
 * TÌM THỦ KHOA CỦA KỲ THI
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05009 {

    static class ThiSinh {

        int stt;
        String name;
        String dob;
        double p1;
        double p2;
        double p3;
        double total;

        public ThiSinh(int stt, Scanner sc) {
            this.stt = stt;
            name = sc.nextLine();
            dob = sc.nextLine();
            p1 = Double.parseDouble(sc.nextLine());
            p2 = Double.parseDouble(sc.nextLine());
            p3 = Double.parseDouble(sc.nextLine());
            total = p1 + p2 + p3;
        }

        public double getTotal() {
            return total;
        }

        @Override
        public String toString() {
            return stt + " "
                    + name + " "
                    + dob + " "
                    + total + " ";
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<ThiSinh> tsList = new ArrayList<>();
        int stt = 1;
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            tsList.add(new ThiSinh(stt, sc));
            stt++;
        }
        tsList.sort(Comparator.comparing(ThiSinh::getTotal).reversed());
        for (ThiSinh ts : tsList) {
            if (ts.total == tsList.get(0).total) {
                System.out.println(ts);
            }
        }
    }
}
