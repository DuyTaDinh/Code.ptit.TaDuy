/*
 * TÍNH TIỀN
 * @since  05/12/2021
 * @author TaDuy
 */
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05012 {

    static class Item {

        String id;
        String name;
        String amount;
        String price;
        String discount;
        BigInteger finalCost;

        public Item(String id, String name, String amount, String price, String discount) {
            this.id = id;
            this.name = name;
            this.amount = amount;
            this.price = price;
            this.discount = discount;
            this.finalCost = new BigInteger(finalCost());
        }

        public BigInteger getFinalCost() {
            return finalCost;
        }

        private String finalCost() {
            BigInteger a = new BigInteger(price);
            BigInteger b = new BigInteger(amount);
            BigInteger c = new BigInteger(discount);
            BigInteger res = a.multiply(b);
            return res.subtract(c).toString();
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + amount + " "
                    + price + " "
                    + discount + " "
                    + finalCost() + " ";
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Item> itList = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String id, name, amount, price, discount;
            id = sc.nextLine();
            name = sc.nextLine();
            amount = sc.nextLine();
            price = sc.nextLine();
            discount = sc.nextLine();
            itList.add(new Item(id, name, amount, price, discount));
        }
        itList.sort(Comparator.comparing(Item::getFinalCost).reversed());
        for (Item i : itList) {
            System.out.println(i);
        }
    }
}
