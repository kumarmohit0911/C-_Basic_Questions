// C program for addition of binary numbers. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"total binary number you want to add";
    int x; cin>>x;int bin;int y=0; int rem; int sum=0;
    vector<int>mylist;
    for (int i=1; i<=x;i++){
        cin>>bin;
        mylist.push_back(bin);
    }
    for(int j=0 ;j<mylist.size();j++){
        int cnt=0;
        int num=0;
        y=mylist[j];
        while(y>0){
            rem=y%10;
            num=num+rem*pow(2,cnt);
            cnt++;
            y/=10;
        }
        sum=sum+num;
    }
    cout<<sum;
}