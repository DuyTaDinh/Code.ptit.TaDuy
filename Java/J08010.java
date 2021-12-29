/*
 * TÌM TỪ THUẬN NGHỊCH DÀI NHẤT
 * @since  10/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class J08010 {

    static boolean check(String a) {
        return a.equals(new StringBuilder(a).reverse().toString());
    }

    public static void main(String[] args) {
        String res = "";
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            res += sc.next() + " ";
        }
        ArrayList<String> list = new ArrayList<String>(Arrays.asList(res.split("\\s+")));
        int dodai = 0;
        for (String i : list) {
            if (check(i) && i.length() > dodai) {
                dodai = i.length();
            }
        }
        ArrayList<String> set = new ArrayList<>();
        for (String i : list) {
            if (!set.contains(i)) {
                set.add(i);
            }
        }
        for (String i : set) {
            if (i.length() == dodai && check(i)) {
                System.out.println(i + " " + Collections.frequency(list, i));
            }
        }
    }
}
