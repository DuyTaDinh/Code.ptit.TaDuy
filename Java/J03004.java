/*
 * CHUẨN HÓA XÂU HỌ TÊN - 1
 * @author TaDuy
 */
import java.util.Scanner;

public class J03004 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String[] s = sc.nextLine().trim().split("\\s+");
            for (String i : s) {
                System.out.print(i.substring(0, 1).toUpperCase() + i.substring(1).toLowerCase() + " ");
            }
            System.out.println();
        }
    }
}
