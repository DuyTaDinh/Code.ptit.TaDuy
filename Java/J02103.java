/*
 * TÍCH MA TRẬN VỚI CHUYỂN VỊ CỦA NÓ
 * @author TaDuy
 */
import java.util.Scanner;

public class J02103 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int dem = 1;
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] a = new int[n][m];
            int[][] b = new int[m][n]; // ma tran chuyen vi
            int res[][] = new int[n][n]; //ma tran tich
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextInt();
                    b[j][i] = a[i][j];
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < m; k++) {
                        res[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            System.out.println("Test " + dem++ + ":");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(res[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}
