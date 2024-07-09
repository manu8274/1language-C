// #include<stdio.h>

// typedef struct{
//     int pid;
//     int priority;
//     union{
//         int filedes;
//         struct {
//             int baseadd;
//             int limit;
//         }memoryinfo;
//         struct{
//             int opensocket;
//             int connectionstatus;
//         }networkinfo;
//     }specificdata;
// }PCB;

// void display(PCB,pcb){
//     printf("process id = %d\n",PCB.pid);
//     printf("priority = %d\n",PCB.priority);
// }

// int main(){
//     PCB process1 = {1,10,{123}};
//     PCB process2 = {2,5,.specificdata.memoryinfo={4096,8192}};
//     PCB process3 = {3,8,.specificdata.networkinfo={3,1}};

// }
//to calc area and perimeter using union
#include<stdio.h>
union  shape{
    struct{
        float length,width;
    }rect;
    struct{
        float radius;
    }circle;
};

float rectarea(float length,float width){
    return length *width;
}
float circarea(float radius){
    return 3.14* radius *radius;
}
float rectperi(float length,float width){
    return ((length +width )*2);
}
float circperi(float radius){
    return 3.14* radius *2;
}
int main(){
    union shape shape1;
    shape1.rect.length=5;
    shape1.rect.width=3;
    printf("area of rectangle =%0.2f\n",rectarea(shape1.rect.length,shape1.rect.width));
    printf("perimeter of rectangle =%0.2f\n",rectperi(shape1.rect.length,shape1.rect.width));
    shape1.circle.radius=7;
    printf("area of circle =%0.2f\n",circarea(shape1.circle.radius));
    printf("perimeter of circle =%0.2f\n",circperi(shape1.circle.radius));
}