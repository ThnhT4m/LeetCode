#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
    string intToRoman(int num) {
         vector<pair<int, string>> romanMap = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };
    string s;
    for(pair<int,string>p:romanMap){
        int v = p.first;
        string sym = p.second;
        while(num >= v){
            s+=sym;
            num-=v;
        }
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    string s = intToRoman(n);
    cout<<s;
    return 0;
}