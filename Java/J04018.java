/*
 * SỐ PHỨC
 * @author TaDuy
 */
import java.util.Scanner;

public class J04018 {

    static class SoPhuc {

        //for real and imaginary parts of complex numbers
        private int thuc;
        private int ao;

        public SoPhuc(int thuc, int ao) {
            this.thuc = thuc;
            this.ao = ao;
        }

        public static SoPhuc add(SoPhuc c1, SoPhuc c2) {
            //creating a temporary complex number to hold the sum of two numbers
            SoPhuc temp = new SoPhuc(0, 0);
            temp.thuc = c1.thuc + c2.thuc;
            temp.ao = c1.ao + c2.ao;
            return temp;
        }

        public static SoPhuc multiply(SoPhuc c1, SoPhuc c2) {
            //(a + bi)*(c + di) = (ac - bd) + (ad + bc)i
            SoPhuc temp = new SoPhuc(0, 0);
            temp.thuc = c1.thuc * c2.thuc - c1.ao * c2.ao;
            temp.ao = c1.thuc * c2.ao + c1.ao * c2.thuc;
            return temp;
        }

        @Override
        public String toString() {
            return this.thuc + " + " + this.ao + "i";
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            int t1 = sc.nextInt();
            int a1 = sc.nextInt();
            int t2 = sc.nextInt();
            int a2 = sc.nextInt();
            SoPhuc a = new SoPhuc(t1, a1);
            SoPhuc b = new SoPhuc(t2, a2);
            SoPhuc c = SoPhuc.multiply(SoPhuc.add(a, b), a);
            SoPhuc d = SoPhuc.multiply(SoPhuc.add(a, b), SoPhuc.add(a, b));
            System.out.println(c + ", " + d);
        }
    }
}
