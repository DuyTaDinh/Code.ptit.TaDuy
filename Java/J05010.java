/*
 * SẮP XẾP DANH SÁCH MẶT HÀNG
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05010 {

    static class Item {

        String name;
        String type;
        int stt;
        double giaMua;
        double giaBan;
        double loiNhuan;

        public Item(String name, String type, int stt, double in, double out) {
            this.name = name;
            this.type = type;
            this.stt = stt;
            this.giaMua = in;
            this.giaBan = out;
            this.loiNhuan = out - in;
        }

        public double getGet() {
            return loiNhuan;
        }

        @Override
        public String toString() {
            return stt + " "
                    + name + " "
                    + type + " "
                    + String.format("%.2f", loiNhuan);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Item> items = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        int stt = 1;
        while (t-- > 0) {
            String name = sc.nextLine();
            String type = sc.nextLine();
            double in = Double.parseDouble(sc.nextLine());
            double out = Double.parseDouble(sc.nextLine());
            items.add(new Item(name, type, stt, in, out));
            stt++;
        }
        items.sort(Comparator.comparing(Item::getGet).reversed());
        for (Item i : items) {
            System.out.println(i);
        }

    }
}
