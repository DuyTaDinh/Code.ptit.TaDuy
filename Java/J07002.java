/*
 * TÍNH TỔNG
 * @author TaDuy
 */
import java.io.File;
import java.util.Scanner;

public class J07002 {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DATA.in"));
        long res = 0;
        while (sc.hasNext()) {
            String s = sc.next();
            try {
                res += Integer.parseInt(s);
            } catch (NumberFormatException ex) {
            }
        }
        System.out.println(res);
        sc.close();
    }
}
