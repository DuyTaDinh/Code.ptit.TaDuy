/*
 * SẮP XẾP NỔI BỌT - LIỆT KÊ NGƯỢC
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J02032 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            ArrayList<String> res = new ArrayList<>();
            for (int i = 0; i < n; ++i) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; ++i) {
                boolean check = true;
                for (int j = 0; j < n - 1; ++j) {
                    if (a[j] > a[j + 1]) {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                        check = false;
                    }
                }
                if (check) {
                    break;
                }
                String temp = "Buoc " + (i + 1) + ": ";
                for (int j : a) {
                    temp += (j + " ");
                }
                res.add(temp);
            }
            for (int i = res.size() - 1; i >= 0; i--) {
                System.out.println(res.get(i));
            }
        }
    }
}
