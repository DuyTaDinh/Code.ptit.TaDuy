/**
 * PHÂN TÍCH THỪA SỐ NGUYÊN TỐ
 * @author TaDuy
 */
import java.util.Scanner;

public class J01008 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int k = 1;
        while (k <= t) {
            int n = sc.nextInt();
            System.out.printf("Test " + (k++) + ": ");
            for (int i = 2; i * i <= n; ++i) {
                int dem = 0;
                while (n % i == 0) {
                    dem++;
                    n /= i;
                }
                if (dem > 0) {
                    System.out.printf("%d(%d) ", i, dem);
                }
            }
            System.out.println(n > 1 ? n + "(1)" : "");

        }
        sc.close();
    }
}
