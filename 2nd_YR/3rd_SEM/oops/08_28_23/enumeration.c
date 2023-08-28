#include<stdio.h>
#include<string.h>

// enum day {sun,mon,tue};//non -integer instances of enum in day 
// int main(){
//     enum day today;
//     today=tue;
//     printf("%d",today); 
// }

enum month{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};
int main(){
    enum month present=jan;
    for (present=jan;present<=dec;present++){
        printf("%d\n",present);
    }
}