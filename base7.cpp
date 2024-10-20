#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
 string convertToBase7(int num) {
        string str;
        if(num == 0 ){
            return "0";
        }
        int check=0;
        if(num < 0){
           check =1;
        }
        num = abs(num);
        while(num!=0){
            str = to_string(num%7) +str;
            num/=7;

        }
        if(check == 1){
            return "-" + str;
        }
        return str;
    }
    int main(){
        int num; cin>>num;
        cout<<convertToBase7(num);

        return 0;
    }