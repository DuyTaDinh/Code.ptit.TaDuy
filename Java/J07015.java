/*
 * SỐ NGUYÊN TỐ TRONG FILE NHỊ PHÂN
 * @author TaDuy
 */
import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public class J07015 {

    static boolean isPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String args[]) throws Exception {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) in.readObject();
        Map<Integer, Integer> m = new HashMap<>();
        ArrayList<Integer> key = new ArrayList<>();
        for (Integer i : a) {
            if (m.containsKey(i)) {
                m.put(i, m.get(i) + 1);
            } else {
                if (isPrime(i)) {
                    m.put(i, 1);
                    key.add(i);
                }
            }
        }
        Collections.sort(key);
        for (Integer i : key) {
            System.out.println(i + " " + m.get(i));
        }

    }
}
