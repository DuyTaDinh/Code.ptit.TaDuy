/*
 * BẢNG THU NHẬP GIÁO VIÊN
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05064 {

    static class GiaoVien {

        private String ma, hoTen, chucVu;
        private int luongCB, phuCap, thuNhap, bacLuong;

        public GiaoVien(String ma, String hoTen, int luongCB) {
            this.ma = ma;
            this.hoTen = hoTen;
            this.luongCB = luongCB;
            this.phuCap = tinhPhuCap();
            this.bacLuong = tinhBacLuong();
            this.thuNhap = luongCB * bacLuong + phuCap;
            this.chucVu = tinhChucVu();
        }

        private String tinhChucVu() {
            String s = "";
            for (int i = 0; i <= 1; i++) {
                s += ma.charAt(i);
            }
            return s;
        }

        public String getChucVu() {
            return chucVu;
        }

        private int tinhPhuCap() {
            String s = "";
            for (int i = 0; i <= 1; i++) {
                s += ma.charAt(i);
            }
            if (s.equals("HT")) {
                return 2000000;
            } else if (s.equals("HP")) {
                return 900000;
            } else {
                return 500000;
            }
        }

        private int tinhBacLuong() {
            String s = "";
            for (int i = 2; i <= 3; i++) {
                s += ma.charAt(i);
            }
            return Integer.parseInt(s);
        }

        @Override
        public String toString() {
            return ma + " " + hoTen + " " + bacLuong + " " + phuCap + " " + thuNhap;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GiaoVien> gvList = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            gvList.add(new GiaoVien(sc.nextLine(), sc.nextLine(),
                    Integer.parseInt(sc.nextLine())));
        }
        int demHT = 0, demHP = 0;
        for (GiaoVien gv : gvList) {
            if (gv.getChucVu().equals("HT")) {
                demHT++;
                if (demHT <= 1) {
                    System.out.println(gv);
                }
            } else if (gv.getChucVu().equals("HP")) {
                demHP++;
                if (demHP <= 2) {
                    System.out.println(gv);
                }
            } else {
                System.out.println(gv);
            }
        }
    }
}
