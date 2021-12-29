/*
 * HIỆU SỐ NGUYÊN LỚN - 1
 * @author TaDuy
 */
import java.math.BigInteger;
import java.util.Scanner;

public class J03013 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a = sc.next();
            String b = sc.next();
            int tmp = Math.max(a.length(), b.length());
            BigInteger big1 = new BigInteger(a);
            BigInteger big2 = new BigInteger(b);
            String res = big1.subtract(big2).abs().toString();
            while (res.length() < tmp) {
                res = "0" + res;
            }
            System.out.println(res);

        }
    }
}
