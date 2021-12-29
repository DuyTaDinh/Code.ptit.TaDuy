/*
 * SẮP XẾP KẾT QUẢ TUYỂN SINH
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05058 {

    static class Ts {

        private String ma;
        private String name;
        private float diemtoan;
        private float diemli;
        private float diemmhoa;
        private String trangthai;
        private float diemuutien;
        private float tong;

        public Ts() {
        }

        public void nhap(Scanner s) {
            ma = s.next();
            s.nextLine();
            name = s.nextLine();
            diemtoan = s.nextFloat();
            diemli = s.nextFloat();
            diemmhoa = s.nextFloat();
        }

        public void setDiemcong() {
            String a = ma.substring(0, 3);
            if (a.equals("KV1")) {
                diemuutien = 0.5f;
            } else if (a.equals("KV2")) {
                diemuutien = 1;
            } else if (a.equals("KV3")) {
                diemuutien = 2.5f;
            }
        }

        public String getMa() {
            return ma;
        }

        public void setTong() {
            tong = diemtoan * 2 + diemli + diemmhoa;
            tong += diemuutien;
        }

        public void setKetqua() {
            if (tong >= 24) {
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

        public String getTong() {
            if (tong % 1 == 0) {
                return String.format("%.0f", tong);
            } else {
                return String.format("%.1f", tong);
            }
        }

        public float getxet() {
            if (tong % 1 == 0) {
                return Float.valueOf(String.format("%.0f", tong));
            } else {
                return Float.valueOf(String.format("%.1f", tong));
            }
        }

        public void xuat() {
            System.out.println(ma + " " + name + " " + getuutien() + " " + getTong() + " " + trangthai);
        }
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        List<Ts> res = new ArrayList<>();
        while (t-- > 0) {
            Ts i = new Ts();
            i.nhap(s);
            i.setDiemcong();
            i.setTong();
            i.setKetqua();
            res.add(i);
        }
        Collections.sort(res, Comparator.comparing(Ts::getMa));
        Collections.sort(res, Comparator.comparing(Ts::getxet, Comparator.reverseOrder()));
        for (Ts i : res) {
            i.xuat();
        }
    }
}
