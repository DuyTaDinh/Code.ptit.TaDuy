/*
 * TỔNG ƯỚC SỐ - 1
 * @author TaDuy
 */
import java.util.Scanner;

public class J01013 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int maxN = 2000001;
        boolean isnotPrime[] = new boolean[maxN];
        for (int i = 2; i * i < maxN; ++i) {  //sang ngto
            if (isnotPrime[i] == false) {
                for (int j = i * i; j < maxN; j += i) {
                    isnotPrime[j] = true;
                }
            }
        }
        int sumDiv[] = new int[maxN]; // tong uoc cua i
        for (int i = 2; i < maxN; ++i) {
            if (isnotPrime[i] == false) { // neu i la so nguyen to
                for (int j = i; j < maxN; j += i) {
                    int tmp = j;
                    while (tmp % i == 0) {
                        sumDiv[j] += i;   
                        tmp /= i;
                    }
                }
            }
        }
        int t = sc.nextInt();
        long count = 0;
        for (int i = 1; i <= t; i++) {
            count += sumDiv[sc.nextInt()];
        }
        System.out.println(count);
    }
}
