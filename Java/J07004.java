/*
 * SỐ KHÁC NHAU TRONG FILE - 1
 * @author TaDuy
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07004 {

    public static void main(String args[]) {
        try {
            File file = new File("DATA.in");
            Scanner sc = new Scanner(file);
            int num[] = new int[1005];
            while (sc.hasNext()) {
                num[sc.nextInt()]++;
            }
            for (int i = 0; i < 1000; i++) {
                if (num[i] > 0) {
                    System.out.println(i + " " + num[i]);
                }
            }
            sc.close();
        } catch (FileNotFoundException e) {
            System.out.println(e);
        }

    }
}
