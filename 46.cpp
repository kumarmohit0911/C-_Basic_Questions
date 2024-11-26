// C program for fractional decimal to binary fraction conversion.
#include<bits/stdc++.h>
using namespace std;
int get_intpart(int integer){
    int num=integer;
    int bin2int=0;
    for(int i=0;num>0;i++){
        int rem=num%10;
        bin2int=bin2int+rem*pow(2,i);
        num/=2;

    }return bin2int;

}
float get_floatpart(float deci){
    float bin2float=0;
    int size_float=to_string(deci).length()-1;
    int new_num= deci*pow(10,size_float);
    

    for(int i=0;i<=size_float;i++){
        new_num=new_num%2;
        bin2float=bin2float+new_num*pow(2,-size_float+i);
        new_num=new_num/10;
    }return bin2float;

}
int main(){
    float a=1.01011;
    float deci=a-(int)a;
    int int_part=get_intpart((int)a);
    float float_part=get_floatpart(deci);
    cout<<int_part<<"."<<float_part;
}