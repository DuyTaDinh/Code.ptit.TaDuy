/*
 * TÍNH LƯƠNG
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J05077 {

    static class NhanVien {

        private String ma;
        private String name;
        private String tenphong;
        private long luongcb;
        private int soNgayCong;
        private int heSo;
        private long tongluong;

        public NhanVien() {
        }

        public void nhap(Scanner s) {
            ma = s.next();
            s.nextLine();
            name = s.nextLine();
            luongcb = s.nextLong();
            soNgayCong = s.nextInt();
        }

        public void setHsnhan() {
            char hs = ma.charAt(0);
            int soNam = Integer.valueOf(ma.substring(1, 3));
            if (hs == 'A') {
                if (soNam >= 1 && soNam <= 3) {
                    hs = 10;
                } else if (soNam >= 4 && soNam <= 8) {
                    hs = 12;
                } else if (soNam >= 9 && soNam <= 16) {
                    hs = 14;
                } else if (soNam > 16) {
                    hs = 20;
                }
            } else if (hs == 'B') {
                if (soNam >= 1 && soNam <= 3) {
                    hs = 10;
                } else if (soNam >= 4 && soNam <= 8) {
                    hs = 11;
                } else if (soNam >= 9 && soNam <= 16) {
                    hs = 13;
                } else if (soNam > 16) {
                    hs = 16;
                }
            } else if (hs == 'C') {
                if (soNam >= 1 && soNam <= 3) {
                    hs = 9;
                } else if (soNam >= 4 && soNam <= 8) {
                    hs = 10;
                } else if (soNam >= 9 && soNam <= 16) {
                    hs = 12;
                } else if (soNam > 16) {
                    hs = 14;
                }
            } else if (hs == 'D') {
                if (soNam >= 1 && soNam <= 3) {
                    hs = 8;
                } else if (soNam >= 4 && soNam <= 8) {
                    hs = 9;
                } else if (soNam >= 9 && soNam <= 16) {
                    hs = 11;
                } else if (soNam > 16) {
                    hs = 13;
                }
            }
            heSo = hs;
        }

        public void setTenphong(String a) {
            tenphong = a;
        }

        public String getMa() {
            return ma;
        }

        public void setTongluong() {
            tongluong = luongcb * heSo * soNgayCong * 1000;
        }

        @Override
        public String toString() {
            return ma + " " + name + " " + tenphong + " " + tongluong;
        }

    }

    static class PhongBan {

        private String ma;
        private String name;

        public PhongBan() {
        }

        public void nhap(Scanner sc) {
            String temp = sc.nextLine();
            String t[] = temp.split(" ");
            ma = t[0];
            name = t[1];
            for (int i = 2; i < t.length; i++) {
                name += " " + t[i];
            }
        }

        public String getMa() {
            return ma;
        }

        public String getName() {
            return name;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        List<PhongBan> pbList = new ArrayList<>();
        while (t-- > 0) {
            PhongBan a = new PhongBan();
            a.nhap(sc);
            pbList.add(a);
        }
        List<NhanVien> nvList = new ArrayList<>();
        int q = sc.nextInt();
        while (q-- > 0) {
            NhanVien a = new NhanVien();
            a.nhap(sc);
            a.setHsnhan();
            for (PhongBan i : pbList) {
                if (i.getMa().equals(a.getMa().substring(3))) {
                    a.setTenphong(i.getName());
                }
            }
            a.setTongluong();
            nvList.add(a);
        }
        for (NhanVien i : nvList) {
            System.out.println(i);
        }
    }
}
