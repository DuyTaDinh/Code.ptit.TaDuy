/*
 * BỐN ĐIỂM TRÊN MẶT PHẲNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J04011 {

    static class Point3D {

        private int x;
        private int y;
        private int z;

        public Point3D(int a, int b, int c) {
            x = a;
            y = b;
            z = c;
        }

        public int getX() {
            return x;
        }

        public int getY() {
            return y;
        }

        public int getZ() {
            return z;
        }

        public Point3D vecor(Point3D a) {
            Point3D v = new Point3D(x * a.getZ() - a.getX() * z,
                    z * a.getX() - a.getZ() * x, x * a.getY() - a.getX() * y);
            return v;
        }

        public static boolean check(Point3D p1, Point3D p2, Point3D p3, Point3D p4) {
            int p1_x = p1.getX(), p1_y = p1.getY(), p1_z = p1.getZ();
            int p2_x = p2.getX(), p2_y = p2.getY(), p2_z = p2.getZ();
            int p3_x = p3.getX(), p3_y = p3.getY(), p3_z = p3.getZ();
            int p4_x = p4.getX(), p4_y = p4.getY(), p4_z = p4.getZ();

            Point3D v1 = new Point3D(p2_x - p1_x, p2_y - p1_y, p2_z - p1_z);
            Point3D v2 = new Point3D(p3_x - p1_x, p3_y - p1_y, p3_z - p1_z);
            Point3D v3 = new Point3D(p4_x - p4_x, p4_y - p1_y, p4_z - p1_z);
            Point3D v4 = v1.vecor(v2);
            return (v3.getX() * v4.getX() + v3.getY() * v4.getY() + v3.getZ() * v4.getZ() == 0);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Point3D p1 = new Point3D(sc.nextInt(), sc.nextInt(), sc.nextInt());
            Point3D p2 = new Point3D(sc.nextInt(), sc.nextInt(), sc.nextInt());
            Point3D p3 = new Point3D(sc.nextInt(), sc.nextInt(), sc.nextInt());
            Point3D p4 = new Point3D(sc.nextInt(), sc.nextInt(), sc.nextInt());

            if (Point3D.check(p1, p2, p3, p4)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
