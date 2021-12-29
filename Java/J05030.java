/*
 * BẢNG ĐIỂM THÀNH PHẦN - 1
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05030 {

    static class Student {

        String id;
        String name;
        String lop;
        double p1;
        double p2;
        double p3;

        public Student(String id, String name, String lop, double p1, double p2, double p3) {
            this.id = id;
            this.name = name;
            this.lop = lop;
            this.p1 = p1;
            this.p2 = p2;
            this.p3 = p3;
        }

        public String getId() {
            return id;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + lop + " "
                    + String.format("%.1f", p1) + " "
                    + String.format("%.1f", p2) + " "
                    + String.format("%.1f", p3) + " ";
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> stList = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            String lop = sc.nextLine();
            double p1 = Double.parseDouble(sc.nextLine());
            double p2 = Double.parseDouble(sc.nextLine());
            double p3 = Double.parseDouble(sc.nextLine());
            stList.add(new Student(id, name, lop, p1, p2, p3));
        }
        stList.sort(Comparator.comparing(Student::getId));
        for (int i = 0; i < stList.size(); i++) {
            System.out.println(i + 1 + " " + stList.get(i));
        }
    }
}
