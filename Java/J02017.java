/*
 * THU GỌN DÃY SỐ
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J02017 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            a.add(sc.nextInt());
        }
        while(true){
            boolean check = false;
            for(int i = 1; i < a.size(); ++i) {
                if ((a.get(i) + a.get(i - 1)) % 2 == 0){
                    check = true;
                    a.remove(i);
                    a.remove(i - 1);
                    i -= 1;
                }
            }
            if (!check) break;
        }
        System.out.println(a.size());
    }
}
