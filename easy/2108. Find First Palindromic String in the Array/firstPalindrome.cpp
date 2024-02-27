class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string x : words){
            int half = x.size()/2;
            int length = x.size()-1;
            int count = 0;

            // interate half of the string length to find out if the letters are match or not
            for(int i = 0; i < half; i++){
                // if characters are not match, break
                if(x[i] != x[length-i]){
                    break;          
                }
                count++;
            }

            if(count == half){
                return x;
            }
        }

        // if no palindromic strings, return empty string
        return "";
    }
};