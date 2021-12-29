/*
 * ĐIỂM CÂN BẰNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J02014 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            int b[] = new int[n];
            b[0] = a[0];
            for (int i = 1; i < n; i++) {
                b[i] = b[i - 1] + a[i]; // b[i] tong cac phan tu tu vt 0 -> i
            }
            boolean check = false;
            for (int i = 1; i < n; i++) {
                if (b[i - 1] == b[n - 1] - b[i]) { //tong tu 0-> i-1 == i +1 -> n-1
                    System.out.println(i + 1);
                    check = true;
                    break;
                }
            }
            if (!check) {
                System.out.println("-1");
            }
        }
    }
//    public static void main(String args[]) {
//        Scanner sc = new Scanner(System.in);
//        int t = sc.nextInt();
//        while (t-- > 0) {
//            int n = sc.nextInt();
//            int a[] = new int[n];
//            int left = 0, right = 0;
//            for (int i = 0; i < n; i++) {
//                a[i] = sc.nextInt();
//                right += a[i];
//            }
//            boolean check = false;
//            for (int i = 0; i < n; i++) {
//                right -= a[i];
//                if (left == right) {
//                    System.out.println(i + 1);
//                    check = true;
//                    break;
//                }
//                left += a[i];
//            }
//            if (!check) {
//                System.out.println(-1);
//            }
//        }
//    }
}
