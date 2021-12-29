/*
 * BẢNG KÊ TIỀN LƯƠNG
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05038 {

    static class Employee {
        String id;
        String name;
        String level;
        long dailySalary;
        long day;        
        long salary;
        long bonus;
        long allowance;        
        long total;

        public Employee(int stt, String name, long dailySalary, long day, String level) {
            this.id = "NV" + String.format("%02d", stt);
            this.name = name;
            this.dailySalary = dailySalary;
            this.day = day;
            this.level = level;
            this.salary = dailySalary * day;
            this.bonus = getBonus();
            this.allowance = getAllowance();
            this.total = salary + bonus + allowance;
        }

        public long getBonus() {
            if (day >= 25) {
                return Math.round((double) (salary * 20) / 100);
            } else if (day >= 22) {
                return Math.round((double) (salary * 10) / 100);
            } else {
                return 0;
            }
        }

        public long getAllowance() {
            switch (level) {
                case "GD":
                    return 250000;
                case "PGD":
                    return 200000;
                case "TP":
                    return 180000;
                case "NV":
                    return 150000;
                default:
                    return 0;
            }
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + salary + " "
                    + bonus + " "
                    + allowance + " "
                    + total;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Employee> employees = new ArrayList<>();
        int stt = 1;
        long sum = 0;
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            long dailySalary = Long.parseLong(sc.nextLine());
            long day = Long.parseLong(sc.nextLine());
            String level = sc.nextLine();
            employees.add(new Employee(stt, name, dailySalary, day, level));
            stt++;
        }        
        for (Employee e : employees) {
            System.out.println(e);
            sum += e.total;
        }
        System.out.println("Tong chi phi tien luong: " + sum);
    }
}
