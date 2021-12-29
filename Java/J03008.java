/*
 * SỐ ĐẸP 3
 * @author TaDuy
 */
import java.util.Scanner;

public class J03008 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            boolean check = true;
            String s = sc.next();
            String isPrime = "2357";
            int len = s.length();
            for (int i = 0; i <= len / 2; i++) {
                char c1 = s.charAt(i);
                char c2 = s.charAt(len - i - 1);
                if (c1 != c2 || isPrime.indexOf(c1) < 0) {
                    check = false;
                }
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
