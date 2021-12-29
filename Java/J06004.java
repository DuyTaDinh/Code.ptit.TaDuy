/*
 * QUẢN LÝ BÀI TẬP NHÓM – 2
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J06004 {

    static class Student {

        String id;
        String name;
        String phone;
        int nhom;
        String tennhom;

        public Student(String id, String name, String phone, int nhom) {
            this.id = id;
            this.name = name;
            this.phone = phone;
            this.nhom = nhom;
        }

        public String getId() {
            return id;
        }

        public int getNhom() {
            return nhom;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + phone + " "
                    + nhom;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> stList = new ArrayList<>();
        ArrayList<String> nhomList = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();
        while (n-- > 0) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            String phone = sc.nextLine();
            int nhom = Integer.parseInt(sc.nextLine());
            stList.add(new Student(id, name, phone, nhom));
        }
        while (m-- > 0) {
            nhomList.add(sc.nextLine());
        }
        stList.sort(Comparator.comparing(Student::getId));
        for (Student i : stList) {
            System.out.println(i + " " + nhomList.get(i.getNhom() - 1));
        }

    }
}
