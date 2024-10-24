#include<iostream>
#include<vector>
using namespace std;
     void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       k=k%n;
       vector<int>r(n);
       for(int i = 0 ; i < n ; i++){
        r[(i+k)%n] = nums[i];
       }
       for(int i = 0 ; i < n ; i++){
        nums[i]=r[i];
       }
    }
int main(){
    int n; cin>>n;
   vector<int>v(n);
    int k; cin>>k;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    rotate(v,k);
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
 
    return 0;
}