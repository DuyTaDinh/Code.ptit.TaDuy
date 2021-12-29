/*
 * ƯỚC SỐ CHIA HẾT CHO 2
 * @author TaDuy
 */
import java.util.Scanner;

public class J01012 {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            if (n%2 != 0) {
                System.out.println("0");
                continue;
            }
            int dem = 1;
            for (int i = 2; i* i < n; i++) {
                if (n%i == 0) {
                    if (i %2 == 0) dem++;
                    if (n/i % 2 ==0) dem++;
                }
            }
            double sq = Math.sqrt(n);
            if ((sq - Math.floor(sq)) == 0 && sq %2 == 0) dem++;
            System.out.println(dem);
        }
    }
}
