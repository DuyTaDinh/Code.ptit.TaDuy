/*
 * ĐỌC FILE VĂN BẢN
 * @author TaDuy
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07001 {

    public static void main(String args[]) throws FileNotFoundException {
        File file = new File("DATA.in");
        Scanner sc = new Scanner(file);
        while (sc.hasNextLine()) {
            System.out.println(sc.nextLine());
        }
    }
}
