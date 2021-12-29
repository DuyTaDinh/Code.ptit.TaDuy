/*
 * SẮP XẾP ĐỔI CHỖ TRỰC TIẾP
 * @author TaDuy
 */
import java.util.Scanner;

public class J02010 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; ++i) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n; ++i) {
            boolean isSwapped = false;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] < a[i]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    isSwapped = true;
                }
            }
            if (isSwapped) {
                System.out.print("Buoc " + (i + 1) + ": ");
                for (int val : a) {
                    System.out.print(val + " ");
                }
                System.out.println();
            }
        }
    }
}
