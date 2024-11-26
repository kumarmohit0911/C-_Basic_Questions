// Program in cpp to print 1 to 100 without using loop
#include<bits/stdc++.h>
using namespace std;
void print_num(int num){
    if (num<=100){
        cout<<num<<" ";
        print_num(num+1);

    }  
}
int main(){
    print_num(1);

    

    
}