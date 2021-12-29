/*
 * TÌM KIẾM GIẢNG VIÊN
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05027 {

    static class Teacher {

        private String name;
        private String subject;
        private String id;

        public void nhap(Scanner sc, int stt) {
            id = "GV" + String.format("%02d", stt);
            name = sc.nextLine();
            subject = shorten(sc.nextLine());
        }

        public String getName() {
            return name;
        }

        private String shorten(String s) {
            String shortened = "";
            String[] arr = s.split(" ");
            for (int i = 0; i < arr.length; i++) {
                shortened += arr[i].toUpperCase().charAt(0);
            }
            return shortened;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + subject;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Teacher> tcList = new ArrayList<>();
        int n = sc.nextInt();
        int stt = 1;
        sc.nextLine();
        while (n-- > 0) {
            Teacher tc = new Teacher();
            tc.nhap(sc, stt);
            tcList.add(tc);
            stt++;
        }
//        tcList.sort(Comparator.comparing(Teacher::getId));
        int q = sc.nextInt();
        sc.nextLine();
        while (q-- > 0) {
            String data = sc.nextLine();
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA " + data + ":");
            for (Teacher t : tcList) {
                if (t.getName().toLowerCase().contains(data.toLowerCase())) {
                    System.out.println(t);
                }
            }
        }
    }
}
