#include<iostream>
#include<vector>
#include<string>
using namespace std;
    vector<string>fb(int n ){
        vector<string>v(n);
        for(int i = 0 ; i < n ; i++){
            v[i]=to_string(i+1);
            
        }
        for(int i = 0 ; i < n ; i++){
            if((stoi(v[i]))%3==0){
                if(stoi(v[i])%5==0){
                    v[i]="FizzBuzz";
                }else{
                    v[i]="Fizz";
                }
            }else if(stoi(v[i])%5==0){
                if(stoi(v[i])%3==0){
                    v[i]="FizzBuzz";
                }else{
                    v[i]="Buzz";
                }
            }
        }
        return v;
    }

int main(){
    int n; cin>>n;
    vector<string>v = fb(n);
    for(auto it : v){
        cout<<it<<" ";
    }

    return 0;
}