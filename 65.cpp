// Convert a string to ASCII in cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="mohit";
    
    for(int i=0;i<=str.size()-1;i++){
        cout<<str[i]<<" : "<<int(str[i])<<endl;
    }
}