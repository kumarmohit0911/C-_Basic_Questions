//pascals triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        int num=1;
        

        for(int k=0;k<=i;k++){
            cout<<num<<" ";
            num=num*(i-k)/(k+1);

        }
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}