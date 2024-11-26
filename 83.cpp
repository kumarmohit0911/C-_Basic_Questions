// Write a cpp program to find out size of any file
#include<bits/stdc++.h>
using namespace std;
int main(){
    string filename;
    cout<<"enter the file name u want to check the size: ";
    getline(cin,filename);
    ifstream file(filename,ios::binary);
    if (!file){
        cerr<<"error occured; file not opened";
    }
    file.seekg(0,ios::end);
    cout<<"size of the file is: "<<file.tellg();


}