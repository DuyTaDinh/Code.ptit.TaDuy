/*
 * CẮT ĐÔI
 * @author TaDuy
 */
import java.util.Scanner;

public class J01010 {

    static String c2(String s) {
        String tmp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1' || s.charAt(i) == '0') {
                tmp += s.charAt(i);
            } else if (s.charAt(i) == '9' || s.charAt(i) == '8') {
                tmp += '0';
            } else {
                return "INVALID";
            }

        }
        String res = tmp.replaceFirst("^0+", "");
        return "".equals(res) ? "INVALID" : res;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            System.out.println(c2(sc.nextLine()));
        }
    }
}
