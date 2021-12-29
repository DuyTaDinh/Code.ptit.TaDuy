/*
 * CÂU LẠC BỘ BÓNG ĐÁ - 2
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05070 {

    static class CLB {

        protected String ma, tenCLB, maTran;
        protected long giaVe, soLuong, thanhTien;

        public CLB(String ma, String tenCLB, long giaVe) {
            this.ma = ma;
            this.tenCLB = tenCLB;
            this.giaVe = giaVe;

        }

        public String getMa() {
            return ma;
        }

        public long getThanhTien() {
            return thanhTien;
        }

        public String getTenCLB() {
            return tenCLB;
        }

        public void setTranDau(String matran,long soLuong) {
            this.maTran = matran;
            this.soLuong = soLuong;
            this.thanhTien = this.soLuong * giaVe;
        }

        @Override
        public String toString() {            
            return maTran + " " + tenCLB + " " + thanhTien;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<CLB> clbList = new ArrayList<>();
        for (long i = 1; i <= t; i++) {
            clbList.add(new CLB(sc.nextLine(), sc.nextLine(),
                    Long.parseLong(sc.nextLine())));
        }

        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String arr[] = sc.nextLine().split("\\s+");
            String data = "";
            for (int i = 1; i <= 2; i++) {
                data += arr[0].charAt(i);
            }
            for (CLB clb : clbList) {
                if (data.equals(clb.getMa())) {
                    clb.setTranDau(arr[0],Long.parseLong(arr[1]));
                    break;
                }
            }
        }
        clbList.sort(Comparator.comparing(CLB::getThanhTien).reversed()
                .thenComparing(CLB::getTenCLB));
        for (CLB clb : clbList) {
            System.out.println(clb);
        }
    }
}
