// Write a cpp program to convert octal number to binary number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int oct_num=157;
    for(int i=0;oct_num>0;i++){
        int oct_dig=oct_num%10;
        sum=sum+oct_dig*pow(8,i);
        oct_num/=10;
    }
    vector<int>myVector;
    for(int i=1;sum>0;i++){
        myVector.push_back(sum%2);
        sum/=2;
    }
    for(int j=0;j<=myVector.size()-1;j++){
        cout<<myVector[myVector.size()-j-1];
    }


}