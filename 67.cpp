// Write a c program for subtraction of two matrices
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };int matrix2[3][3]={
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=matrix1[i][j]-matrix2[i][j];
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }
}