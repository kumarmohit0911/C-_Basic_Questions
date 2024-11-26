//Program to find largest of n numbers in cpp
//input 12345
#include<bits/stdc++.h>
using namespace std;
int compare_num(list<int> numlist){
    int largest_num;
    int a= numlist.front();
    while(numlist.empty()!=true){
        int b= numlist.front(); // gives front element of the list but doesnot delete it  
        if(a>b){
            largest_num=a;
        }else{

            largest_num=b;
            a=b;
        }numlist.pop_front();// deletes the first element of the list
    }
    return largest_num;
}
int main(){
    list<int> numlist={};
    int cnt=0;
    int n;
    cout<<"how many numbers you want to compare";
    cin>>n;
    int num;

    while(cnt<n){
        cout<<"enter the number";
        cin>>num;
        numlist.push_back(num);
        cnt++;        
    }
    cout<<"The largest number is: "<< compare_num(numlist);


}