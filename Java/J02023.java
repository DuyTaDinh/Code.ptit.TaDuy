/*
 * LỰA CHỌN THAM LAM
 * @author TaDuy
 */
import java.util.Scanner;

public class J02023 {

    public static void min(int n, int s) {
        if (s == 0 || 9 * n < s) {
            System.out.print("-1 ");
            return;
        }
        int[] a = new int[n];
        s -= 1;
        for (int i = n - 1; i > 0; i--) {
            if (s > 9) {
                a[i] = 9;
                s -= 9;
            } else {
                a[i] = s;
                s = 0;
            }
        }
        a[0] = s + 1;
        for (int i = 0; i < n; i++) {
            System.out.print(a[i]);
        }
        System.out.print(" ");
    }

    public static void max(int n, int s) {
        if (s == 0 || 9 * n < s) {
            System.out.print("-1 ");
            return;
        }
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            if (s > 9) {
                a[i] = 9;
                s -= 9;
            } else {
                a[i] = s;
                s = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(a[i]);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = sc.nextInt();
        min(n, s);
        max(n, s);

    }
}
