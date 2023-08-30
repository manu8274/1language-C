// #include<stdio.h>
// enum month{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};
// int main(){
//     enum month present=jan;
//     for (present=jan;present<=dec;present++){
//         printf("%d\n",present);
//     }
// }

#include<stdio.h>
#include<string.h>
enum month{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};
int main(){
    enum month present=jan;
    char mon[12][10]={"jan","feb","mar","apr","may","jun","jul","aug","sept","oct","nov","dec"};
    for (present=jan;present<=dec;present++){
        printf("%d\t%s\n",present,mon[present-1]);
    }
}

