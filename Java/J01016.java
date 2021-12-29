/*
 * CHỮ SỐ 4 VÀ CHỮ SỐ 7
 * @author TaDuy
 */
import java.util.Scanner;

public class J01016 {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        int count = 0;
        for (int i = 0; i < n.length(); i++)
            if (n.charAt(i) == '4' || n.charAt(i) == '7')
                count++;
        System.out.println((count == 4 || count == 7) ? "YES" : "NO");
    }
}
