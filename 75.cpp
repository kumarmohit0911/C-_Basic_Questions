// Write a cpp program to delete a file.
#include<bits/stdc++.h>
using namespace std;
int main(){
    const char* filename="example.txt";
    if (remove(filename)==0){
        cout<<"file "<<filename<<" deleted succesfully"<<endl;

    }else{
        cout<<"Error has occured"<<endl;
    }
    return 0;
}