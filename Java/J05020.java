/*
 * SẮP XẾP SINH VIÊN THEO LỚP
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05020 {

    static class Student {

        private String id;
        private String name;
        private String lop;
        private String email;

        public Student() {
        }

        public Student(String id, String name, String lop, String email) {
            this.id = id;
            this.name = name;
            this.lop = lop;
            this.email = email;
        }

        public String getId() {
            return id;
        }
        
        public String getLop() {
            return lop;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + lop + " "
                    + email;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> ds = new ArrayList<>();
        int t = sc.nextInt();sc.nextLine();
        while (t-- > 0) {
            String id, name, lop, email;
            id = sc.nextLine();
            name = sc.nextLine();
            lop = sc.nextLine();
            email = sc.nextLine();
            ds.add(new Student(id, name, lop, email));
        }
        ds.sort(Comparator.comparing(Student::getLop).thenComparing(Student::getId));
        for (Student i : ds) {
            System.out.println(i);
        }
    }
}
