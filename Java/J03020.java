/*
 * TÌM TỪ THUẬN NGHỊCH DÀI NHẤT
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J03020 {

    static boolean check(String a) {
        return a.equals(new StringBuilder(a).reverse().toString());
    }

    public static void main(String[] args) {
        String res = "";
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()) {
            String line = sc.nextLine();
            res += line + " ";
            if (line.isEmpty()) {
                break;
            }
        }
        List<String> list = Arrays.asList(res.split("\\s+"));
        List<String> distinct = new ArrayList<>();
        int lmax = 0;
        for (String i : list) {
            if (!distinct.contains(i) && check(i)) {
                distinct.add(i);
            }
        }
        for (String i : distinct) {
            if (i.length() > lmax) {
                lmax = i.length();
            }
        }
        for (String i : distinct) {
            if (i.length() == lmax) {
                System.out.println(i + " " + Collections.frequency(list, i));
            }
        }
    }
}
