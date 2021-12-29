/*
 * SẮP XẾP CHỌN - LIỆT KÊ NGƯỢC
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J02031 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        ArrayList<String> res = new ArrayList<>();
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
            String temp = "Buoc " + (i + 1) + ": ";
            for (int val : a) {
                temp += val + " ";
            }
            res.add(temp);
        }
        for (int i = res.size() - 1; i >= 0; i--) {
            System.out.println(res.get(i));
        }
    }
}
