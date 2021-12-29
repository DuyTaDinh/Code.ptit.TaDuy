/*
 * LIỆT KÊ SINH VIÊN THEO NGÀNH
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J05024 {

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

        public String getID() {
            return ID;
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
            String search = sc.nextLine();
            String temp = "";
            switch (search.toUpperCase()) {
                case "KE TOAN":
                    temp = "DCKT";
                    break;
                case "CONG NGHE THONG TIN":
                    temp = "DCCN";
                    break;
                case "AN TOAN THONG TIN":
                    temp = "DCAT";
                    break;
                case "VIEN THONG":
                    temp = "DCVT";
                    break;
                case "DIEN TU":
                    temp = "DCDT";
                    break;
            }
            System.out.println("DANH SACH SINH VIEN NGANH " + search.toUpperCase() + ":");
            for (Student i : ds) {
                if (temp.equals("DCCN") || temp.equals("DCAT")) {
                    if (!i.getLop().startsWith("E") && i.getID().contains(temp)) {
                        System.out.println(i);
                    }
                } else if (i.getID().contains(temp)) {
                    System.out.println(i);
                }
            }
        }
    }
}
