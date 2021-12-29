/*
 * SỐ TAM PHÂN
 * @author TaDuy
 */
import java.util.Scanner;

public class J01015 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        String tmp = "[0-2]+";
        while (t-- > 0) {
            String s = sc.nextLine();
            System.out.println(s.trim().matches(tmp) ? "YES" : "NO");
        }
    }
}
