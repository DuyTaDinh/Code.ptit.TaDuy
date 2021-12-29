/*
 * DANH SÁCH MẶT HÀNG
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05081 {

    static class Item {

        String id;
        String name;
        String unit;
        long sellPrice;
        long buyPrice;
        long profit;

        public Item(int stt, String name, String unit, long sellPrice, long buyPrice) {
            this.id = "MH" + String.format("%03d", stt);
            this.name = name;
            this.unit = unit;
            this.sellPrice = sellPrice;
            this.buyPrice = buyPrice;
            this.profit = buyPrice - sellPrice;
        }

        public long getProfit() {
            return profit;
        }

        public String getId() {
            return id;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + unit + " "
                    + sellPrice + " "
                    + buyPrice + " "
                    + profit;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        int stt = 1;
        ArrayList<Item> itemsList = new ArrayList<>();
        while (t-- > 0) {
            String name = sc.nextLine();
            String unit = sc.nextLine();
            long sellPrice = Long.parseLong(sc.nextLine());
            long buyPrice = Long.parseLong(sc.nextLine());
            itemsList.add(new Item(stt, name, unit, sellPrice, buyPrice));
            stt++;
        }
        itemsList.sort(Comparator.comparing(Item::getProfit).reversed()
                .thenComparing(Item::getId));
        for (Item i : itemsList) {
            System.out.println(i);
        }
    }
}
