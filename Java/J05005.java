/*
 * DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 3
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05005 {

    static class SinhVien {

        private String maSV;
        private String name;
        private String birth;
        private String lop;
        private float diem;

        public SinhVien() {
        }

        public void nhap(Scanner sc, int stt) {
            sc.nextLine();
            maSV = "B20DCCN" + String.format("%03d", stt);
            name = sc.nextLine();
            lop = sc.next();
            birth = sc.next();
            diem = sc.nextFloat();
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
            name = name.trim().toLowerCase();
            String b[] = name.split("\\s+");
            for (int i = 0; i < b.length; i++) {
                b[i] = Character.toUpperCase(b[i].charAt(0)) + b[i].substring(1);
            }
            return String.join(" ", b);
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

    static class SortbyGPA implements Comparator<SinhVien> {

        @Override
        public int compare(SinhVien a, SinhVien b) {
            if (a.diem < b.diem) {
                return 1;
            }
            return -1;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int stt = 1;
        ArrayList<SinhVien> listSV = new ArrayList<>();
        while (n-- > 0) {
            SinhVien sv = new SinhVien();
            sv.nhap(sc, stt);
            listSV.add(sv);
            stt++;
        }
        Collections.sort(listSV, new SortbyGPA());
        for (SinhVien sinh : listSV) {
            System.out.println(sinh);
        }
    }
}
