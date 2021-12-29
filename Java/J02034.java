/*
 * BỔ SUNG DÃY SỐ
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class J02034 {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        int j = 0,tmp = a[n-1];
        boolean check = false;
        for(int i = 1; i<= tmp; i++) {
            if (i == a[j]) j++;
            else {
                System.out.println(i);
                check = true;
            }
        }
        if (check == false) System.out.println("Excellent!");
    }
}
