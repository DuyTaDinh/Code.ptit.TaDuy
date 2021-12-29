/*
 * LƯỢNG MƯA TRUNG BÌNH
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J05019 {

    static class Rain {

        private String ma;
        private String name;
        private String t1;
        private String t2;
        private float time;
        private float rainAmount;
        private float average;

        public Rain() {
        }

        public void nhap(Scanner s) {
            s.nextLine();
            name = s.nextLine();
            t1 = s.next();
            t2 = s.next();
            rainAmount = s.nextFloat();
        }

        public void setMa(int i) {
            ma = (i < 10) ? "T0" + i : "T" + i;
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }

        public void setTime() {
            String bd[] = t1.split(":");
            String kt[] = t2.split(":");
            float totalminus = (Integer.parseInt(kt[0]) * 60 + Integer.parseInt(kt[1])) - (Integer.parseInt(bd[0]) * 60 + Integer.parseInt(bd[1]));
            float totalTime = totalminus / 60;
            time = totalTime;
        }

        public float getTime() {
            return time;
        }

        public void addTime(float i) {
            time += i;
        }

        public void addRain(float i) {
            rainAmount += i;
        }

        public float getRain() {
            return rainAmount;
        }

        public void setAverage() {
            average = rainAmount / time;
        }

        public String getAverageAsString() {
            return String.format("%.2f", average);
        }

        public float getAverageAsFloat() {
            return average;
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getName() + " " + this.getAverageAsString()
            );
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        List<String> name = new ArrayList<>();
        List<Rain> rList = new ArrayList<>();
        int stt = 1;
        while (t-- > 0) {
            Rain i = new Rain();
            i.nhap(sc);
            i.setTime();
            if (!name.contains(i.getName())) {
                i.setMa(stt);                
                rList.add(i);
                name.add(i.getName());
                stt++;
            } else {
                int index = name.indexOf(i.getName());                
                rList.get(index).addRain(i.getRain());
                rList.get(index).addTime(i.getTime());
            }
        }
        for (Rain i : rList) {
            i.setAverage();
        }
        for (Rain i : rList) {
            i.xuat();
        }
    }
}
