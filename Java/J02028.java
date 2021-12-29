/*
 * DÃY CON LIÊN TIẾP TỔNG BẰNG K
 * @author TaDuy
 */
import java.util.Scanner;

public class J02028 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }
            boolean check = false;
            long sum = a[0];
            int l = 0,r = 1;
            while(r <= a.length){
                while (sum > k && l < r-1){
                   sum -= a[l];
                   l++;
               }
               if(sum == k){
                   check = true;
                   break;
               }
               if (r < a.length){
                   sum += a[r]; 
               }
               r++;
            }
            System.out.println(check == true ? "YES" : "NO");
            
        }
    }
}
