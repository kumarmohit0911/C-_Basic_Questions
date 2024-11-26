// Write a cpp program which writes array in the file
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    string filename,text;
    cout<<"enter the file name";
    getline(cin,filename);
    ofstream file(filename);
    if(!file.is_open()){
        cerr<<"error: could not open the file";
    }
    for (int i=0;i<size;i++){
        
        file<<arr[i]<<endl;
    }
    file.close();
}