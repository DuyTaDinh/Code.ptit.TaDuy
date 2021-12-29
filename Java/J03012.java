/*
 * TỔNG SỐ NGUYÊN LỚN - 1
 * @author TaDuy
 */
import java.math.BigInteger;
import java.util.Scanner;

public class J03012 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = new BigInteger(sc.next());
            BigInteger b = new BigInteger(sc.next());
            System.out.println(a.add(b));
        }
    }
}
