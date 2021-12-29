/*
 * ĐẢO TỪ
 * @author TaDuy
 */
import java.util.Scanner;

public class J03032 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String a = sc.nextLine();
            String s[] = a.split(" ");
            String res = "";
            for (String i : s) {
                res += new StringBuilder(i).reverse().toString() + " ";
            }
            System.out.println(res);
        }
    }
}
