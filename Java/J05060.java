/*
 * KẾT QUẢ XÉT TUYỂN
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05060 {

    static class PhuHo {

        private int tuoi, dTB;
        private String stt, hoTen, ngaySinh, xepHang;
        private double dLT, dTH, dThuong;

        public PhuHo(int stt, String hoTen, String ngaySinh, double dLT, double dTH) {
            this.hoTen = hoTen;
            this.ngaySinh = ngaySinh;
            this.stt = "PH" + String.format("%02d", stt);
            this.dLT = dLT;
            this.dTH = dTH;
            this.tuoi = tinhTuoi();
            this.dThuong = tinhDT();
            this.dTB = tinhdTB();
            this.xepHang = tinhXH();
        }

        public int tinhTuoi() {
            String a[] = ngaySinh.split("/");
            return 2021 - Integer.parseInt(a[2]);
        }

        public double tinhDT() {
            if (dLT >= 8 && dTH >= 8) {
                return 1;
            } else if (dLT >= 7.5 && dTH >= 7.5) {
                return 0.5;
            } else {
                return 0;
            }
        }

        public int tinhdTB() {
            int DTB = (int) Math.round((dLT + dTH) / 2 + dThuong);
            if (DTB > 10) {
                return 10;
            } else {
                return DTB;
            }
        }

        public String tinhXH() {
            if (dTB < 5) {
                return "Truot";
            } else if (dTB <= 6) {
                return "Trung binh";
            } else if (dTB <= 7) {
                return "Kha";
            } else if (dTB <= 8) {
                return "Gioi";
            } else {
                return "Xuat sac";
            }
        }

        @Override
        public String toString() {
            return stt + " " + hoTen + " " + tuoi + " " + dTB + " " + xepHang;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<PhuHo> pvList = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            pvList.add(new PhuHo(i, sc.nextLine(), sc.nextLine(),
                    Double.parseDouble(sc.nextLine()),
                    Double.parseDouble(sc.nextLine())));
        }
        for (PhuHo i : pvList) {
            System.out.println(i);
        }
    }
}
