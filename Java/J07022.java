/*
 * LOẠI BỎ SỐ NGUYÊN
 * @since  10/12/2021
 * @author TaDuy
 */
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07022 {

    public static void main(String[] args) throws IOException  {
        Scanner s = new Scanner(new File("DATA.in"));
        ArrayList<String> a = new ArrayList<>();
        while (s.hasNext()) {
            a.add(s.next());
        }
        ArrayList<String> res = new ArrayList<>();
        for (String i : a) {
            try {
                int b = Integer.valueOf(i);
            } catch (NumberFormatException e) {
                res.add(i);
            }
        }
        Collections.sort(res);
        for (String i : res) {
            System.out.print(i + " ");
        }
    }
}
