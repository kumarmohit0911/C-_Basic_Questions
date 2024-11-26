#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=1;
    for(int i=1;i<=10;i++){
        for (int j=1;j<=i;j++){
            cout<<k<<" ";
            k+=1;//k++
        }
        cout<<endl;
    }
}