package begin;

import java.util.Scanner;

public class condition{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        if(a>b){
            System.out.print(a);
            System.out.print(" is greater than ");
            System.out.print(b);
        }
        else{
            if(a==b){
                System.out.print(b);
                System.out.print(" is equal to ");
                System.out.print(a);
            }
            else{
                System.out.print(b);
                System.out.print(" is greater than ");
                System.out.print(a);
            }
        }
    }
}