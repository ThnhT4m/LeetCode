#include<iostream>
#include<string>
#include<map>
using namespace std;
    int sti(string s){
        map<char,int>mp;
        mp.insert(make_pair('I',1));
        mp.insert(make_pair('V',5));
        mp.insert(make_pair('X',10));
        mp.insert(make_pair('L',50));
        mp.insert(make_pair('C',100));
        mp.insert(make_pair('D',500));
        mp.insert(make_pair('M',1000));
        int sum=0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]=='I'&&s[i+1]=='V'||s[i]=='I'&&s[i+1]=='X'){
                sum = sum + mp[s[i+1]]-1;
                i=i+1;
            }
            else if(s[i]=='X'&&s[i+1]=='L'||s[i]=='X'&&s[i+1]=='C'){
                sum=sum+mp[s[i+1]]-10;
                i=i+1;
            }
            else if(s[i]=='C'&&s[i+1]=='D'||s[i]=='C'&&s[i+1]=='M'){
                sum=sum+mp[s[i+1]]-100;
                i=i+1;
            }
                else{
                    sum+=mp[s[i]];
                }
        }
     
        return sum;

    }

int main(){
    string s;
    cin>>s;
    int a = sti(s);
    cout<<a<<endl;
    
    return 0;
}