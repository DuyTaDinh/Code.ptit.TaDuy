import java.util.Scanner;

public class J01001 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int leng, wid;
        leng = sc.nextInt();
        wid = sc.nextInt();
        if (leng <= 0 || wid <= 0) {
            System.out.println("0");
        } else {
            System.out.println((leng + wid) * 2 + " " + leng * wid);
        }
    }
}
