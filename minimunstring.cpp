#include<iostream>
#include<string>
using namespace std;
    int minlength( string s){

        string stk = " ";
        for (char& c : s) {
            if ((c == 'B' && stk.back() == 'A') || (c == 'D' && stk.back() == 'C')) {
                stk.pop_back();
            } else {
                stk.push_back(c);
            }
        }
        return stk.size() - 1;
    }
    

int main(){
    string s;
    cin>>s;
    string str;
 for(int i = 0 ; i  < s.length(); i++){
            if(s[i]=='A'&& s[i+1]=='B'||s[i]=='C'&&s[i+1]=='D'){
                if(i==0){
                    s.erase(s.begin(),s.begin()+2); 
                    i=0;
                }else{
                    s.erase(i,2);
               i=i-2;
                }
               
            }
        }
     if(s[0]=='A' &&s[1] == 'B' ||s[0]=='C' &&s[1] == 'D' ){
            cout<<s.length()-2<<" "<<s;
        }else{
            cout<<s.length()<<" "<<s;
        }
       
return 0;
}