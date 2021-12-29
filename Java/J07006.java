/*
 * SỐ KHÁC NHAU TRONG FILE - 3
 * @author TaDuy
 */
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public class J07006 {

    public static void main(String args[]) throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) in.readObject();
//        Collections.sort(a);
//        Map<Integer, Integer> m = new HashMap<>();
//        for (Integer i : a) {
//            if (m.containsKey(i)) {
//                m.put(i, m.get(i) + 1);
//            } else {
//                m.put(i, 1);
//            }
//        }
//        for (Integer i : m.keySet()) {
//            System.out.println(i + " " + m.get(i));
//        }
        int num[] = new int[1000];
        for (Integer i : a) {
            num[i]++;
        }
        for (int i = 0; i < 1000; i++) {
            if (num[i] > 0) {
                System.out.println(i + " " + num[i]);
            }
        }
    }
}
