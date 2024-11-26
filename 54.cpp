// Write a c program to sort the characters of a string.
// DISCUSS IT FOR J Loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="cadbe";
    int n=str.size();
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=n-i-2;j++){
            if (str[j]>str[j+1]){
                    
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            
            }

        }
    }cout<<str<<endl;
    
}