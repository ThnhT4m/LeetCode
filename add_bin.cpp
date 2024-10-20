#include<iostream>
#include<string>
#include<math.h>
using namespace std;

string addBinary(string a , string b)
{
    string str="0";
        while(a.length()!=b.length()){
            if(a.length()<b.length()){
                a = str + a;
            }else{
                b = str + b;
            }
        }
     int decimala = 0;
    int lengtha = a.length();
    int decimalb = 0;
     int lengthb = b.length();

    for (int i = 0; i < lengtha; ++i) {
        if (a[lengtha - i - 1] == '1') {
            decimala += pow(2, i);
        }
    }
    for (int i = 0; i < lengthb; ++i) {
        if (b[lengthb - i - 1] == '1') {
            decimalb += pow(2, i);
        }
    }
   
    int decimal = decimala + decimalb;
   
   
   
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    return binary;
    
}
int main(){

string a ,b;
cin>>a>>b;
cout<<addBinary(a,b);

    return 0;
}