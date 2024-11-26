// Write a cpp program which concatenate two file and write it third file.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string filename1,filename2,text,line;
    cout<<"enter the 1st file name: ";
    getline(cin,filename1);
    ifstream file1(filename1);
    if(!file1){
        cerr<<"Error: Unable to open the file";
    }
    cout<<"enter the 2nd file name: ";
    getline(cin,filename2);
    ifstream file2(filename2);
    if(!file2){
        cerr<<"Error: Unable to open the file";
    }
    ofstream output("output.txt");
    if(!output){
        cerr<<"unable to open the file";
    }while(getline(file1,line)){
        output<<line<<endl;
    }while(getline(file2,line)){
        output<<line<<endl;
    }
}