/*
 * CHUẨN HÓA CÂU
 * @author TaDuy
 */
import java.util.Scanner;

public class J03029 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()) {
            String line = sc.nextLine().toLowerCase().trim();
            if (line.isEmpty()) {
                break;
            }                  
            // Ky tu dau viet hoa
            line = Character.toUpperCase(line.charAt(0)) + line.substring(1, line.length()); 
            // Cac tu cach nhau 1 khoang trong
            line = line.replaceAll("\\s+", " ");
            // Dien dau (.) xuong dong
            char last = line.charAt(line.length() - 1);
            if (last != '!' && last != '?' && last != '.') {
                line += ".";
            }
            // Dau ngat cau viet sat ky tu cuoi cung
            line = line.replaceAll("\\s*\\.\\s*", "\\. ");
            line = line.replaceAll("\\s*\\!\\s*", "\\! ");
            line = line.replaceAll("\\s*\\?\\s*", "\\? ");    
            // Dau cau viet hoa
            for (int i = 0; i < line.length() - 2; i++) {
                if (line.charAt(i) == '.' || line.charAt(i) == '!' || line.charAt(i) == '?') {
                    line = line.substring(0, i + 2) + Character.toUpperCase(line.charAt(i + 2)) + line.substring(i + 3, line.length());
                }
            }            
            System.out.println(line);
        }

    }
}
