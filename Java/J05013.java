/*
 * TUYỂN DỤNG
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05013 {

    static class ThiSinh {

        private String ma;
        private String name;
        private float d1;
        private float d2;
        private float tb;

        public ThiSinh() {
        }

        public void nhap(Scanner s, int stt) {
            s.nextLine();
            name = s.nextLine();
            d1 = s.nextFloat();
            d2 = s.nextFloat();
            ma = "TS" + String.format("%02d", stt);
            tb = setTb();
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }

        public float setTb() {
            if (d1 > 10) {
                d1 = d1 / 10;
            }
            if (d2 > 10) {
                d2 = d2 / 10;
            }
            return (d1 + d2) / 2;
        }

        public String getTb() {
            return String.format("%.2f", tb);
        }

        public float getdiemTb() {
            return tb;
        }

        public String getLoai() {
            if (tb < 5.0) {
                return "TRUOT";
            } else if (tb > 5.0 && tb < 8.0) {
                return "CAN NHAC";
            } else if (tb >= 8.0 && tb <= 9.5) {
                return "DAT";
            } else {
                return "XUAT SAC";
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<ThiSinh> tsList = new ArrayList<>();
        int stt = 1;
        while (t-- > 0) {
            ThiSinh i = new ThiSinh();
            i.nhap(sc, stt);
            tsList.add(i);
            stt++;
        }
        tsList.sort(Comparator.comparing(ThiSinh::getdiemTb).reversed());
        for (ThiSinh i : tsList) {
            System.out.println(
                    i.getMa() + " " + i.getName() + " " + i.getTb() + " " + i.getLoai()
            );
        }
    }
}
