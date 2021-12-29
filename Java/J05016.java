/*
 * HÓA ĐƠN KHÁCH SẠN
 * @since  05/12/2021
 * @author TaDuy
 */
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05016 {

    static class KhachHang {

        private String ma;
        private String name;
        private String phong;
        private String start;
        private String end;
        private long phatsinh;
        private long songay;
        private long tong;

        public KhachHang() {
        }

        public void nhap(Scanner s, int stt) {
            s.nextLine();
            name = s.nextLine();
            phong = s.next();
            start = s.next();
            end = s.next();
            phatsinh = s.nextLong();
            ma = "KH" + String.format("%02d", stt);
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }

        public void setSongay() {
            String bd[] = start.split("/");
            String kt[] = end.split("/");
            start = bd[bd.length - 1];
            for (int i = bd.length - 2; i >= 0; i--) {
                start += "-" + bd[i];
            }
            end = kt[kt.length - 1];
            for (int i = kt.length - 2; i >= 0; i--) {
                end += "-" + kt[i];
            }
            LocalDate dBefore = LocalDate.parse(start, DateTimeFormatter.ISO_LOCAL_DATE);
            LocalDate dAfter = LocalDate.parse(end, DateTimeFormatter.ISO_LOCAL_DATE);

            songay = dBefore.until(dAfter, ChronoUnit.DAYS) + 1;
        }

        public long getSongay() {
            return songay;
        }

        public void setTong() {
            int tienphong = 0;
            switch (phong.charAt(0)) {
                case '1':
                    tienphong = 25;
                    break;
                case '2':
                    tienphong = 34;
                    break;
                case '3':
                    tienphong = 50;
                    break;
                case '4':
                    tienphong = 80;
                    break;
                default:
                    break;
            }
            tong = tienphong * songay + phatsinh;
        }

        public long getTong() {
            return tong;
        }

        public String getPhong() {
            return phong;
        }

        public void xuat() {
            System.out.println(
                    this.getMa() + " " + this.getName() + " " + this.getPhong() + " "
                    + this.getSongay() + " " + this.getTong()
            );
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<KhachHang> res = new ArrayList<>();
        int stt = 1;
        while (t-- > 0) {
            KhachHang i = new KhachHang();
            i.nhap(sc,stt);
            i.setSongay();
            i.setTong();
            res.add(i);
            stt++;
        }
        res.sort(Comparator.comparing(KhachHang::getTong).reversed());
        for (KhachHang i : res) {
            i.xuat();
        }
    }
}
