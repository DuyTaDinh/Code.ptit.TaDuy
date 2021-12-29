/*
 * CÂU LẠC BỘ BÓNG ĐÁ - 1
 * @since  07/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Scanner;

public class J05069 {

    public static class CLB {

        protected String ma, tenCLB;
        protected long giaVe, soLuong, thanhTien;

        public CLB(String ma, String tenCLB, long giaVe) {
            this.ma = ma;
            this.tenCLB = tenCLB;
            this.giaVe = giaVe;

        }

        public void setSoLuong(long soLuong) {
            this.soLuong = soLuong;
        }
        
        public String getMa() {
            return ma;
        }
        
        @Override
        public String toString() {
            thanhTien = soLuong * giaVe;
            return tenCLB + " " + thanhTien;
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
                    long sL = Long.parseLong(arr[1]);
                    clb.setSoLuong(sL);
                    System.out.println(arr[0] + " " + clb);
                    break;
                }
            }
        }
    }
}
