/*
 * XẾP HẠNG HỌC SINH
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05054 {

    static class Student {

        String name;
        double point;
        String id;
        int count;
        String level;
        int rank;

        public Student(String name, double point, int stt) {
            this.name = name;
            this.point = point;
            this.count = stt;
            this.id = "HS" + String.format("%02d", stt);
            this.level = getLevel();
        }

        public double getPoint() {
            return point;
        }

        public int getCount() {
            return count;
        }

        public void setRank(int rank) {
            this.rank = rank;
        }

        String getLevel() {
            if (point >= 9) {
                return "Gioi";
            } else if (point >= 7) {
                return "Kha ";
            } else if (point >= 5) {
                return "Trung Binh";
            } else {
                return "Yeu";
            }
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + point + " "
                    + level + " "
                    + rank;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> lstudents = new ArrayList<>();
        int t = sc.nextInt();
        int stt = 1;
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            double point = Double.parseDouble(sc.nextLine());
            lstudents.add(new Student(name, point, stt));
            stt++;
        }
        lstudents.sort(Comparator.comparing(Student::getPoint).reversed());
        int rank = 1;
        for (int i = 0; i < lstudents.size() - 1; i++) {
            if (lstudents.get(i).point == lstudents.get(i + 1).point) {
                lstudents.get(i).setRank(rank);
            } else {
                lstudents.get(i).setRank(rank);
                rank = i + 2;
            }
        }
        lstudents.get(lstudents.size() - 1).setRank(rank);
        lstudents.sort(Comparator.comparing(Student::getCount));
        for (Student i : lstudents) {
            System.out.println(i);
        }
    }
}
