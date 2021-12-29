/*
 * KHAI BÁO LỚP POINT
 * @author TaDuy
 */
import java.text.DecimalFormat;
import java.util.Scanner;

public class J04001 {

    static class Point {

        private double x;
        private double y;

        public Point() {
        }

        public void Point(double x, double y) {
            this.x = x;
            this.y = y;
        }

        public Point(Point p) {
            this.x = p.x;
            this.y = p.y;
        }

        public double getX() {
            return x;
        }

        public void setX(double x) {
            this.x = x;
        }

        public double getY() {
            return y;
        }

        public void setY(double y) {
            this.y = y;
        }

        public double distance(Point secondPoint) {
            double dx = this.x - secondPoint.x;
            double dy = this.y - secondPoint.y;
            double res = Math.sqrt((dx * dx) + (dy * dy));
            return res;
        }

        public double distance(Point p1, Point p2) {
            double dx = p1.x - p2.x;
            double dy = p1.y - p2.y;
            double res = Math.sqrt((dx * dx) + (dy * dy));
            return res;
        }

        @Override
        public String toString() {
            return super.toString();
        }

    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            Point p1 = new Point();
            Point p2 = new Point();
            p1.setX(scanner.nextDouble());
            p1.setY(scanner.nextDouble());
            p2.setX(scanner.nextDouble());
            p2.setY(scanner.nextDouble());
            DecimalFormat a = new DecimalFormat("#0.0000");
            System.out.println(a.format(p1.distance(p2)));
        }

    }
}
