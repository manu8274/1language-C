#include<iostream>
#include "01_march_header.h"

using namespace std;

int main(){
    lindeklist l;
    l.push_front(10);
    l.push_back(20);
    l.push_back(50);
    l.push_at_index(30,3);
    l.push_at_index(40,4);
    // l.push_at_index(100,1);
    l.print_list();
    cout<<l.search_by_val_iter(200)<<endl;
    cout<<l.search_by_val_iter(40)<<endl;
    cout<<l.search_by_val_recur(20,l.get_head())<<endl;
    cout<<l.search_by_val_recur(120,l.get_head())<<endl;
}