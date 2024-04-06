class Solution {
public:
    int firstUniqChar(string s) {

        // init hash map to store the char from given string
        unordered_map<char, int> count;
        
        // store element
        for(char x : s){
            count[x]++;
        }
        
        
        for(int i = 0; i<s.size(); i++){
            // if found 1, return i
            if(count[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};