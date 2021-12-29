/*
 * BÀI TOÁN TUYỂN SINH
 * @author TaDuy
 */
import java.util.Scanner;

public class J04013 {

    static class ThiSinh {

        private String ma;
        private String name;
        private float diemtoan;
        private float diemli;
        private float diemmhoa;
        private String trangthai;
        private float diemuutien;
        private float tong;

        public ThiSinh() {
        }

        public void nhap(Scanner sc) {
            ma = sc.next();
            sc.nextLine();
            name = sc.nextLine();
            diemtoan = sc.nextFloat();
            diemli = sc.nextFloat();
            diemmhoa = sc.nextFloat();
        }

        public void setDiemUuTien() {
            String a = ma.substring(0, 3);
            if (a.equals("KV1")) {
                diemuutien = 0.5f;
            } else if (a.equals("KV2")) {
                diemuutien = 1;
            } else if (a.equals("KV3")) {
                diemuutien = 2.5f;
            }
        }

        public void setTong() {
            tong = diemtoan * 2 + diemli + diemmhoa;
        }

        public void setTrangThai() {
            if (tong + diemuutien >= 24) {
                trangthai = "TRUNG TUYEN";
            } else {
                trangthai = "TRUOT";
            }
        }

        public String getuutien() {
            if (diemuutien == 1) {
                return "1";
            } else {
                return Float.toString(diemuutien);
            }
        }

        public String gettongdiem() {
            if (tong % 1 == 0) {
                return String.format("%.0f", tong);
            } else {
                return String.format("%.1f", tong);
            }
        }

        public void xuat() {
            System.out.println(ma + " " + name + " " + getuutien() + " "
                    + gettongdiem() + " " + trangthai);
        }
    }

    public static void main(String[] args) {
        ThiSinh ts = new ThiSinh();
        Scanner sc = new Scanner(System.in);
        ts.nhap(sc);
        ts.setDiemUuTien();
        ts.setTong();
        ts.setTrangThai();
        ts.xuat();
    }
}
