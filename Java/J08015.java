/*
 * CẶP SỐ CÓ TỔNG BẰNG K
 * @author TaDuy
 */
import java.util.HashMap;
import java.util.Scanner;

public class J08015 {

    static long getPairsCount(int arr[], int n, int sum) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        // hm chua so luong phan tu cua arr[i]
        for (int i = 0; i < n; i++) {
            if (!hm.containsKey(arr[i])) {
                hm.put(arr[i], 0);
            }
            hm.put(arr[i], hm.get(arr[i]) + 1);
        }
        long twice_count = 0;
        for (int i = 0; i < n; i++) {
            if (hm.get(sum - arr[i]) != null) {
                twice_count += hm.get(sum - arr[i]);
            }
            if (sum - arr[i] == arr[i]) {
                twice_count--;
            }
        }
        return twice_count / 2;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }
            System.out.println(getPairsCount(a, n, k));

        }
    }
}
