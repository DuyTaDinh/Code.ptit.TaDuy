/*
 * SẮP XẾP ĐỔI CHỖ TRỰC TIẾP - LIỆT KÊ NGƯỢC
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J02029 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            ArrayList<String> res = new ArrayList<>(); //tao mang chuoi luu tung dong kq
            for (int i = 0; i < n; ++i) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; ++i) {
                boolean isSwapped = false;
                for (int j = i + 1; j < n; ++j) {
                    if (a[j] < a[i]) {  // tim duoc phan tu nho hon thi doi cho
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                        isSwapped = true;
                    }
                }
                if (isSwapped) { // luu mang sau khi doi cho
                    String tmp = "Buoc " + (i + 1) + ": ";
                    for (int val : a) {
                        tmp += (val + " ");
                    }
                    res.add(tmp);
                }
            }
            for (int i = res.size() - 1; i >= 0; i--) {
                System.out.println(res.get(i));
            }
        }
    }
}
