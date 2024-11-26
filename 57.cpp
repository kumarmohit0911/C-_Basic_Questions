// Write a c program which prints initial of any name. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Kumar Mohit";
    int cnt=0;
    string first_name="";
    string last_name="";

    for(int i=0;i<=name.size()-1;i++){
        if(name[i]!=' '){
            cnt++;
            first_name+=name[i];
        }else if(name[i]==' '){
            break;
        }
    }for(int i=cnt+1;i<=name.size()-1;i++){
        last_name+=name[i];        
    }cout<<"Intials of the given name is: "<<first_name[0]<<"."<<last_name[0]<<".";
}