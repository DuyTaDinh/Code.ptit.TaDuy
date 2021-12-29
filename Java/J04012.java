/*
 * BÀI TOÁN TÍNH CÔNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J04012 {

    static class NhanVien {

        private String name;
        private long luongcb;
        private long ngaycong;
        private String chucvu;
        private long thuong;
        private long phucap;
        private long luongthang;
        private long thunhap;

        public NhanVien() {
        }

        public void nhap(Scanner sc) {
            name = sc.nextLine();
            luongcb = sc.nextLong();
            ngaycong = sc.nextLong();
            sc.nextLine();
            chucvu = sc.nextLine();
        }

        public void setThuong() {
            if (ngaycong >= 25) {
                thuong = Math.round(20.0 / 100 * ngaycong * luongcb);
            } else if (ngaycong >= 22 && ngaycong < 25) {
                thuong = Math.round(10.0 / 100 * ngaycong * luongcb);
            } else {
                thuong = 0;
            }
        }

        public void setPhucap() {
            if (chucvu.equals("GD")) {
                phucap = 250000;
            } else if (chucvu.equals("PGD")) {
                phucap = 200000;
            } else if (chucvu.equals("TP")) {
                phucap = 180000;
            } else {
                phucap = 150000;
            }
        }

        public void xuat() {
            luongthang = ngaycong * luongcb;
            thunhap = ngaycong * luongcb + thuong + phucap;
            System.out.println("NV01 " + name + " " + luongthang + " "
                    + thuong + " " + phucap + " " + thunhap);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        NhanVien nv = new NhanVien();
        nv.nhap(sc);
        nv.setThuong();
        nv.setPhucap();
        nv.xuat();
    }
}
