package begin;

import java.util.Scanner;

public class z {
    public static void main(String[] args) {
        // int i='c';
        // int j='c';
        //System.out.println(i==j);
        //System.out.println(i>j);
        // double a=55.5;
        // int b=55;
        // a=a%10;
        // b=b%10;
        // System.out.println(a+" "+b);
        Scanner s= new Scanner(System.in);
        int a,b;
        a=s.nextInt();
        b=s.nextInt();
        System.out.println(a);
        System.out.println(b);
        if (a>b) {
            System.out.println("True");
            
        } else {
            System.out.println("False");
        }
    }
}