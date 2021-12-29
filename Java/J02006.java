/*
 * HỢP CỦA HAI DÃY SỐ
 * @author TaDuy
 */
import java.util.Scanner;
import java.util.TreeSet;

public class J02006 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        TreeSet<Integer> a = new TreeSet<>();
        for (int i = 0; i < n + m; ++i) {
            a.add(sc.nextInt());
        }
        for (int i : a) {
            System.out.print(i + " ");
        }
    }
}
