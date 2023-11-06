#include<iostream>
#include<string>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     string arr[n];
//     int luckticket=n;
//     for(int i=0;i<n;i++){
//         string c;
//         cin>>c;
//         arr[i]=c;
//     }
//     string lsteven[n];
//     string lstodd[n];
//     int le=0,lo=0;
//     for(int i=0;i<n;i++){
//         if(arr[i].size()%2==0){
//             lsteven[le++]=arr[i];
//         }
//         else{
//             lstodd[lo++]=arr[i];
//         }
//     }
//     for(int i=0;i<le;i++){
//         for(int j=i+1;j<le;j++){
//             string z1=lsteven[i]+lsteven[j];
//             string z2=lsteven[j]+lsteven[i];
//             int sum1=0,sum2=0;
//             int sum3=0,sum4=0;
//             for(int w=0;w<z1.size()/2;w++){
//                 sum1+=z1[w]-'0';
//                 sum3+=z2[w]-'0';
//             }
//             for(int w=z1.size()/2;w<z1.size();w++){
//                 sum2+=z1[w]-'0';
//                 sum4+=z2[w]-'0';
//             }
//             if(sum1==sum2){
//                 luckticket++;
//             }
//             if(sum3==sum4){
//                 luckticket++;
//             }
//         }
//     }

//     for(int i=0;i<lo;i++){
//         for(int j=i+1;j<lo;j++){
//             string z1=lstodd[i]+lstodd[j];
//             string z2=lstodd[j]+lstodd[i];
//             int sum1=0,sum2=0;
//             int sum3=0,sum4=0;
//             for(int w=0;w<z1.size()/2;w++){
//                 sum1+=z1[w]-'0';
//                 sum3+=z2[w]-'0';
//             }
//             for(int w=z1.size()/2;w<z1.size();w++){
//                 sum2+=z1[w]-'0';
//                 sum4+=z2[w]-'0';
//             }
//             if(sum1==sum2){
//                 luckticket++;
//             }
//             if(sum3==sum4){
//                 luckticket++;
//             }
//         }
//     }
//     cout<<luckticket<<endl;
// }


int main(){
    int n;
    cin>>n;
    string arr[n];
    int luckticket=n;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        arr[i]=c;
    }

    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if((arr[i].size() + arr[j].size() ) % 2 == 0){
                string z1=arr[i] + arr[j];
                string z2=arr[j] + arr[i];
                int sum1=0,sum2=0,sum3=0,sum4=0,w=0;
                for(w=0;w<z1.size()/2;w++){
                    sum1+=z1[w] - '0';
                    sum3+=z2[w] - '0';
                }
                for(w;w<z1.size();w++){
                    sum2+=z1[w] - '0';
                    sum4+=z2[w] - '0';
                }
                if(sum1==sum2)  luckticket++;
                if(sum3==sum4)  luckticket++;
            }
        }
    }
    cout<<luckticket<<endl;
}