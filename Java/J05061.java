/*
 * SẮP XẾP KẾT QUẢ XÉT TUYỂN
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05061 {

    static class Ts {

        private String ma;
        private String name;
        private String birth;
        private String xeploai;
        private float diem1;
        private float diem2;
        private float diemthuong;        
        private int tong;
        private int tuoi;

        public Ts() {
        }

        public void nhap(Scanner s) {
            s.nextLine(); // vi diem2 la nextFloat()
            name = s.nextLine();
            birth = s.nextLine();
            diem1 = s.nextFloat();
            diem2 = s.nextFloat();
        }

        public void setMa(int a) {
            ma = (a < 10) ? "PH0" + a : "PH" + a;
        }

        public void setTuoi() {
            String nam = birth.split("/")[2];
            tuoi = 2021 - Integer.valueOf(nam);
        }

        public void setDiemthuong() {
            if (diem1 >= 8 && diem2 >= 8) {
                diemthuong = 1;
            } else if (diem1 >= 7.5 && diem2 >= 7.5) {
                diemthuong = 0.5f;
            } else {
                diemthuong = 0;
            }
        }

        public void setTong() {
            tong = Math.round(diemthuong + (diem2 + diem1) / 2);
            if (tong > 10) {
                tong = 10;
            }
        }

        public void setLoai() {
            if (tong < 5) {
                xeploai = "Truot";
            } else if (tong == 5 || tong == 6) {
                xeploai = "Trung binh";
            } else if (tong == 7) {
                xeploai = "Kha";
            } else if (tong == 8) {
                xeploai = "Gioi";
            } else if (tong == 9 || tong == 10) {
                xeploai = "Xuat sac";
            }
        }

        public int getTong() {
            return tong;
        }

        public void xuat() {
            System.out.println(ma + " " + name + " " + tuoi + " " + tong + " " + xeploai);
        }
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        List<Ts> res = new ArrayList<>();
        int stt = 1;
        while (n-- > 0) {
            Ts a = new Ts();
            a.nhap(s);
            a.setMa(stt);
            a.setTuoi();
            a.setDiemthuong();
            a.setTong();
            a.setLoai();
            res.add(a);
            stt++;
        }
        Collections.sort(res, Comparator.comparing(Ts::getTong, Comparator.reverseOrder()));
        for (Ts i : res) {
            i.xuat();
        }

    }
}
