/*
 * LIỆT KÊ SINH VIÊN THEO LỚP
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J05022 {

    static class Student {

        private String ID;
        private String name;
        private String lop;
        private String email;

        public Student() {
        }

        public void nhap(Scanner sc) {
            ID = sc.nextLine();
            name = sc.nextLine();
            lop = sc.nextLine();
            email = sc.nextLine();
        }

        public String getLop() {
            return lop;
        }

        @Override
        public String toString() {
            return ID + " "
                    + name + " "
                    + lop + " "
                    + email;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<Student> ds = new ArrayList<>();
        while (t-- > 0) {
            Student i = new Student();
            i.nhap(sc);
            ds.add(i);
        }
        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            String lop = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN LOP " + lop + ": ");
            for (Student i : ds) {
                if (i.getLop().equals(lop)) {
                    System.out.println(i);
                }
            }
        }
    }
}
