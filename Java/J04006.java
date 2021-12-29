/*
 * KHAI BÁO LỚP SINH VIÊN
 * @author TaDuy
 */
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class J04006 {

    static class sinhvien {

        private String ten;
        private String lop;
        private String ngsinh;
        private float gpa;

        public sinhvien() {
            this("", "", "", 0);
        }

        public sinhvien(String ten, String lop, String ngsinh, float gpa) {
            this.ten = ten;
            this.lop = lop;
            this.ngsinh = ngsinh;
            this.gpa = gpa;
        }

        public void nhap() {
            Scanner sc = new Scanner(System.in);
            ten = sc.nextLine();
            lop = sc.nextLine();
            ngsinh = sc.nextLine();
            gpa = sc.nextFloat();

        }

        public void convertBirthDay() {
            try {
                SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
                Date date = dateFormat.parse(ngsinh);
                ngsinh = dateFormat.format(date);
            } catch (Exception e) {
                // TODO: handle exception
            }
        }

        public void xuat() {
            convertBirthDay();
            System.out.println(String.format("B20DCCN001 %s %s %s %.2f", ten, lop, ngsinh, gpa));
        }

    }

    public static void main(String args[]) {
        sinhvien a = new sinhvien();
        a.nhap();
        a.xuat();
    }
}
