// 6. Write a c program which writes string in the file.
#include<bits/stdc++.h>
using namespace std;    
int main(){
    string text,filename;
    cout<<"enter the file name";
    getline(cin,filename);
    cout<<"enter the text you want to write down";
    getline(cin,text);
    ofstream file(filename);
    if(!file){
        cerr<<"error: file not found"<<endl;
    }
    file<<text;
    cout<<"the string i succesfully written in the file";
    file.close();
}