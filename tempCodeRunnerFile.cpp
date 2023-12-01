#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// class box2{
//     private:
//         int length,breadth,height;
//     public:
//         box2(){
//             length=0;breadth=0;height=0;
//         }
//         box2(int l,int b,int h){
//             length=l;breadth=b;height=h;
//         }
//         box2(box2 &b1){
//             length=b1.length;
//             breadth=b1.breadth;
//             height=b1.height;
//         }

//         int getlength(){
//             return length;
//         }
//         int getbreadth(){
//             return breadth;
//         }
//         int getheight(){
//             return height;
//         }
//         bool operator <(box2 &obj){
//             int x= (length<obj.length && breadth<obj.breadth && height<obj.height);
//             if(x)   return true;
//             else    return false;
//         }

//         friend ostream& operator <<(ostream& output,box2& obj);
// };

// ostream& operator <<(ostream& output,box2& obj){
//     output<<obj.length<<" "<<obj.breadth<<" "<<obj.height;
//     return output;
// }

// int main() 

// { 

//   int l,b,h; 

//   cin>>l>>b>>h; 

//   box2 b1(l,b,h); 

//   cin>>l>>b>>h; 

//   box2 b2(l,b,h); 

//   box2 b3(b2); 

//   cout<<b1<<endl<<b2<<endl<<b3<<endl; 

//   cout<<(b1<b2); 

//   // Return 0 to indicate normal termination 

//   return 0; 

// } 



class matrix{
    public:
    int rows,cols;
    matrix(int m=0,int n=0){
        rows=m;
        cols=n;
        // mat=new int*[rows];
        // for(int i=0;i<rows;i++){
        //     mat[i]=new int[cols];
        // }
        int mat[rows][cols];
    }
    void inputmatrix(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>mat[i][j];
            }
        }
    }

    matrix operator+(matrix &obj){
        if(rows!=obj.rows || cols!=obj.cols){
            cerr<<"different dimensions"<<endl;return matrix(0,0);
        }
        else{
            matrix temp(rows,cols);
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    temp.mat[i][j]=mat[i][j] + obj.mat[i][j];
                }
            }
            return temp;
        }
    }


    void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n; 
    matrix matrix1(m, n); 
    matrix1.inputmatrix();
    matrix matrix2(m, n); 
    matrix2.inputmatrix();
    matrix result = matrix1 + matrix2;
    result.display();
}