/*
 * SẮP XẾP DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN
 * @author TaDuy
 */
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

public class J05007 {

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

        public Date getBirthday() {
            Date d = null;
            try {
                d = new SimpleDateFormat("dd/MM/yyyy").parse(birth);
            } catch (ParseException ex) {
            }
            return d;
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
        ArrayList<Staff> stList = new ArrayList<>();
        while (n-- > 0) {
            Staff nv = new Staff();
            nv.nhap(sc, stt);
            stList.add(nv);
            stt++;
        }
        // 2 cach sort
//        Collections.sort(stList, Comparator.comparing(Staff::getBirthday));
        stList.sort(Comparator.comparing(Staff::getBirthday));
        stList.forEach(nv -> {
            System.out.println(nv);
        });
    }
}
