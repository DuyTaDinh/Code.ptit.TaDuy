/*
 * CHUẨN HÓA XÂU HỌ TÊN TRONG FILE
 * @since  10/12/2021
 * @author TaDuy
 */
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class J07021 {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        while (sc.hasNextLine()) {
            String xau = sc.nextLine();
            if (xau.equals("END")) {
                break;
            } else {
                xau = xau.trim();
                String b[] = xau.split("\\s+");
                for (int i = 0; i < b.length; i++) {
                    b[i] = Character.toUpperCase(b[i].charAt(0)) + b[i].substring(1).toLowerCase();
                }
                System.out.println(String.join(" ", b));
            }
        }

    }
}
