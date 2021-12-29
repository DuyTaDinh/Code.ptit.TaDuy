/*
 * DANH SÁCH KỀ
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J02105 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n+1][n];
        for (int i = 1; i <= n; i++) {
            List<Integer> b = new ArrayList<>();
            for (int j = 1; j <= n; j++) {
                int tmp = sc.nextInt();
                if (tmp == 1) {
                    b.add(j);
                }
            }
            System.out.print("List(" + i + ") = ");
            b.forEach(j -> System.out.print(j + " "));
            System.out.println();
        }
    }
}
