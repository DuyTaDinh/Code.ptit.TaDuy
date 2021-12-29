/*
 * CHIA HẾT CHO 11
 * @author TaDuy
 */
import java.util.Scanner;

public class J03016 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a = sc.next();
            int tmp = 0;
            for (int i = 0; i < a.length(); i++) {
                tmp = (tmp * 10+ a.charAt(i) - '0') % 11;
            }
            System.out.println(tmp == 0 ? "1" : "0");
        }
    }
}
