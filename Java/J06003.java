/*
 * QUẢN LÝ BÀI TẬP NHÓM – 1
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J06003 {

    static class Student {

        String id;
        String name;
        String phone;
        int nhom;

        public Student(String id, String name, String phone, int nhom) {
            this.id = id;
            this.name = name;
            this.phone = phone;
            this.nhom = nhom;
        }

        public int getNhom() {
            return nhom;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + phone;
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
        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            int data = Integer.parseInt(sc.nextLine());
            System.out.println("DANH SACH NHOM " + data + ":");
            for (Student s : stList) {
                if (s.getNhom() == data) {
                    System.out.println(s);
                }
            }
            System.out.println("Bai tap dang ky: " + nhomList.get(data - 1));
        }

    }
}
