/*
 * TUYỂN GIÁO VIÊN
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05014 {

    static class GiaoVien {

        private String ma;
        private String name;
        private String mamon;
        private float d1;
        private float d2;
        private float tong;

        public GiaoVien() {
        }

        public void nhap(Scanner s, int stt) {
            s.nextLine();
            name = s.nextLine();
            mamon = s.next();
            d1 = s.nextFloat();
            d2 = s.nextFloat();
            ma = "GV" + String.format("%02d", stt);
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }

        public void setTong() {
            float sum = d1 * 2 + d2;
            int uutien = Integer.parseInt(Character.toString(mamon.charAt(1)));
            if (uutien == 1) {
                sum += 2.0;
            }
            if (uutien == 2) {
                sum += 1.5;
            }
            if (uutien == 3) {
                sum += 1.0;
            }
            tong = sum;
        }

        public String getTongAsString() {
            return String.format("%.1f", tong);
        }

        public float getTongAsFloat() {
            return tong;
        }

        public String getloai() {
            if (tong >= 18) {
                return "TRUNG TUYEN";
            }
            return "LOAI";
        }

        public String getMon() {
            String mon = Character.toString(mamon.charAt(0));
            if (mon.equals("A")) {
                return "TOAN";
            }
            if (mon.equals("B")) {
                return "LY";
            }
            return "HOA";
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getName() + " " + this.getMon() + " "
                    + this.getTongAsString() + " " + this.getloai()
            );
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<GiaoVien> res = new ArrayList<>();
        int stt = 1;
        while (t-- > 0) {
            GiaoVien i = new GiaoVien();
            i.nhap(sc, stt);
            i.setTong();
            res.add(i);
            stt++;
        }
        res.sort(Comparator.comparing(GiaoVien::getTongAsFloat).reversed());
        for (GiaoVien i : res) {
            i.xuat();
        }
    }
}
