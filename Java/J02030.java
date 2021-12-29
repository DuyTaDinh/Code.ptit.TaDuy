/*
 * SẮP XẾP CHÈN - LIỆT KÊ NGƯỢC
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J02030 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; ++i) {
            a[i] = sc.nextInt();
        }
        String[] s = new String[n + 1];
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            res.add(a[i]);
            Collections.sort(res);
            s[i] = "Buoc " + i + ": ";
            for (int val : res) {
                s[i] += (val + " ");
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            System.out.println(s[i]);
        }
    }
}
