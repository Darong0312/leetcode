class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // return vector
        vector<int> vec;
        
        for(int i = 0; i < nums.size(); i++){  // start from the nums[0], adding nums[i+1]
            int sum;            
            for(int j = i+1; j<nums.size(); j++){ // adding nums[i+1]
                sum = nums[i] + nums[j];
                if(sum == target){              // if nums[i] + nums[j] = target, we return i and j
                    vec = {i,j};
                    return vec;
                }
            }
        }
        return vec;
        
    }
};