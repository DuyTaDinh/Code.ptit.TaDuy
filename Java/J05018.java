/*
 * BẢNG ĐIỂM HỌC SINH
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05018 {

    static class Student {

        private String ID;
        private String name;
        private List<Float> diem = new ArrayList<Float>();
        private float tb;

        public Student() {
        }

        public void nhap(Scanner s, int stt) {
            ID = "HS" + String.format("%02d", stt);
            s.nextLine();
            name = s.nextLine();
            for (int i = 0; i < 10; i++) {
                diem.add(s.nextFloat());
            }
            tb = settb();
        }

        private float settb() {
            float sum = 0f;
            for (int i = 0; i < diem.size(); i++) {
                if (i == 0 || i == 1) {
                    sum += diem.get(i) * 2;
                } else {
                    sum += diem.get(i);
                }
            }
            int temp = Math.round(sum / 12 * 10);
            return (float) temp / 10;
        }

        private String level() {
            if (tb < 5) {
                return "YEU";
            } else if (tb >= 5 && tb < 7) {
                return "TB";
            } else if (tb >= 7 && tb < 8) {
                return "KHA";
            } else if (tb >= 8 && tb < 9) {
                return "GIOI";
            } else {
                return "XUAT SAC";
            }
        }

        public float getTb() {
            return tb;
        }

        @Override
        public String toString() {
            return ID + " "
                    + name + " "
                    + getTb() + " "
                    + level();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int stt = 1;
        ArrayList<Student> stList = new ArrayList<>();
        while (n-- > 0) {
            Student nv = new Student();
            nv.nhap(sc, stt);
            stList.add(nv);
            stt++;
        }
        // 2 cach sort
//        Collections.sort(stList, Comparator.comparing(Staff::getBirthday));
        stList.sort(Comparator.comparing(Student::getTb).reversed());
        stList.forEach(nv -> {
            System.out.println(nv);
        });
    }
}
