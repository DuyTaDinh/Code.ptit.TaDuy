/*
 * GIAO CỦA HAI DÃY SỐ
 * @author TaDuy
 */
import java.util.Scanner;
import java.util.TreeSet;

public class J02005 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        TreeSet<Integer> a = new TreeSet<>();
        TreeSet<Integer> b = new TreeSet<>();
        for (int i = 0; i < n; ++i) {
            a.add(sc.nextInt());
        }
        for (int i = 0; i < m; ++i) {
            b.add(sc.nextInt());
        }
        a.retainAll(b);
        for (int i : a) {
            System.out.print(i + " ");
        }
    }
}
