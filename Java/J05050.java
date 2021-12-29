/*
 * TÍNH TIỀN ĐIỆN
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05050 {

    static class TienDien {

        private String ma;
        private String loai;
        private long socu;
        private long somoi;
        private long heso;
        private long thanhtien;
        private long phutroi;

        public TienDien() {
        }

        public void nhap(Scanner s, int stt) {
            loai = s.next();
            socu = s.nextLong();
            somoi = s.nextLong();
            ma = "KH" + String.format("%02d", stt);
        }

        public void setPhutroi() {
            if (somoi - socu > 100) {
                phutroi = thanhtien;
            } else if (somoi - socu >= 50 && somoi - socu <= 100) {
                phutroi = Math.round((float) 35 / 100 * thanhtien);
            } else if (somoi - socu < 50) {
                phutroi = 0;
            }
        }

        public void setHeso() {
            if (loai.equals("KD")) {
                heso = 3;
            } else if (loai.equals("NN")) {
                heso = 5;
            } else if (loai.equals("TT")) {
                heso = 4;
            } else if (loai.equals("CN")) {
                heso = 2;
            }
        }

        public String getMa() {
            return ma;
        }

        public long getHeso() {
            return heso;
        }

        public void setThanhtien() {
            thanhtien = (somoi - socu) * heso * 550;
        }

        public long getThanhtien() {
            return thanhtien;
        }

        public long getPhutroi() {
            return phutroi;
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getHeso() + " " + this.getThanhtien() + " " + this.getPhutroi()
                    + " " + (this.getThanhtien() + this.getPhutroi())
            );
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a = 1;
        ArrayList<TienDien> TDList = new ArrayList<>();
        while (t-- > 0) {
            TienDien i = new TienDien();
            i.nhap(sc, a);
            i.setHeso();
            i.setThanhtien();
            i.setPhutroi();
            TDList.add(i);
            a++;
        }
        for (TienDien i : TDList) {
            i.xuat();
        }
    }
}
