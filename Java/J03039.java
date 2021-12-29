/*
 * CHIA HẾT
 * @author TaDuy
 */
import java.math.BigInteger;
import java.util.Scanner;

public class J03039 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = new BigInteger(sc.next());
            BigInteger b = new BigInteger(sc.next());
            boolean check = false;
            if ("0" == a.mod(b).toString()) {
                check = true;
            }
            else if ("0" == b.mod(a).toString()) {
                check = true;
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
