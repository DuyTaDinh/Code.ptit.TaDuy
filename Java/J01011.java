/*
 * BỘI SỐ CHUNG - ƯỚC SỐ CHUNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J01011 {

    static long gcd(long a, long b) {
        return a == 0 ? b : gcd(b % a, a);

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long a = sc.nextInt();
            long b = sc.nextInt();
            long ucln = gcd(a, b);
            System.out.println((a / ucln * b) + " " + ucln);
        }
    }
}
