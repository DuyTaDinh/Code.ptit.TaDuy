/*
 * SẮP XẾP DANH SÁCH GIẢNG VIÊN
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class J05025 {

    static class Teacher {

        private String name;
        private String subject;
        private String id;

        public void nhap(Scanner s, int stt) {
            name = s.nextLine();
            subject = s.nextLine();
            id = "GV" + String.format("%02d", stt);
        }

        public String getId() {
            return id;
        }

        public String getOnlyName() {
            String[] arr = name.split(" ");
            return arr[arr.length - 1];
        }

        private String shorten() {
            String shortened = "";
            String[] arr = subject.split(" ");
            for (int i = 0; i < arr.length; i++) {
                String s = arr[i].toUpperCase();
                shortened += s.charAt(0);
            }
            return shortened;
        }

        @Override
        public String toString() {
            return id + " "
                    + name + " "
                    + shorten();
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
//        Collections.sort(tcList, Comparator.comparing(Teacher::getOnlyName)
//                .thenComparing(Teacher::getId));
        tcList.sort(Comparator.comparing(Teacher::getOnlyName)
                .thenComparing(Teacher::getId));
        for (Teacher t : tcList) {
            System.out.println(t);
        }

    }
}
