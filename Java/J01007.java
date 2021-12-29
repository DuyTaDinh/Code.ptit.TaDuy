import java.util.Scanner;

/**
 * @author TaDuy
 */
public class J01007 {

    static boolean fi(long n) {
        if (n <= 3) {
            return true;
        }
        long a = 1, b = 1, c = 0;
        while (c < n) {
            c = a + b;
            a = b;
            b = c;
        }
        return c == n;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            long n = sc.nextLong();
            System.out.println(fi(n) ? "YES" : "NO");
            t--;
        }
    }
}
