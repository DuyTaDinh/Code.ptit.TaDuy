/*
 * SẮP XẾP THỜI GIAN
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05033 {

    static class Time {

        private int hour;
        private int minute;
        private int second;

        public void nhap(Scanner scanner) {
            hour = scanner.nextInt();
            minute = scanner.nextInt();
            second = scanner.nextInt();
        }

        public void in() {
            System.out.println(hour + " " + minute + " " + second);
        }

        public int getTime() {
            return hour * 60 * 60 + minute * 60 + second;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Time> res = new ArrayList<>();
        while (n-- > 0) {
            Time t = new Time();
            t.nhap(sc);
            res.add(t);
        }
        Collections.sort(res, Comparator.comparing(Time::getTime));
        res.forEach(Time::in);
    }
}
