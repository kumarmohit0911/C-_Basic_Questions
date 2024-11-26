// Write a cpp program to count the different types of characters in given string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Kum@rMohit969";
    int cnt=0;
    int cnt_alpha=0;
    int cnt_num=0;
    int cnt_specialchar=0;
    for(int i=0;i<=str.length()-1;i++){
        if(isalpha(str[i])) cnt_alpha++;
        else if(isdigit(str[i])) cnt_num++;
        else cnt_specialchar ++;
    }
    if(cnt_alpha>0) cnt++;
    if(cnt_num>0) cnt++;
    if(cnt_specialchar) cnt++;
    cout<<"total number of characters are : "<<cnt;
}