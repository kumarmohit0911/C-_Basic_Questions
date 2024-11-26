// Write a c program to open a file and write some text and close its.
#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream outFile("example.txt");
    if(!outFile.is_open()){
        cout<<"could not open the file for writing!"<<endl;
        return 1;
    }
    outFile<<"Hello this is a line in the file."<<endl;
    outFile<<"writing another line to file."<<endl;
    outFile.close();
    cout<<"Data written to the file succesfully."<<endl;
    return 0;
}