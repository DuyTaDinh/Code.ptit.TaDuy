/*
 * SẮP XẾP ĐƠN HÀNG
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05053 {

    static class sp {

        private String name;
        private String stt;
        private String ma;
        private long soluong;
        private long dongia;
        private long giamgia;
        private long thanhtien;

        public sp() {
        }

        public void nhap(Scanner s){
            s.nextLine();
            name = s.nextLine();
            ma = s.next();
            dongia = s.nextLong();
            soluong = s.nextLong();
        }

        private void setStt() {
            stt = ma.substring(1, ma.length() - 1);
        }

        public String getStt() {
            return stt;
        }

        public void setGiamgia() {
            if (ma.charAt(ma.length() - 1) == '1') {
                giamgia = Math.round(50.0 / 100 * dongia * soluong);
            } else if (ma.charAt(ma.length() - 1) == '2') {
                giamgia = Math.round(30.0 / 100 * dongia * soluong);
            }
        }

        public void setThanhtien() {
            thanhtien = dongia * soluong - giamgia;
        }

        public void in() {
            System.out.println(
                    this.name + " " + this.ma + " " + this.stt + " "
                    + this.giamgia + " " + this.thanhtien
            );
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        List<sp> res = new ArrayList<>();
        while (t-- > 0) {
            sp i = new sp();
            i.nhap(sc);
            i.setStt();
            i.setGiamgia();
            i.setThanhtien();
            res.add(i);
        }
        Collections.sort(res, Comparator.comparing(sp::getStt));
        res.forEach(sp::in);
    }
}
