/*
 * TÍNH LŨY THỪA
 * @author TaDuy
 */
import java.util.Scanner;

public class J01021 {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        while(true){
            long a = sc.nextLong();
            long b = sc.nextLong();
            if ( a == 0 && b == 0) break;
            long res = 1;
            long mod = (long)1e9 + 7;
            while(b > 0){
                if ( b % 2 != 0) res = res * a % mod;
                a = a * a % mod;
                b >>= 1;
            }
            System.out.println(res);
        }
    }
}
