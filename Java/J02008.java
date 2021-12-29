/*
 * BỘI SỐ NHỎ NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN
 * @author TaDuy
 */
import java.util.Scanner;

public class J02008 {

    static long ucln(long a, long b) {
        return b == 0 ? a : ucln(b, a % b);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long res = 1;
            for (int i = 1; i <= n; i++) {
                res = (res * i) / ucln(res, i);
            }
            System.out.println(res);
        }
    }
}
