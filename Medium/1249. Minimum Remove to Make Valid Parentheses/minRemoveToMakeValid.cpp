class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack;
        
        // loop every char in string s
        for(int i = 0; i<s.length(); i++){
            // if encounter "(", we store the position of this "("
            if(s[i] == '('){
                stack.push(i);
            }
            // if encounter ")", we check if 2 condition
            // condition A: if stack is empty, 
            // that means this ")" is extra,
            // we put a "*" to replace, so we can go back and delete it
            // condition B: else the stack is not empty, 
            // means this is a complete parenthese "()", 
            // we pop the top and complete the parenthese
            else if(s[i] == ')'){
                if(stack.empty()){
                    s[i] = '*';
                }
                else{
                    stack.pop();
                }
            }
        }
        
        // check if we have extra "(" inside of the stack, 
        // if we have extra,
        // we replace the index with * to delete it later
        while(!stack.empty()){
            s[stack.top()] = '*';
            stack.pop();
        }
        
        // delete all the *
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        
        return s;
    }
};