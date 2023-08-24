package begin;

import java.util.Scanner;

public class looop1 {
    // public static void main(String[] args) {
    //     int i=0;
    //     Scanner sc= new Scanner(System.in);
    //     int n;
    //     int sum=0;
    //     n=sc.nextInt();
    //     while(i<=n){
    //         sum+=i;
    //         i+=1;
    //     }
    //     System.out.print(sum);
    // }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int div=2;
        while (div<n){
            if(n%div==0){
                System.out.println("composite");
                break;
            }
            div+=1;
        }
        if(div==n){
            System.out.println("prime");
        }
    }
}
