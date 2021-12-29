/*
 * BẢNG THEO DÕI NHẬP XUẤT HÀNG
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05048 {

    static class Item {

        private String ma;
        private long nhap;
        private long xuat;
        private long dongia;
        private long tien;
        private long thue;

        public Item() {
        }

        public void nhap(Scanner sc) {
            ma = sc.next();
            nhap = sc.nextLong();
        }

        public void setXuat() {
            if (ma.startsWith("A")) {
                xuat = Math.round(nhap * (60.0 / 100.0));
            } else if (ma.startsWith("B")) {
                xuat = Math.round(nhap * (70.0 / 100.0));
            }
        }

        public void setThue() {
            if (ma.startsWith("A") && ma.endsWith("Y")) {
                thue = (long) (tien * (8.0 / 100.0));
            } else if (ma.startsWith("A") && ma.endsWith("N")) {
                thue = (long) (tien * (11.0 / 100.0));
            } else if (ma.startsWith("B") && ma.endsWith("Y")) {
                thue = (long) (tien * (17.0 / 100.0));
            } else if (ma.startsWith("B") && ma.endsWith("N")) {
                thue = (long) (tien * (22.0 / 100.0));
            }
        }

        public void setDongia() {
            if (ma.endsWith("Y")) {
                dongia = 110000;
            } else if (ma.endsWith("N")) {
                dongia = 135000;
            }
        }

        public String getMa() {
            return ma;
        }

        public long getNhap() {
            return nhap;
        }

        public long getXuat() {
            return xuat;
        }

        public long getDongia() {
            return dongia;
        }

        public void setTien() {
            tien = xuat * dongia;
        }

        public long getTien() {
            return tien;
        }

        public long getThue() {
            return thue;
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getNhap() + " " + this.getXuat() + " " + this.getDongia()
                    + " " + this.getTien() + " " + this.getThue()
            );
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Item> items = new ArrayList<>();
        while (t-- > 0) {
            Item i = new Item();
            i.nhap(sc);
            i.setXuat();
            i.setDongia();
            i.setTien();
            i.setThue();
            items.add(i);
        }
        for (Item i : items) {
            i.xuat();
        }
    }
}
