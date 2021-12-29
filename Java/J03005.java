/*
 * CHUẨN HÓA XÂU HỌ TÊN - 2
 * @author TaDuy
 */
import java.util.Scanner;

public class J03005 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String[] s = sc.nextLine().trim().split("\\s+");
            for (int i = 1; i < s.length; i++) {
                System.out.print(s[i].substring(0, 1).toUpperCase() + s[i].substring(1).toLowerCase());
                if (i != s.length - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println(", " + s[0].toUpperCase());
        }

    }
}
