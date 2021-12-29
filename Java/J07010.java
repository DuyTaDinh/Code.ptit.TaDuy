/*
 * DANH SÁCH SINH VIÊN TRONG FILE - 2
 * @author TaDuy
 */
import java.io.File;
import java.io.IOException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

public class J07010 {

    public static class SinhVien {

        private String ma, ten, lop;
        private Date ngaySinh;
        private double GPA;

        public SinhVien(int stt, String ten, String lop, String ngaySinh, double GPA) throws ParseException {
            this.ma = "B20DCCN" + String.format("%03d", stt);
            this.ten = ten;
            this.lop = lop;
            this.ngaySinh = new SimpleDateFormat("dd/mm/yyyy").parse(ngaySinh);
            this.GPA = GPA;
        }

        @Override
        public String toString() {
            return ma + " " + ten + " " + lop + " " + new SimpleDateFormat("dd/mm/yyyy").format(ngaySinh)
                    + " " + String.format("%.2f", GPA);
        }
    }

    public static void main(String[] args) throws ParseException, IOException {
        Scanner in = new Scanner(new File("SV.in"));
        int t = Integer.parseInt(in.nextLine());
        List<SinhVien> l = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            l.add(new SinhVien(i, in.nextLine(), in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine())));
        }
        for (SinhVien s : l) {
            System.out.println(s);
        }
    }
}
