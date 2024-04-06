class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> answer; 
        
        unordered_map<string, vector<string>> group_Anagrams;
        
        for(string x : strs){
            
            string str = x;
            
            // compare the string with the sorted order
            sort(str.begin(), str.end());
            
            // if the key exists, store the word into the existing vector string
            // else input the new word
            group_Anagrams[str].push_back(x);
        }
        
        for(auto x : group_Anagrams){
            // get all the vector<string> in the sorted order
            answer.push_back(x.second);
        }
        
        return answer;
    }
};