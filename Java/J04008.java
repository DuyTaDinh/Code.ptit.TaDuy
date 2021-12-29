/*
 * CHU VI TAM GIÁC
 * @author TaDuy
 */
import java.text.DecimalFormat;
import java.util.Scanner;

public class J04008 {

    static class Point {

        private double x;
        private double y;

        public Point() {
        }

        public Point(double d1, double d2) {
            this.x = d1;
            this.y = d2;
        }

        public Point(Point p) {
            this.x = p.x;
            this.y = p.y;
        }

        public void nhap(Scanner s) {
            x = s.nextDouble();
            y = s.nextDouble();
        }

        public double getD1() {
            return x;
        }

        public double getD2() {
            return y;
        }

        public double distance(Point secondPoint) {
            double d1 = this.x - secondPoint.x;
            double d2 = this.y - secondPoint.y;
            return Math.sqrt((d1 * d1) + (d2 * d2));
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

            double a = p1.distance(p2);
            double b = p1.distance(p3);
            double c = p2.distance(p3);

            DecimalFormat decf = new DecimalFormat("#0.000");
            if (a + b > c && a + c > b && b + c > a) {
                System.out.println(decf.format(a+b+c));
            } else {
                System.out.println("INVALID");
            }
        }
    }
}
