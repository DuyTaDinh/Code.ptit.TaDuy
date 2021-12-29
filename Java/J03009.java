/*
 * TẬP TỪ RIÊNG CỦA HAI XÂU
 * @author TaDuy
 */
import java.util.HashSet;
import java.util.Scanner;

public class J03009 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String[] s1 = sc.nextLine().split("\\s");
            String s2 = sc.nextLine();
            HashSet<String> s3 = new HashSet<>();
            for (String i : s1) {
                if (!s2.contains(i)) {
                    s3.add(i);
                }
            }
            for (String i : s3) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
