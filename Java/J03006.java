/*
 * SỐ ĐẸP 1
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J03006 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            boolean check = true;
            String s = sc.next();
            for (char ch : s.toCharArray()) {
                if ((ch - '0') % 2 == 1) {
                    check = false;
                    break;
                }
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
