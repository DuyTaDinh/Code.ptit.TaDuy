/*
 * RÚT GỌN XÂU KÝ TỰ
 * @author TaDuy
 */
import java.util.Scanner;

public class J03027 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        StringBuilder s = new StringBuilder(sc.nextLine());
        int i = 0;
        while (i < s.length() - 1) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                s.delete(i, i + 2);
                i = 0;
            } else {
                i++;
            }
        }
        System.out.println(s.toString().isEmpty() ? "Empty String" : s);
    }
}
