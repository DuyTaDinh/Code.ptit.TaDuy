/*
 * TRẺ NHẤT – GIÀ NHẤT
 * @author TaDuy
 */
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

public class J05032 {

    static class Person {

        String name;
        Date date;

        public Person(String name, Date date) {
            this.name = name;
            this.date = date;
        }

        public Date getDate() {
            return date;
        }

        @Override
        public String toString() {
            return name;
        }
    }

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        ArrayList<Person> ps = new ArrayList<>();
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String name = sc.next();
            String date = sc.nextLine();
            Date date1 = new SimpleDateFormat("dd/MM/yyyy").parse(date);
            ps.add(new Person(name , date1));
        }

        ps.sort(Comparator.comparing(Person::getDate));
        System.out.println(ps.get(ps.size()-1));
        System.out.println(ps.get(0));
    }
}
