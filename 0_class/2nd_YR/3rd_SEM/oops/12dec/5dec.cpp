#include<iostream>
#include<utility>
using namespace std;


///////////////////////PAIRS::::::::::::::::::::::

// int main(){
    // pair<int,string> p;//to fetch p.first,p.second
    // // p=make_pair(2,"wefan");
    // p={2,"hlo"};
    // cout<<p.first<<"\t"<<p.second<<endl;
    // pair<int,int> p1;
    // cin>>p1.first>>p1.second;
    // cout<<p1.first+p1.second<<endl;
    // //to copy  p1 to p2 
    // pair<int,int> p2;
    // p2=p1;
    // cout<<p1.first<<"\t"<<p2.second<<endl;
    // cin>>p2.first;
    // cout<<p2.first<<endl;
    // cout<<p1.first<<endl;
// }

// int main(){
//     pair<int,int> p[3];
//     // arr1={1,2,3},arr2={0,1,2}
//     p[0]={1,0};
//     p[1]={2,1};
//     p[2]={3,2};
//     //to print
//     for(int i=0;i<3;i++){
//         cout<<p[i].first<<"\t"<<p[i].second<<endl;
//     }
//     swap(p[0],p[1]);
//     cout<<"after swapping"<<endl;
//     for(int i=0;i<3;i++){
//         cout<<p[i].first<<"\t"<<p[i].second<<endl;
//     }
// }

///////////////////////////////////VECTORS:::::::::::::::::::DYNAMIC ARRAY
//to make vector :::::: vector<int> v;
#include<vector>

void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector<int> v;//to create vector
    // vector<int> v(10);//all first element are set to zero
    // vector<int> v(10,3);all first element are set to three
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.push_back(100);
    v.push_back(101);
    v.push_back(102);
    v.push_back(103);
    cout<<"element at index 0 : "<<v.at(0)<<"\t"<<v.front()<<endl;
    cout<<"last element : "<<v.back()<<endl;
    cout<<"if empty : "<<v.empty()<<endl;
    cout<<"size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector : "<<v.capacity()<<endl;
    // vector<int> v={1,2,3,4,5};
    // // show(v);
    // // vector<int> v1={6,7,8,9,10};
    // // show(v1);
    // // v.swap(v1);
    // // show(v);
    // // show(v1);
    // // vector<int> v2=v1;
    // // v2[4]=1000;
    // // show(v2);
    // // show(v1);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

}