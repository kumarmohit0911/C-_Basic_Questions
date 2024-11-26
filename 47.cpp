// C program to convert each digits of a number in words
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> num_in_words={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int x;
    cout<<"enter the desired number you want in words ";
    cin>>x;
    string number= to_string(x);
    for(int i=0; i<=number.length()-1;i++){
        cout<<num_in_words[number[i]-'0']<<" ";
    }
}