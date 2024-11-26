// Write a c program to find out sum of diagonal element of a matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j) sum+=matrix[i][j];
            else continue;
        }
    }cout<<"sum of the diagonal elements is "<<sum;
}