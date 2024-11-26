// Write a cpp program to print the string from given character.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="mohit@kashyap";
    char ch;
    cout<<"give the character from which u want the string: ";
    cin>>ch;
    for(int i=1; i<=str.size();i++){
        if(str[i]==ch){
            for(int j=i+1;j<=str.size();j++){
                cout<<str[j];
            }
            
        }
    }
    
}