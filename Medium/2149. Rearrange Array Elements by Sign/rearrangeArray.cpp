class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // set up 2 buckets for to place positive numbers and negative numbers
        vector<int> positive;
        vector<int> negative;

        // filter the positive numbers and negative numbers, and place them in differnet bucket
        for(int x : nums){
            if(x < 0){
                negative.push_back(x);
            }
            else{
                positive.push_back(x);
            }
        }
        
        vector<int> answer;
        
        // insert the numbers back in order of positive -> negative -> positive -> negative
        for(int i = 0; i< positive.size(); i++){
            answer.push_back(positive[i]);
            answer.push_back(negative[i]);
        }
        
        return answer;
    }
};