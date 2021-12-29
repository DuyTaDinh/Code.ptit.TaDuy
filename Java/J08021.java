/*
 * DÃY NGOẶC ĐÚNG DÀI NHẤT
 * @since  10/12/2021
 * @author TaDuy
 */
import java.util.Scanner;
import java.util.Stack;

public class J08021 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String xau = sc.next();
            Stack<Integer> st = new Stack<>();
            st.push(-1);
            int res = 0;
            for (int i = 0; i < xau.length(); i++) {
                if (xau.charAt(i) == '(') {
                    st.push(i);
                } else {
                    if (st.size() > 1 && xau.charAt(st.peek()) == '(') {
                        st.pop();
                        res = Math.max(res, i - st.peek());
                    } else {
                        st.push(i);
                    }
                }
            }
            System.out.println(res);
        }
    }
}
