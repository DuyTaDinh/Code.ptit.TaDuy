/*
 * MẢNG ĐỐI XỨNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J02004 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            boolean check = true;
            for (int i = 0; i < n; ++i) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i <= n / 2; ++i) {
                if (a[i] != a[n - i - 1]) {
                    check = false;
                    break;
                }
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
