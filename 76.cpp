// Write a cpp program to copy a file from one location to other location.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string sourcePath,destinationPath;
    cout<<"enter the source filepath";
    getline(cin,sourcePath);
    cout<<"enter the destination filepath";
    getline(cin,destinationPath);
    // open file in reading in binary mode
    ifstream sourceFile(sourcePath,ios::binary);
    if(!sourceFile){
        cerr<<"Error: Could not open source file: " << sourcePath << endl;
        return 1;
    }
    // open destination file to write in binary mode
    ofstream destinationFile(destinationPath,ios::binary);
    if(!destinationFile){
        cerr<<"Error: Could not open destination file: " << destinationPath<< endl;
        return 1;
    }
    // copying a file
    destinationFile<<sourceFile.rdbuf();
    cout << "File copied successfully from " << sourcePath << " to " << destinationPath<<endl;
}