/*
 * LỚP PAIR (generic)
 * @since  10/12/2021
 * @author TaDuy
 */
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class J07017 {

    static class Pair<T, S> {

        private T a;
        private S b;

        public Pair() {
        }
        
        public Pair(T a, S b) {
            this.a = a;
            this.b = b;
        }

        public boolean check1(T a) {
            if ((Integer) a < 2) {
                return false;
            }
            for (int i = 2; i <= Math.sqrt((Integer) a); i++) {
                if ((Integer) a % i == 0) {
                    return false;
                }
            }
            return true;
        }

        public boolean check2(S a) {
            if ((Integer) a < 2) {
                return false;
            }
            for (int i = 2; i <= Math.sqrt((Integer) a); i++) {
                if ((Integer) a % i == 0) {
                    return false;
                }
            }
            return true;
        }

        public boolean isPrime() {
            if (check1(a) && check2(b)) {
                return true;
            }
            return false;
        }

        @Override
        public String toString() {
            return a + " " + b;
        }
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            boolean check = false;
            for (int i = 2; i <= 2 * Math.sqrt(n); i++) {
                Pair<Integer, Integer> p = new Pair<>(i, n - i);
                if (p.isPrime()) {
                    System.out.println(p);
                    check = true;
                    break;
                }
            }
            if (!check) {
                System.out.println(-1);
            }
        }
    }
}
