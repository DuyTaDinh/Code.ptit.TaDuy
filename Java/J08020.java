/*
 * KIỂM TRA DÃY NGOẶC ĐÚNG
 * @since  10/12/2021
 * @author TaDuy
 */
import java.util.Scanner;
import java.util.Stack;

public class J08020 {

    static boolean check(char x, char y) {
        if (x == '(' && y == ')') {
            return true;
        }
        if (x == '[' && y == ']') {
            return true;
        }
        if (x == '{' && y == '}') {
            return true;
        }
        return false;
    }

    static boolean resolve(String xau) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < xau.length(); i++) {
            char c = xau.charAt(i);
            if (st.empty()) {
                st.push(c);
            } else {
                if (check(st.peek(), c)) {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }
        return st.empty();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String xau = sc.next();
            if (resolve(xau)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
