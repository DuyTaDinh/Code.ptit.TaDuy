/*
 * SỐ KHÔNG LIỀN KỀ
 * @author TaDuy
 */
import java.util.Scanner;

public class J01018 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            System.out.println(sol(sc.next()) ? "YES" : "NO");
        }
    }

    static boolean sol(String s) {
        int sum = s.charAt(0) - '0';
        for (int i = 1; i < s.length(); i++) {
            if (Math.abs(s.charAt(i) - s.charAt(i - 1)) != 2) {
                return false;
            }
            sum += s.charAt(i) - '0';
        }
        return sum % 10 == 0;
    }
}
