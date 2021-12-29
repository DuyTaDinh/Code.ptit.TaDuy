/*
 * HIỆU SỐ NGUYÊN LỚN - 2
 * @author TaDuy
 */
import java.math.BigInteger;
import java.util.Scanner;

public class J03015 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        BigInteger x = new BigInteger(sc.next());
        BigInteger y = new BigInteger(sc.next());
        System.out.println(x.subtract(y));
    }
}
