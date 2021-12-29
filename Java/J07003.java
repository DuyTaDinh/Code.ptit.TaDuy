/*
 * TÁCH ĐÔI VÀ TÍNH TỔNG 
 * @author TaDuy
 */
import java.io.FileReader;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Paths;

public class J07003 {

    public static void main(String args[]) throws Exception {
//        FileReader fr = new FileReader("DATA.in");
//        int i;
//        String s = "";
//        while ((i = fr.read()) != -1) {
//            s += (char) i;
//        }
//        fr.close();
        String s = new String(Files.readAllBytes(Paths.get("DATA.in")));
        BigInteger num;
        if (s.length() == 1) {
            System.out.println(s);
        } else {
            while (s.length() > 1) {
                BigInteger l, r;
                l = new BigInteger(s.substring(0, s.length() / 2));
                r = new BigInteger(s.substring(s.length() / 2));
                num = l.add(r);
                s = num.toString();
                System.out.println(s);
            }
        }
    }
}
