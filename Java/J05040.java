/*
 * LẬP BẢNG TÍNH CÔNG
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05040 {

    static class NhanVien {

        private String ma, hoTen;
        private int luongThang, thuong, phuCap, thuNhap;

        public NhanVien(int stt, String hoTen, int lCoban, int ngayCong, String chucVu) {
            this.ma = "NV" + String.format("%02d", stt);
            this.hoTen = hoTen;
            this.luongThang = ngayCong * lCoban;
            this.phuCap = timPhuCap(chucVu);
            this.thuong = timTienThuong(ngayCong, luongThang);
            this.thuNhap = luongThang + phuCap + thuong;
        }

        private static int timPhuCap(String chucVu) {
            if (chucVu.equals("GD")) {
                return 250000;
            } else if (chucVu.equals("PGD")) {
                return 200000;
            } else if (chucVu.equals("TP")) {
                return 180000;
            } else {
                return 150000;
            }
        }

        private static int timTienThuong(int soNgayCong, int luongThang) {
            if (soNgayCong >= 25) {
                return (int) (0.2 * luongThang);
            } else if (soNgayCong >= 22) {
                return (int) (0.1 * luongThang);
            } else {
                return 0;
            }
        }

        @Override
        public String toString() {
            return ma + " " + hoTen + " " + luongThang + " " + thuong + " " + phuCap + " " + thuNhap;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NhanVien> listNV = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            listNV.add(new NhanVien(i, sc.nextLine(),
                    Integer.parseInt(sc.nextLine()), 
                    Integer.parseInt(sc.nextLine()), 
                    sc.nextLine()));
        }
        for (NhanVien nv : listNV) {
            System.out.println(nv);
        }
    }
}
