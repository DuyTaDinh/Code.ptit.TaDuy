/*
 * XỬ LÝ VĂN BẢN
 * @author TaDuy
 */
import java.util.Scanner;

public class J03022 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        while (sc.hasNextLine()) {
            String line = sc.nextLine();
            s += line;
            if (line.isEmpty()) {
                break;
            }
        }
        String[] sentence = s.split("[.!?]");
        for (String i : sentence) {
            String[] temp = i.toLowerCase().trim().split("\\s+");
            System.out.print(temp[0].toUpperCase().charAt(0) + temp[0].substring(1)+" ");
            for (int j = 1; j < temp.length; j++) {
                System.out.print(temp[j]+" ");
            }
            System.out.println();
        }
    }
}
