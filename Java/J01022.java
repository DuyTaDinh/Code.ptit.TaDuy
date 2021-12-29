/*
 * XÂU NHỊ PHÂN
 * @author TaDuy
 */
import java.util.Scanner;

public class J01022 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a[] = new long[93];
        a[0] = 0;
        a[1] = 1;
        for (int i = 2; i <= 92; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            System.out.println(Fi(n, k, a));
            t--;
        }
    }

    static String Fi(int n, long k, long a[]) {
        if (n == 1 || n == 2) {
            return Integer.toString(n-1);
        }
        if (k <= a[n - 2]) {
            return Fi(n - 2, k, a);
        }
        return Fi(n - 1, k - a[n - 2], a);
    }
}
