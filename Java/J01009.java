/*
 * TỔNG GIAI THỪA
 * @author TaDuy
 */
import java.util.Scanner;

public class J01009 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long res = 1, tmp = 1;
        for (int i = 2; i <= n; i++) {
            tmp *= i;
            res += tmp;
        }
        System.out.println(res);

    }
}
