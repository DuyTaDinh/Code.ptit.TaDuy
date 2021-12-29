/*
 * MA TRẬN NHỊ PHÂN
 * @author TaDuy
 */
import java.util.Scanner;

public class J02106 {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int dem = 0,tmp;
        while(n-- > 0) {
            tmp = 0;
            for (int i = 0; i < 3; i++) {
                if (sc.nextInt() == 0) tmp++;
            }
            if(tmp == 0 || tmp == 1) dem++;
        }
        System.out.println(dem);
    }
}
