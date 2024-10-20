#include<iostream>
#include<vector>
using namespace std;
    vector<int>ctr(int area){
        vector<int>v(2);
        int min=100000000;
        v[0]=-1;
        v[1]=-1;
        for(int i = 1 ; i <= area ; i++){
            if(area%i==0){
                int x = i;
                int y = area/i;
                if(x>=y && (x-y) < min ){
                    v[0]=x;
                    v[1]=y;
                    min = (x-y);
                }
            }
            
        }
        return v;
    }
int main(){
    int n; cin>>n;
    vector<int>v=ctr(n);
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    



    return 0;
}