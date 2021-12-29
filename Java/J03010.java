/*
 * ĐỊA CHỈ EMAIL
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J03010 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<String> l = new ArrayList<>();
        while (n-- > 0) {
            String[] s = sc.nextLine().trim().toLowerCase().split("\\s+");
            String res = s[s.length - 1];
            for (int i = 0; i < s.length - 1; i++) {
                res += s[i].charAt(0);
            }
            l.add(res);
            int count = Collections.frequency(l, res);
            System.out.println(res + (count == 1 ? "" : count) + "@ptit.edu.vn");

        }
    }
}
