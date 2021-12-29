/*
 * SẮP XẾP HÓA ĐƠN BÁN QUẦN ÁO
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J06002 {

    static class Sp {

        private String ma;
        private String ten;
        private long gia1;
        private long gia2;

        public Sp() {
        }

        public void nhap(Scanner s) {
            ma = s.next();
            s.nextLine();
            ten = s.nextLine();
            gia1 = s.nextLong();
            gia2 = s.nextLong();
        }

        public String getMa() {
            return ma;
        }

        public String getTen() {
            return ten;
        }

        public long getGia1() {
            return gia1;
        }

        public long getGia2() {
            return gia2;
        }
        
        

    }
    
    static class Hd {

        private String ma;
        private String ten;
        private long gia1;
        private long gia2;
        private long giamgia;
        private long thanhtien;

        public Hd() {
        }

        public void setMa(String mahd, int stt) {
            ma = mahd + "-";
            if (stt < 10) {
                ma += "00" + stt;
            } else if (stt >= 10 && stt < 100) {
                ma += "0" + stt;
            } else {
                ma += stt;
            }
        }

        public void setGiamgia(int loai, int soluong) {
            long total = (loai == 1) ? soluong * gia1 : soluong * gia2;
            if (soluong >= 50 && soluong < 100) {
                giamgia = Math.round((15.0 / 100) * total);
                thanhtien = total - giamgia;
            } else if (soluong >= 100 && soluong < 150) {
                giamgia = Math.round((30.0 / 100) * total);
                thanhtien = total - giamgia;
            } else if (soluong >= 150) {
                giamgia = Math.round((50.0 / 100) * total);
                thanhtien = total - giamgia;
            } else {
                giamgia = 0;
                thanhtien = total;
            }
        }

        public void xuat() {
            System.out.println(ma + " " + ten + " " + giamgia + " " + thanhtien);
        }

        public void setGia1(long g) {
            gia1 = g;
        }

        public void setGia2(long g) {
            gia2 = g;
        }

        public void setTen(String t) {
            ten = t;
        }
        
        public long getThanhtien() {
            return thanhtien;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t1 = sc.nextInt();
        // List chua san pham
        List<Sp> listSP = new ArrayList<>();
        while (t1-- > 0) {
            Sp iSp = new Sp();
            iSp.nhap(sc);
            listSP.add(iSp);
        }
        // List chua hoa don
        List<Hd> listHD = new ArrayList<>();
        int t2 = sc.nextInt();
        int stt = 1;
        while (t2-- > 0) {
            String mahd = sc.next();
            int soluong = sc.nextInt();
            int loai = Integer.valueOf(mahd.substring(2));
            for (Sp i : listSP) {
                if (i.getMa().equals(mahd.substring(0, 2))) {
                    Hd hd = new Hd();
                    hd.setGia1(i.getGia1());
                    hd.setGia2(i.getGia2());
                    hd.setMa(mahd, stt);
                    hd.setTen(i.getTen());
                    hd.setGiamgia(loai, soluong);
                    listHD.add(hd);
                }
            }
            stt++;
        }
        // Sap xep giam dan list
        Collections.sort(listHD, Comparator.comparing(Hd::getThanhtien, Comparator.reverseOrder()));
        listHD.forEach(Hd::xuat);
    }

}
