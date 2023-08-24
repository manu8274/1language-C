package begin;

import java.util.Scanner;

public class factors {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        int div=2;
        n=sc.nextInt();
        while(div<n){
            if(n%div==0){
                System.out.print(div+" ");
            }
            div+=1;
        }
    }
}
