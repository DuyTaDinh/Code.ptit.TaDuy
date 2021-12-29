/*
 * DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 1
 * @author TaDuy
 */
import java.util.Scanner;

public class J05003 {

    static class SinhVien {

        private String maSV;
        private String name;
        private String birth;
        private String lop;
        private float diem;

        public SinhVien() {
        }

        public void nhap(Scanner sc) {
            sc.nextLine();
            name = sc.nextLine();
            lop = sc.next();
            birth = sc.next();
            diem = sc.nextFloat();
        }

        public void setMaSV(int stt) {
            maSV = (stt >= 10) ? "B20DCCN0" + Integer.toString(stt)
                    : "B20DCCN00" + Integer.toString(stt);
        }

        public String getMaSV() {
            return maSV;
        }

        public String getLop() {
            return lop;
        }

        public String getBirth() {
            String a[] = birth.split("/");
            for (int i = 0; i < 3; i++) {
                if (a[i].length() < 2) {
                    a[i] = "0" + a[i];
                }
            }
            return String.join("/", a);
        }

        public String getName() {
            return name;
        }

        public String getDiem() {
            return String.format("%.2f", diem);
        }

        @Override
        public String toString() {
            return getMaSV() + " " + getName() + " " + getLop()
                    + " " + getBirth() + " " + getDiem();
        }

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int stt = 1;
        while (n-- > 0) {
            SinhVien sv = new SinhVien();
            sv.nhap(sc);
            sv.setMaSV(stt);
            System.out.println(sv.toString());
            stt++;
        }
    }
}
