/*
 * DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN
 * @author TaDuy
 */
import java.util.Scanner;

public class J05006 {

    static class Staff {

        private String maNV;
        private String name;
        private String gt;
        private String birth;
        private String address;
        private String taxID;
        private String contractID;

        public Staff() {
        }

        public void nhap(Scanner s, int stt) {
            maNV = String.format("%05d", stt);
            s.nextLine();
            name = s.nextLine();
            gt = s.next();
            birth = s.next();
            s.nextLine();
            address = s.nextLine();
            taxID = s.next();
            contractID = s.next();
        }

        @Override
        public String toString() {
            return maNV + " "
                    + name + " "
                    + gt + " "
                    + birth + " "
                    + address + " "
                    + taxID + " "
                    + contractID;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int stt = 1;
        while (n-- > 0) {
            Staff nv = new Staff();
            nv.nhap(sc, stt);
            System.out.println(nv);
            stt++;
        }
    }
}
