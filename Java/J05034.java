/*
 * DANH SÁCH THỰC TẬP - 1
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05034 {

    static class Intern {

        int stt;
        String id;
        String name;
        String lop;
        String email;
        String company;

        public Intern(int stt, Scanner sc) {
            this.stt = stt;
            id = sc.nextLine();
            name = sc.nextLine();
            lop = sc.nextLine();
            email = sc.nextLine();
            company = sc.nextLine();
        }

        public String getName() {
            return name;
        }

        @Override
        public String toString() {
            return stt + " "
                    + id + " "
                    + name + " "
                    + lop + " "
                    + email + " "
                    + company;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Intern> interns = new ArrayList<>();
        int n = sc.nextInt();
        int stt = 1;
        sc.nextLine();
        while (n-- > 0) {
            Intern it = new Intern(stt, sc);
            interns.add(it);
            stt++;
        }
        interns.sort(Comparator.comparing(Intern::getName));
        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            String company = sc.nextLine();
            for (Intern i : interns) {
                if (i.company.equals(company)) {
                    System.out.println(i.toString());
                }
            }
        }
    }
}
