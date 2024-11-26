// Write a c program for multiplication of two matrices.
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int matrix1[2][3]={
        {1,2,3},
        {4,5,6}
    };int matrix2[3][2]={
        {1,2},
        {3,4},
        {4,5}
    };
    int res[2][2]={0};
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
            for(int k=0;k<3;k++){
                res[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }
}