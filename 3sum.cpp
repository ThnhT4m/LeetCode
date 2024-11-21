#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
   class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>vec;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i>0 && nums[i]== nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j < k ){
                int total = nums[i] + nums[j] + nums[k];
                if(total > 0 ){
                    k--;
                }else if(total < 0){
                    j++;
                }else{
                  vec.push_back({nums[i],nums[j],nums[k]});
                  j++;
                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
                    }
                    return vec;
    
     }
};