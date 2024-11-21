#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        set<vector<int>> v1;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                int k = j + 1;
                int l = nums.size() - 1;
                
                while (k < l) {
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if (total > target) {
                        l--;
                    } else if (total < target) {
                        k++;
                    } else {
                        v1.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                    }
                }
            }
        }
        
        return vector<vector<int>>(v1.begin(), v1.end());
    }
};
