import java.io.File;
import java.util.Scanner;

public class HELLOFILE {

    public static void main(String args[]) throws Exception {
        File myFile = new File("Hello.txt");
        Scanner sc = new Scanner(myFile);
        while (sc.hasNextLine()) {
            System.out.println(sc.nextLine());
        }

    }
}
