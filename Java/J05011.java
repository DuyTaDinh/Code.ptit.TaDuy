/*
 * TÍNH GIỜ
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05011 {

    static class Gamer {

        String id;
        String name;
        String in;
        String out;
        int timeInMinute;

        public Gamer(String id, String name, String in, String out) {
            this.id = id;
            this.name = name;
            this.in = in;
            this.out = out;
            this.timeInMinute = timeInMinute();
        }

        private int timeInMinute() {
            int hourIn = Integer.parseInt(in.split(":")[0]);
            int minuteIn = Integer.parseInt(in.split(":")[1]);
            int hourOut = Integer.parseInt(out.split(":")[0]);
            int minuteOut = Integer.parseInt(out.split(":")[1]);
            return (hourOut * 60 + minuteOut) - (hourIn * 60 + minuteIn);
        }

        private String time() {
            String hour = Integer.toString(timeInMinute() / 60);
            String minute = Integer.toString(timeInMinute() % 60);
            return hour + " gio " + minute + " phut";
        }

        public int getTimeInMinute() {
            return timeInMinute;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + time();
        }

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Gamer> gList = new ArrayList<>();
        int t = sc.nextInt();sc.nextLine();
        while (t-- > 0) {
            String id, name, in, out;
            id = sc.nextLine();
            name = sc.nextLine();
            in = sc.nextLine();
            out = sc.nextLine();
            gList.add(new Gamer(id, name, in, out));
        }
        gList.sort(Comparator.comparing(Gamer::getTimeInMinute).reversed());
        for (Gamer g : gList) {
            System.out.println(g);
        }
    }
}
