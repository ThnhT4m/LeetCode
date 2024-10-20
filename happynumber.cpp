#include<iostream>
using namespace std;
    int ishappy(int n){
            if(n == 1){
                return true;
            }
                int sum = 0;
                while(n!=0){
                    sum = sum + (n%10)*(n%10);
                    n/=10;
                }
                n=sum;
            ishappy(n);
    }
int main(){
    int n; cin>>n;
    int a = ishappy(n);
    cout<<a<<endl;
    return 0;
}