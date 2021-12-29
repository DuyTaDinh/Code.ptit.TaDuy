/*
 * TÍNH TOÁN PHÂN SỐ
 * @author TaDuy
 */
import java.util.Scanner;

public class J04014 {

    static class PhanSo {

        Scanner sc = new Scanner(System.in);

        private long tuSo;
        private long mauSo;

        public PhanSo(long tuSo, long mauSo) {
            this.tuSo = tuSo;
            this.mauSo = mauSo;
        }

        public long UCLN(long a, long b) {
            while (b != 0) {
                long tmp = a % b;
                a = b;
                b = tmp;
            }
            return a;
        }

        public void rutGon() {
            long ucln = UCLN(this.tuSo, this.mauSo);
            this.tuSo /= ucln;
            this.mauSo /= ucln;
        }

        public static PhanSo add(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo(a.tuSo * b.mauSo + b.tuSo * a.mauSo, a.mauSo * b.mauSo);
            c.rutGon();
            return c;
        }

        public static PhanSo multiply(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo(a.tuSo * b.tuSo, a.mauSo * b.mauSo);
            c.rutGon();
            return c;
        }

        public String toString() {
            return this.tuSo + "/" + this.mauSo;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            long t1 = sc.nextLong();
            long m1 = sc.nextLong();
            long t2 = sc.nextLong();
            long m2 = sc.nextLong();
            PhanSo a = new PhanSo(t1, m1);
            PhanSo b = new PhanSo(t2, m2);
            PhanSo c = PhanSo.multiply(PhanSo.add(a, b), PhanSo.add(a, b));
            PhanSo d = PhanSo.multiply(PhanSo.multiply(a, b), c);
            System.out.println(c + " " + d);
        }
    }
}
