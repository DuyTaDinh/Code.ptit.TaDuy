/*
 * HÌNH SAO
 * @author TaDuy
 */
import java.util.Scanner;

public class J08012 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int d1 = 1, d2 = 1;
        for (int i = 2; i < n; i++) {
            int s = sc.nextInt();
            int e = sc.nextInt();
            if (s == a) {
                d1++;
            }
            if (s == b) {
                d2++;
            }
        }
        if (d1 == n - 1 || d2 == n - 1) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
