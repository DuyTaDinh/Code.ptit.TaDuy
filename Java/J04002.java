/*
 * KHAI BÁO LỚP HÌNH CHỮ NHẬT
 * @author TaDuy
 */
import java.util.Scanner;

public class J04002 {

    static class Rectangle {

        private double width;
        private double height;
        private String color;

        public Rectangle() {
            this(1, 1, "");
        }

        public Rectangle(double width, double height, String color) {
            this.width = width;
            this.height = height;
            this.color = color;
        }

        public double getWidth() {
            return width;
        }

        public double getHeight() {
            return height;
        }

        public String getColor() {
            return color;
        }

        public void setWidth(double width) {
            this.width = width;
        }

        public void setHeight(double height) {
            this.height = height;
        }

        public void setColor(String color) {
            this.color = color;
        }

        public double findArea() {
            return (width * height);
        }

        public double findPerimeter() {
            return (width + height) * 2;
        }

        public String convertColor() {
            return String.valueOf(color.charAt(0)).toUpperCase() + color.substring(1).toLowerCase();
        }
        
        public void in(){
            Scanner sc = new Scanner(System.in);
            width = sc.nextDouble();
            height = sc.nextDouble();
            color = sc.next();
        }
    
        @Override
        public String toString() {
            if (width > 0 && height > 0) {
                return String.format("%d %d %s", (int) findPerimeter(), (int) findArea(), convertColor());
            }
            return "INVALID";
        }

    }

    public static void main(String args[]) {
        Rectangle hcn = new Rectangle();
        hcn.in();
        System.out.println(hcn);
    }
}
