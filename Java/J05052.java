/*
 * TRA CỨU ĐƠN HÀNG
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05052 {

    static class Items {

        String name;
        String id;
        long price;
        long amount;
        String stt;
        long discount;
        long totalCost;

        public Items(String name, String id, long price, long amount) {
            this.name = name;
            this.id = id;
            this.price = price;
            this.amount = amount;
            this.stt = id.substring(1, 4);
            this.discount = getDiscount();
            this.totalCost = amount * price - discount;
        }

        public long getDiscount() {
            if (id.endsWith("2")) {
                return Math.round(((double) (price * amount * 3) / 10));
            } else {
                return Math.round(((double) (price * amount * 5) / 10));
            }
        }

        @Override
        public String toString() {
            return name + " "
                    + id + " "
                    + stt + " "
                    + discount + " "
                    + totalCost;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Items> itemsList = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            String id = sc.nextLine();
            long price = Long.parseLong(sc.nextLine());
            long amount = Long.parseLong(sc.nextLine());
            itemsList.add(new Items(name, id, price, amount));
        }
        for (Items i : itemsList) {
            System.out.println(i);
        }
    }
}
