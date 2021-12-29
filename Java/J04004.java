/*
 * TỔNG PHÂN SỐ
 * @author TaDuy
 */
import java.util.Scanner;

public class J04004 {

    static class PhanSo {

        private long t;
        private long m;

        public PhanSo(long t, long m) {
            this.t = t;
            this.m = m;
        }

        // simplifying fractions
        public void rutGon() {
            if (t != 1) {
                if (m % t == 0) {
                    m = m / t;
                    t = 1;
                } else {
                    long t1 = t;
                    long m1 = m;
                    while (t1 != m1) {
                        if (t1 < m1) {
                            m1 -= t1;
                        } else {
                            t1 -= m1;
                        }
                    }
                    t /= t1;
                    m /= t1;
                }
            }
        }

        public void xuat() {
            System.out.println(t + "/" + m);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long d = sc.nextLong();
        PhanSo p1 = new PhanSo(a * d + b * c, b * d);
        p1.rutGon();
        p1.xuat();
    }
}
