/*
 * TÍNH GIÁ BÁN - 1
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05036 {

    static class Food {

        String id;
        String name;
        String unit;
        long amount;
        long shipCost;
        long totalCost;
        long price;

        public Food(int stt, String name, String unit, long unitCost, long amount) {
            this.id = "MH" + String.format("%02d", stt);
            this.name = name;
            this.unit = unit;
            this.amount = amount;
            this.shipCost = Math.round((double) (unitCost * amount * 5) / 100);
            this.totalCost = Math.round(unitCost * amount + shipCost);
            this.price = totalCost + Math.round((double) (totalCost * 2) / 100);

        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + unit + " "
                    + shipCost+ " "
                    + totalCost+ " "
                    + price;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Food> foods = new ArrayList<>();
        int t = sc.nextInt();
        int stt = 1;
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            String unit = sc.nextLine();
            long unitCost = Long.parseLong(sc.nextLine());
            long amount = Long.parseLong(sc.nextLine());
            foods.add(new Food(stt, name, unit, unitCost, amount));
            stt++;
        }
        for (Food f : foods) {
            System.out.println(f);
        }
    }
}
