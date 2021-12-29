import java.util.Scanner;

/**
 * @author TaDuy
 */
public class J01006 {

    static long fi(int n) {
        if (n == 1 || n == 2) {
            return 1;
        }
        long a = 1, b = 1, c = 0;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            System.out.println(fi(n));
            t--;
        }
    }
}
