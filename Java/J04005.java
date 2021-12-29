/*
 * KHAI BÁO LỚP THÍ SINH
 * @author TaDuy
 */
import java.util.Scanner;

public class J04005 {

    static class thisinh {

        private String name;
        private String date;
        private float d1;
        private float d2;
        private float d3;

        public thisinh() {
        }

        public void nhap() {
            Scanner sc = new Scanner(System.in);
            name = sc.nextLine();
            date = sc.nextLine();
            d1 = sc.nextFloat();
            d2 = sc.nextFloat();
            d3 = sc.nextFloat();
        }

        public void xuat() {
            System.out.print(name + " " + date + " ");
            System.out.printf("%.1f", d1 + d2 + d3);
        }

    }

    public static void main(String args[]) {
        thisinh a = new thisinh();
        a.nhap();
        a.xuat();
    }
}
