/*
 * SẮP XẾP BẢNG TÍNH TIỀN ĐIỆN
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05051 {

    static class TienDien {

        private String maKH;
        private int csCu, csMoi, heSo, thanhtien, phuTroi, tongTien;

        public TienDien(int stt, String sD, int csCu, int csMoi) {
            this.maKH = "KH" + String.format("%02d", stt);
            this.csCu = csCu;
            this.csMoi = csMoi;
            this.heSo = tinhHeSo(sD);
            this.thanhtien = (csMoi - csCu) * this.heSo * 550;
            this.phuTroi = tinhPhuTroi(csMoi, csCu, this.thanhtien);
            this.tongTien = this.phuTroi + this.thanhtien;
        }

        private static int tinhHeSo(String sD) {
            if (sD.equals("KD")) {
                return 3;
            } else if (sD.equals("NN")) {
                return 5;
            } else if (sD.equals("TT")) {
                return 4;
            } else {
                return 2;
            }
        }

        private static int tinhPhuTroi(int chiSoMoi, int chiSoCu, int thanhTien) {
            int chiSo = chiSoMoi - chiSoCu;
            if (chiSo < 50) {
                return 0;
            } else if (chiSo <= 100) {
                float x = (float) (thanhTien * 0.35);
                x = Math.round(x);
                return (int) (x);
            } else {
                return thanhTien;
            }

        }

        public int getTongTien() {
            return tongTien;
        }

        @Override
        public String toString() {
            return maKH + " " + heSo + " " + thanhtien + " " + phuTroi + " " + tongTien;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<TienDien> listTD = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            listTD.add(new TienDien(i, sc.nextLine(),
                    Integer.parseInt(sc.nextLine()),
                    Integer.parseInt(sc.nextLine())));
        }
        listTD.sort(Comparator.comparing(TienDien::getTongTien).reversed());
        for (TienDien i : listTD) {
            System.out.println(i);
        }
    }
}
