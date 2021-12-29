/*
 * TÌM SỐ DƯ
 * @author TaDuy
 */
import java.util.Scanner;

public class J03018 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            long sum = 0;
            for (int i = 0; i < s.length(); i++) {
                int x = s.charAt(i) - '0';
                sum = (sum * 10 + x) % 4;
            }
            System.out.println(sum == 0 ? 4 : 0);
        }
    }
}
