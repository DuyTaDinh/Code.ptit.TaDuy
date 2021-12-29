/*
 * TÍNH THU NHẬP GIÁO VIÊN
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J04015 {

    public static class GiaoVien {

        private String ma, hoTen;
        private int bacLuong, phuCap, thuNhap;

        public GiaoVien(String ma, String hoTen, int luongCoBan) {
            this.ma = ma;
            this.hoTen = hoTen;
            this.phuCap = timPhuCap(ma);
            this.bacLuong = timBacLuong(ma);
            this.thuNhap = luongCoBan * bacLuong + phuCap;
        }

        private static int timPhuCap(String ma) {
            String s = "";
            for (int i = 0; i <= 1; i++) {
                s += ma.charAt(i);
            }
            if (s.equals("HT")) {
                return 2000000;
            } else if (s.equals("HP")) {
                return 900000;
            } else if (s.equals("GV")){
                return 500000;
            }
            return 0;
        }

        private static int timBacLuong(String ma) {
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
        ArrayList<GiaoVien> listNV = new ArrayList<>();
        listNV.add(new GiaoVien(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        for (GiaoVien nv : listNV) {
            System.out.println(nv);
        }
    }
}
