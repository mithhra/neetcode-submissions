class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char,char> closeopen={
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(char c:s){
            if(closeopen.count(c)){
                if(!stack.empty() && closeopen[c] == stack.top()){
                    stack.pop();
                }
                else return false;
            }
            else stack.push(c);
        }
        return stack.empty();

        
    }
};
