/*
 * SẮP XẾP CHỌN
 * @author TaDuy
 */
import java.util.Scanner;

public class J02011 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] < a[minIndex]) {
                    minIndex = j;
                }
            }
            if (a[minIndex] != a[i]) {
                int temp = a[i];
                a[i] = a[minIndex];
                a[minIndex] = temp;
            }
            System.out.print("Buoc " + (i + 1) + ": ");
            for (int val : a) {
                System.out.print(val + " ");
            }
            System.out.println();
        }
    }
}
