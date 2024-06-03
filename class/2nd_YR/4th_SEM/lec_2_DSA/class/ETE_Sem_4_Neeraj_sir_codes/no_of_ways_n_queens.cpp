#include<iostream>
#include<vector>
using namespace std;

bool check(vector<vector<int> >& board,int i,int j,int n){
    bool c1=true,c2=true,c3=true;
    for(int k=0;k<n;k++){
        if(board[i][k]==1 || board[k][j]==1) c1=false;
    }
    int k=i,l=j;
    while(k>=0 && l>=0){
        if(board[k][l]==1) c2=false;
        k--;l--;
    }
    k=i,l=j;
    while(k>=0 && l<n){
        if(board[k][l]==1) c3=false;
        k--;l++;
    }
    return c1 && c2 && c3;
}

void rec(vector<vector<int> >&board,int n,int &ans,int i){
    if(i>=n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << board[i][j]<< " ";
            }
            cout << endl;
        }
        ans++;
        return;
    }
    for(int j=0;j<n;j++){
        if(check(board,i,j,n)){
            board[i][j]=1;
            rec(board,n,ans,i+1);
            board[i][j]=0;
        }
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> >board(n,vector<int>(n,0));
    int ans=0;
    rec(board,n,ans,0);
    cout << ans<< endl;

}