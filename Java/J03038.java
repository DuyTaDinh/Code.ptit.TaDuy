/*
 * ĐÁNH DẤU CHỮ CÁI
 * @author TaDuy
 */
import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Set;

public class J03038 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Set<Character> res = new LinkedHashSet<>();
        for (int i = 0; i < s.length(); i++) {
            res.add(s.charAt(i));
        }
        System.out.println(res.size());

    }
}
