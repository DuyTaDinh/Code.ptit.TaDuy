/*
 * SỐ ĐẸP 2
 * @author TaDuy
 */
import java.util.Scanner;

public class J03007 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            boolean check = true;
            String s = sc.next();
            if (s.charAt(0) != '8' || s.charAt(s.length() - 1) != '8') {
                check = false;
            } else {
                int sum = 0;
                for (char ch : s.toCharArray()) {
                    sum += (ch - '0');
                }
                if (sum % 10 != 0) {
                    check = false;
                }
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
