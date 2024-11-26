//C program fractional binary conversion from decimal.
#include<bits/stdc++.h>
using namespace std;
vector<int> integer_part(int integer){
    int num=integer;
    int bin;
    vector<int> binary;
    while(num>0){
        bin=num%2;
        num/=2;
        binary.push_back(bin);

    }return binary;
    


}
vector<int> fraction_part(float frac ){
    float fraction=frac;
    int cnt=0;
    vector<int> frac_binary;
    while(cnt!=5){
        fraction*=2;
        cnt++;
        if(fraction>1){
            fraction=fraction -(int)fraction;
            frac_binary.push_back(1);
        }
        else if (fraction<1){
            frac_binary.push_back(0);

        } 
        else {
            frac_binary.push_back(1);
            break;
        }
    }return frac_binary;


}
int main(){
    float a=1.345;
    vector<int> int_bin=integer_part((int)a);
    vector<int> frac_bin=fraction_part(a-(int)a);
    for(int i=int_bin.size()-1;i>=0;i--){
        cout<<int_bin[i];
    }cout<<".";
    for(int i=0;i<=frac_bin.size()-1;i++){
        cout<<frac_bin[i];
    }
}