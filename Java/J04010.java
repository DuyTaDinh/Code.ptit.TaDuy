/*
 * DIỆN TÍCH HÌNH TRÒN NGOẠI TIẾP TAM GIÁC
 * @author TaDuy
 */
import java.util.Scanner;

public class J04010 {

    static class Point {

        private double d1;
        private double d2;

        public Point() {
        }

        public void nhap(Scanner s) {
            d1 = s.nextDouble();
            d2 = s.nextDouble();
        }

        public double getD1() {
            return d1;
        }

        public double getD2() {
            return d2;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Point p1 = new Point();
            Point p2 = new Point();
            Point p3 = new Point();

            p1.nhap(sc);
            p2.nhap(sc);
            p3.nhap(sc);

            double d1 = Math.sqrt(Math.pow((p2.getD1() - p1.getD1()), 2) + Math.pow((p2.getD2() - p1.getD2()), 2));
            double d2 = Math.sqrt(Math.pow((p3.getD1() - p1.getD1()), 2) + Math.pow((p3.getD2() - p1.getD2()), 2));
            double d3 = Math.sqrt(Math.pow((p3.getD1() - p2.getD1()), 2) + Math.pow((p3.getD2() - p2.getD2()), 2));
            
            if (d1 + d2 > d3 && d1 + d3 > d2 && d3 + d2 > d1) {
                double r = Math.sqrt((d1 + d2 + d3) * (d1 + d2 - d3) * (d2 + d3 - d1) * (d1 + d3 - d2));
                r = (d1 * d2 * d3) / r;
                System.out.println(String.format("%.3f", Math.PI * (Math.pow(r, 2))));
            } else {
                System.out.println("INVALID");
            }
        }
    }
}
