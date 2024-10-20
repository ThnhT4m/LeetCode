#include<iostream>
using namespace std;
    bool is_power(int n){
        if(n<=0){
            return false;
        }
        while(n>0){
            if(n%3==0){
                n=n/3;
            }else{
                return false;
            }

        }
        return true;
    }
int main(){
    int n; 
    cin>>n;
    cout<<is_power(n);

    return 0;
}