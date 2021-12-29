/*
 * DANH SÁCH GIẢNG VIÊN THEO BỘ MÔN
 * @since  04/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05026 {

    static class Teacher {

        private String name;
        private String subject;
        private String id;

        public void nhap(Scanner sc, int stt) {
            id = "GV" + String.format("%02d", stt);
            name = sc.nextLine();
            subject = shorten(sc.nextLine());
        }

        public String getId() {
            return id;
        }

        private String shorten(String s) {
            String shortened = "";
            String[] arr = s.split(" ");
            for (int i = 0; i < arr.length; i++) {
                shortened += arr[i].toUpperCase().charAt(0);
            }
            return shortened;
        }

        public String getSubject() {
            return subject;
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
//        Collections.sort(tcList, Comparator.comparing(Teacher::getOnlyName)
//                .thenComparing(Teacher::getId));
//        tcList.sort(Comparator.comparing(Teacher::getId));
        int q = sc.nextInt();
        sc.nextLine();
        while (q-- > 0) {
            String data = sc.nextLine();
            String temp = "";
            String[] arr = data.split(" ");
            for (int i = 0; i < arr.length; i++) {
                temp += arr[i].toUpperCase().charAt(0);
            }
            System.out.println("DANH SACH GIANG VIEN BO MON " + temp + ":");
            for (Teacher t : tcList) {
                if (t.getSubject().equals(temp)) {
                    System.out.println(t);
                }
            }
        }
    }
}
