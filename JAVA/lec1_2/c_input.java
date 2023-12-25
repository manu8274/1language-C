package JAVA.lec1_2;

import java.util.Scanner;

public class c_input {
    public static void main(String args[]){
        // Scanner s=new Scanner(System.in);
        // int a,b;
        // a=s.nextInt();
        // b=s.nextInt();
        // System.out.println(a+b);
        // double a,b;
        // a=s.nextDouble();
        // b=s.nextDouble();
        // System.out.println(a+b); 
        // long a,b;
        // a=s.nextLong();
        // b=s.nextLong();
        // System.out.println(a+b);
        // String  a,b;               //for only a single word
        // a=s.next();
        // b=s.next();
        // System.out.println(a+b);
        // String a,b;                  //full line
        // a=s.nextLine();
        // b=s.nextLine();
        // System.out.println(a+1);

        // String a; 
        // a=s.next();
        // char c=a.charAt(0);       //for a single letter
        // System.out.println(c);
        // char v=s.next().charAt(0);//for a single letter
        // System.out.println(v);
        // Scanner s = new Scanner(System.in); ///to check ascii val of a letter
        // char a=s.next().charAt(0);
        // System.out.println(a+0);

// avg marks finding
        Scanner s=new Scanner(System.in);
        char n=s.next().charAt(0);
        int a,b,c;
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
        System.out.println(n);
        System.out.println((a+b+c)/3);
    }
}
