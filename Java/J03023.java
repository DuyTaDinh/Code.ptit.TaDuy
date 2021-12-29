/*
 * SỐ LA MÃ
 * @author TaDuy
 */
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J03023 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Map<Character, Integer> m = new HashMap<>();
        m.put('I', 1);
        m.put('V', 5);
        m.put('X', 10);
        m.put('L', 50);
        m.put('C', 100);
        m.put('D', 500);
        m.put('M', 1000);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a = sc.next();
            long res = m.get(a.charAt(0));
            for (int i = 1; i < a.length(); i++) {
                long prev = m.get(a.charAt(i - 1));
                long next = m.get(a.charAt(i));
                if (prev < next) {
                    res += next - 2*prev; 
                } else {
                    res += next;
                }
            }
            System.out.println(res);
        }

    }
}
