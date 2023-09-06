// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int compare(const void *a,const void *b){
//     int A=*((int *)a);
//     int B=*((int *)b);
//     return A-B;
// }

// int main(){
//     int i,A[]={1,3,5,4,2,5};
//     qsort(A,6,sizeof(int),compare);
//     for (int i=0;i<6;i++){
//         printf("%d",A[i]);
//     }
// }



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(void *a,void *b){
    int A=*((int *)a);
    int B=*((int *)b);
    return A-B;
}

int main(){
    int n;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);

    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}