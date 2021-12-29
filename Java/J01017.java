/*
 * SỐ LIỀN KỀ
 * @author TaDuy
 */
import java.util.Scanner;

public class J01017 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            System.out.println(check(s) ? "YES" : "NO");
        }
    }

    static boolean check(String s) {
        for (int i = 1; i < s.length(); i++) {
            if (Math.abs((s.charAt(i) - '0') - (s.charAt(i - 1) - '0')) != 1) {
                return false;
            }
        }
        return true;
    }
}
