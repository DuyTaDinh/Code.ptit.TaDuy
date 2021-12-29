/*
 * SẮP XẾP NHÂN VIÊN THEO THU NHẬP
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05045 {

    static class Employee {

        String id;
        String name;
        String level;
        long basicSalary;
        long workingDay;
        long luongChinh;
        long thunhap;
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
            this.luongChinh = workingDay * basicSalary ;
            this.thunhap = luongChinh + allowance;
            this.tamung = getTamUng();
            this.conlai = allowance + luongChinh - tamung;

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
            long a = (thunhap * 2) / 3;
            if (a < 25000) {
                return Math.round((double) a / 1000) * 1000;
            } else {
                return 25000;
            }
        }

        public String getId() {
            return id;
        }

        public long getThunhap() {
            return thunhap;
        }
        

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + allowance + " "
                    + luongChinh + " "
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
        employees.sort(Comparator.comparing(Employee::getThunhap).reversed());
        for (Employee e : employees) {
            System.out.println(e);
        }
    }
}
