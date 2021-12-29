/*
 * SỐ 0 VÀ SỐ 9
 * @since  10/12/2021
 * @author TaDuy
 */
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class J08024 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Queue<Integer> q = new LinkedList<>();
            q.add(9);
            while (true) {
                int tmp = q.poll();
                if (tmp % n == 0) {
                    System.out.println(tmp);
                    break;
                }
                q.add(tmp * 10);
                q.add(tmp * 10 + 9);
            }
        }
    }
}
