class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // SORT the numbers first, so we can traverse the number by index
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<nums.size(); i++){
            // if number in the index is not same as i, means we found the missing number
            if(i!=nums[i]){
                return i;
            }
        }

        // else if we have every number, we will return the (max number + 1)
        return nums.size();
    }
};