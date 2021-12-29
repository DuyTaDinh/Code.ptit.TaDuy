import java.util.*;
/*
5 2
B17DTCN001
Nguyen Chi  Linh
0987345543
1
B17DTCN011
Vu Viet Thang
0981234567
1
B17DTCN023
Pham Trong Thang
0992123456
1
B17DTCN022
Nguyen Van  Quyet
0977865432
2
B17DTCN031
Ngo Thanh Vien
0912313111
2
Xay dung website ban dien thoai truc tuyen
Xay dung ung dung quan ly benh nhan Covid-19
 */

public class Test {
    static class sv{
        private String name;
        private String stt;
        private String ma;
        private long dongia;
        private long soluong;
        private long giamgia;
        private long thanhtien;

        public sv(){}

        public void nhap(Scanner s){
            s.nextLine();
            name = s.nextLine();
            ma = s.next();
            dongia = s.nextLong();
            soluong = s.nextLong();
        }

        private void setStt(){
            stt = ma.substring(1,ma.length()-1);
        }
        public String getStt(){return stt;}

        public void setGiamgia(){
            if(ma.charAt(ma.length()-1) == '2'){
                giamgia = Math.round(30.0/100*dongia*soluong);
            }
            else if(ma.charAt(ma.length()-1) == '1'){
                giamgia = Math.round(50.0/100*dongia*soluong);
            }
        }

        public void setThanhtien(){
            thanhtien  = dongia*soluong - giamgia;
        }

        public void in(){
            System.out.println(
                    this.name+" "+this.ma+" "+this.stt+" "+this.giamgia+" "+this.thanhtien
            );
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        List<sv> res = new ArrayList<>();
        while(n-->0){
            sv i = new sv();
            i.nhap(s);
            i.setStt();
            i.setGiamgia();
            i.setThanhtien();
            res.add(i);
        }
        Collections.sort(res, Comparator.comparing(sv::getStt));
        for(sv i :res){
            i.in();
        }
    }
}