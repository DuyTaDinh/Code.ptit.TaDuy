import java.util.Scanner;

public class J01004 {

    private static int isPrime(int n) {
        if (n < 2) {
            return 0;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            if (isPrime(n) == 0) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
            t--;
        }

    }
}
