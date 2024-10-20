#include<iostream>
using namespace std;
    int add(int num){
        string s = to_string(num);
        int n = num;
        while(s.length()!=1){
            int sum = 0;
            while(n>0){
                sum+=(n%10);
                n=n/10;
            }
            s=to_string(sum);
            n=sum;
        }
        
            return stoi(s);
        

    }

int main(){
    int n;
    cin>>n;
    int a = add(n);
    cout<<a;
    return 0;
}