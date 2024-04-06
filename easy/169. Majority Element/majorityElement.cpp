class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority element will be the element that appears more than half of the size
        int maj_size = nums.size()/2; 

        int maj = 0; // use to store majority element
        unordered_map<int, int> map;

        // insert to hash table
        for(int x: nums){
            map[x]++;
            
            if(map[x]<=maj_size){ // check if current map index is <= half of the size
            }else{ // if not, store the current element and return
                maj=x; 
               break;
            }
        }
        return maj;
    }
};