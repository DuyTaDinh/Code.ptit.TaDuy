/*
 * LIỆT KÊ TỔ HỢP - 1
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J02020 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] a = new int[k];
        ArrayList<String> res = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            a[i] = i + 1;
        }
        boolean ok = true;
        while (ok) {
            //in
            String temp = "";
            for (int i : a) {
                temp += i + " ";
            }
            res.add(temp);
            // kiem tra
            int i = k - 1;
            try {
                while (a[i] == n - k + i + 1 && i >= 0) {
                    i--;
                }
            } catch (ArrayIndexOutOfBoundsException e) {
                ok = false;
            }
            if (i >= 0) {
                //sinh
                a[i]++;
                for (int j = i + 1; j < k; j++) {
                    a[j] = a[i] + (j - i);
                }
            }
        }
        for (String i : res) {
            System.out.println(i);
        }
        System.out.println("Tong cong co " + res.size() + " to hop");

    }
}
