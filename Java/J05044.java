/*
 * LIỆT KÊ NHÂN VIÊN THEO CHỨC VỤ
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05044 {

    static class Employee {

        String id;
        String name;
        String level;
        long basicSalary;
        long workingDay;
        long salary;
        long allowance; // phu cap
        long tamung;
        long conlai;

        public Employee(int stt, String name, String level, long basicSalary, long workingDay) {
            this.id = "NV" + String.format("%02d", stt);
            this.name = name;
            this.level = level;
            this.basicSalary = basicSalary;
            this.workingDay = workingDay;
            this.allowance = getAllowance();
            this.salary = workingDay * basicSalary;
            this.tamung = getTamUng();
            this.conlai = allowance + salary - tamung;

        }

        public long getAllowance() {
            switch (level) {
                case "GD":
                    return 500;
                case "PGD":
                    return 400;
                case "TP":
                    return 300;
                case "KT":
                    return 250;
                default:
                    return 100;
            }
        }

        public long getTamUng() {
            long a = ((allowance + salary) * 2) / 3;
            if (a < 25000) {
                return Math.round((double) a / 1000) * 1000;
            } else {
                return 25000;
            }
        }

        public String getLevel() {
            return level;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + allowance + " "
                    + salary + " "
                    + tamung + " "
                    + conlai;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Employee> employees = new ArrayList<>();
        long t = sc.nextInt();
        sc.nextLine();
        int stt = 1;
        while (t-- > 0) {
            String name = sc.nextLine();
            String level = sc.nextLine();
            long basicSalary = Integer.parseInt(sc.nextLine());
            long workingDay = Integer.parseInt(sc.nextLine());
            employees.add(new Employee(stt, name, level, basicSalary, workingDay));
            stt++;
        }
        String lv = sc.nextLine();
        for (Employee e : employees) {
            if (e.getLevel().equals(lv)) {
                System.out.println(e);
            }
        }
    }
}
