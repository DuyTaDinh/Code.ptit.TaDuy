/*
 * BẢNG XẾP HẠNG
 * @since  05/12/2021
 * @author TaDuy
 */
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class J05042 {

    static class SinhVienPTIT {

        String name;
        int ac;
        int submit;

        public SinhVienPTIT(String name, int ac, int submit) {
            this.name = name;
            this.ac = ac;
            this.submit = submit;
        }

        public int getAc() {
            return ac;
        }

        public int getSubmit() {
            return submit;
        }

        public String getName() {
            return name;
        }

        @Override
        public String toString() {
            return name + " "
                    + ac + " "
                    + submit;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<SinhVienPTIT> svList = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String name = sc.nextLine();
            String temp = sc.nextLine();
            String[] arr = temp.split(" ");
            int ac = Integer.parseInt(arr[0]);
            int sm = Integer.parseInt(arr[1]);
            svList.add(new SinhVienPTIT(name, ac, sm));
        }
        svList.sort(Comparator.comparing(SinhVienPTIT::getAc).reversed()
                .thenComparing(SinhVienPTIT::getSubmit)
                .thenComparing(SinhVienPTIT::getName));

        for (SinhVienPTIT c : svList) {
            System.out.println(c);
        }
    }
}
