/*
 * PHÂN SỐ
 * @author TaDuy
 */
import java.util.Scanner;

class PhanSo {

    private long ts;
    private long ms;

    public PhanSo() {
    }

    public void nhap() {
        Scanner s = new Scanner(System.in);
        ts = s.nextLong();
        ms = s.nextLong();
    }

    public long ucln(long tuSo, long mauSo) {
        if (mauSo == 0) {
            return tuSo;
        }
        return ucln(mauSo, (tuSo % mauSo));
    }

    public void rutGon() {
        long u = ucln(ts, ms);
        ts /= u;
        ms /= u;

    }

    @Override
    public String toString() {
        return ts + "/" + ms;
    }
}

public class J04003 {

    public static void main(String[] args) {
        PhanSo p = new PhanSo();
        p.nhap();
        p.rutGon();
        System.out.println(p);
    }
}
