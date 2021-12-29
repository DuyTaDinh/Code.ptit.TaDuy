/*
 * XÂU ĐỐI XỨNG
 * @author TaDuy
 */
import java.util.Scanner;

public class J03025 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            int len = s.length(), dem = 0;
            for (int i = 0; i < len / 2; i++) {
                if (s.charAt(i) != s.charAt(len - i - 1)) {
                    dem++;
                }
            }
            if (len % 2 == 1) {
                System.out.println(dem <= 1 ? "YES" : "NO");
            } else {
                System.out.println(dem == 1 ? "YES" : "NO");
            }
        }
    }
}
