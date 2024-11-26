// Write a cpp program which reads string from file
#include<bits/stdc++.h>
using namespace std;
int main(){
    string filename,text;
    cout<<"enter the file name you want to read: ";
    getline(cin,filename);
    ifstream file(filename);
    if(!file){
        cerr<<"An error occured during opening the file";
    }
    string line;
    while (getline(file,line)){
        cout<<line<<endl;
    }file.close();
    
}