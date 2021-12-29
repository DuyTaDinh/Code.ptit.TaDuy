/*
 * ĐUA XE ĐẠP
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05015 {

    static class Player {

        private String ma;
        private String name;
        private String place;
        private String time;
        private float vector;

        public Player() {
        }

        public void nhap(Scanner s) {
            s.nextLine();
            name = s.nextLine();
            place = s.nextLine();
            time = s.next();
        }

        public void setMa() {
            ma = "";
            String tinh[] = place.split("\\s+");
            for (int i = 0; i < tinh.length; i++) {
                ma += tinh[i].charAt(0);
            }
            String ten[] = name.split("\\s+");
            for (int i = 0; i < ten.length; i++) {
                ma += ten[i].charAt(0);
            }
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }

        public String getPlace() {
            return place;
        }

        public void setVector() {
            String t[] = time.split(":");
            float h = Float.parseFloat(t[0]);
            float m = Float.parseFloat(t[1]);
            float gio = (h - 6) + (m / 60);
            vector = 120 / gio;
        }

        public float getVectorAsLong() {
            return vector;
        }

        public String getVectorAsString() {
            return String.format("%.0f", vector) + " Km/h";
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getName() + " " + this.getPlace() + " "
                    + this.getVectorAsString()
            );
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Player> lplayer = new ArrayList<>();
        while (t-- > 0) {
            Player i = new Player();
            i.nhap(sc);
            i.setMa();
            i.setVector();
            lplayer.add(i);
        }
        lplayer.sort(Comparator.comparing(Player::getVectorAsLong).reversed());
        for (Player i : lplayer) {
            i.xuat();
        }
    }
}
