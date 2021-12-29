/*
 * XÂU KHÁC NHAU DÀI NHẤT
 * @author TaDuy
 */
import java.util.Scanner;

public class J03026 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            System.out.println(s1.equals(s2) ? "-1" : Math.max(s1.length(), s2.length()));
        }
    }
}
