/*
 * LIỆT KÊ NHẬP XUẤT HÀNG THEO NHÓM
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05049 {

    static class SanPham {

        private String ma;
        private int slNhap, slXuat, donGia, tien, thue;

        public SanPham(String ma, int soLuongN) {
            this.ma = ma;
            this.slNhap = soLuongN;
            this.slXuat = tinhslXuat(ma, soLuongN);
            this.donGia = tinhDonGia(ma);
            this.tien = donGia * slXuat;
            this.thue = tinhThue(ma, tien);
        }

        private static int tinhslXuat(String ma, int soLuongN) {
            if (ma.charAt(0) == 'A') {
                float x = (float) (soLuongN * 0.6);
                x = Math.round(x);
                return (int) (x);
            } else {
                float x = (float) (soLuongN * 0.7);
                x = Math.round(x);
                return (int) (x);
            }

        }

        private static int tinhDonGia(String ma) {
            if (ma.charAt(ma.length() - 1) == 'Y') {
                return 110000;
            } else {
                return 135000;
            }
        }

        private static int tinhThue(String ma, int tien) {
            char x = ma.charAt(0);
            char y = ma.charAt(ma.length() - 1);
            if (x == 'A' && y == 'Y') {
                return (int) (tien * 0.08);
            } else if (x == 'A' && y == 'N') {
                return (int) (tien * 0.11);
            } else if (x == 'B' && y == 'Y') {
                return (int) (tien * 0.17);
            } else {
                return (int) (tien * 0.22);
            }
        }

        public int getThue() {
            return thue;
        }

        public String getMa() {
            return ma;
        }

        @Override
        public String toString() {
            return ma + " " + slNhap + " " + slXuat + " " + donGia + " " + tien + " " + thue;
        }

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SanPham> spList = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            spList.add(new SanPham(sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        spList.sort(Comparator.comparing(SanPham::getThue).reversed());
        String x = sc.nextLine();
        char y = x.charAt(0);
        for (SanPham i : spList) {
            if (i.getMa().charAt(0) == y) {
                System.out.println(i);
            }
        }
    }
}
