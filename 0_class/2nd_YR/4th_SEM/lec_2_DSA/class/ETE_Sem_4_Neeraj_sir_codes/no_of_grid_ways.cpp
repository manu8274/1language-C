#include<iostream>
#include<vector>
using namespace std;

void rec(int i,int j,int rows,int cols,int& ans,vector<vector<int> >&maze){
    if(i==rows-1 && j==cols-1){
        ans++;
        return;
    }
    if(i<0 || i>=rows || j<0 || j>=cols) return;
    if(maze[i][j]==1) return;
    maze[i][j]=1;
    rec(i+1,j,rows,cols,ans,maze);
    rec(i-1,j,rows,cols,ans,maze);
    rec(i,j+1,rows,cols,ans,maze);
    rec(i,j-1,rows,cols,ans,maze);
    maze[i][j]=0;
}

int main(){
    int rows,cols;
    cin >> rows>>cols;
    int ans=0;
    vector<vector<int> > maze(rows,vector<int>(cols,0));
    rec(0,0,rows,cols,ans,maze);
    cout << ans<<endl;
}