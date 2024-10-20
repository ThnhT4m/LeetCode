#include<iostream>
using namespace std;
    int fib(int n){
        if( n==1){
            return 1;
        }
        if(n == 0 ){
            return 0;
        }
       int x = 1; int y = 0;
       for(int i = 2 ; i <= n ; i++){
            int tmp = x +y;
            y=x;
            x = tmp;
            

       }
       return x;
    }
int main(){
    int n;
    cin>>n;
    cout<<fib(n);


    return 0;
}