/*
 * LIỆT KÊ TỪ KHÁC NHAU
 * @author TaDuy
 */
import java.io.File;
import java.io.IOException;
import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeSet;

public class J07007 {

    public static class WordSet {

        private SortedSet<String> ts;

        public WordSet(String s) throws IOException {
            Scanner sc = new Scanner(new File(s));
            SortedSet<String> ts = new TreeSet<>();
            while (sc.hasNext()) {
                ts.add(sc.next().toLowerCase());
            }
            this.ts = ts;
        }

        @Override
        public String toString() {
            String res = "";
            for (String i : ts) {
                res += i + "\n";
            }
            return res;
        }
    }

    public static void main(String[] args) throws IOException {
        WordSet ws = new WordSet("VANBAN.in");
        System.out.println(ws);
    }
}
