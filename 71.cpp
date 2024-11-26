// 6. Write a cpp program for scalar multiplication of matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };int k=2;
    int res[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=k*matrix[i][j];
            cout<<res[i][j]<<" ";

        }cout<<endl;
    }
}
