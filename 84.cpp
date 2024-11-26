// Write a cpp program to know type of file.
#include<bits/stdc++.h>
using namespace std;
string filetype(string filename){
    size_t pos=filename.rfind('.');// rfind('.') => gives index of the '.'
    if (pos==string::npos){
        return "unknown filetype";
    }
    string extension=filename.substr(pos+1);
    if(extension=="txt") return "text file";
    else if (extension == "cpp" || extension == "h") {
        return "C++ source/header file";
    } else if (extension == "jpg" || extension == "jpeg" || extension == "png") {
        return "Image file";
    } else if (extension == "mp3") {
        return "Audio file";
    } else if (extension == "mp4" || extension == "avi"||extension=="wav") {
        return "Video file";
    } else if (extension == "pdf") {
        return "PDF document";
    } else if (extension == "html" || extension == "htm") {
        return "HTML file";
    } else if (extension == "csv") {
        return "CSV file";
    } else {
        return "Unknown file type";
    }
}

int main (){
    cout<<"enter the file name you want to find the type of";
    string filename;
    cin>>filename;
    cout<<filetype(filename);
}
