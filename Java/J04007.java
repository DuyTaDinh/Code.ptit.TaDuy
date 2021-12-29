/*
 * KHAI BÁO LỚP NHÂN VIÊN
 * @author TaDuy
 */
import java.util.Scanner;

public class J04007 {

    static class nhanvien {

        private String ten;
        private String gioiTinh;
        private String ngSinh;
        private String diaChi;
        private String maSoThue;
        private String ngayKiHopDong;

        public nhanvien() {
        }

        public nhanvien(String ten, String gioiTinh, String ngSinh,
                String diaChi, String maSoThue, String ngayKiHopDong) {
            this.ten = ten;
            this.gioiTinh = gioiTinh;
            this.ngSinh = ngSinh;
            this.diaChi = diaChi;
            this.maSoThue = maSoThue;
            this.ngayKiHopDong = ngayKiHopDong;
        }

        public void nhap() {
            Scanner sc = new Scanner(System.in);
            ten = sc.nextLine();
            gioiTinh = sc.nextLine();
            ngSinh = sc.nextLine();
            diaChi = sc.nextLine();
            maSoThue = sc.nextLine();
            ngayKiHopDong = sc.nextLine();
        }

        public void xuat() {
            System.out.println(String.format("00001 %s %s %s %s %s %s",
                    ten, gioiTinh, ngSinh, diaChi, maSoThue, ngayKiHopDong));
        }
    }

    public static void main(String args[]) {
        nhanvien nv = new nhanvien();
        nv.nhap();
        nv.xuat();

    }
}
