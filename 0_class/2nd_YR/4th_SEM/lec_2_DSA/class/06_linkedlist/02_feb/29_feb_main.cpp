#include<iostream>
#include "29_feb_header.h"

using namespace std;

int main(){
    lindeklist l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(0);
    l.print_list();
    l.push_at_index(10,1);
    l.print_list();
}