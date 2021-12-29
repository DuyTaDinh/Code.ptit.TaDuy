/*
 * ĐẾM SỐ LẦN XUẤT HIỆN
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J02007 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int i = 1;
        while (i <= t) {
            int n = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<Integer>();
            ArrayList<Integer> b = new ArrayList<Integer>();
            for (int j = 0; j < n; j++) {
                a.add(sc.nextInt());
            }
            for (int j : a) {   //tao mang b cac ki tu khong lap lai
                boolean check = true;
                for (int k : b) {
                    if (k == j) {
                        check = false;
                        break;
                    }
                }
                if (check) {
                    b.add(j);
                }
            }
            System.out.println("Test " + i + ":");
            for (int j : b) {
                System.out.printf("%d xuat hien %d lan\n", j, Collections.frequency(a, j));
            }
            i += 1;
        }

    }
}
