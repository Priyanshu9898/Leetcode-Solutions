class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        bool valid = true;
        for(int i = 0 ; i < s.length(); i++){
            char ch = s[i];
            
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            
            else if(!st.empty() && ch == ')'){
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
                
            }
            else if(!st.empty() && ch == '}'){
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
                
            }
            else if(!st.empty() && ch == ']'){
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
                
            }
            
            else{
                return false;
            }
        }
        
        if(!st.empty()){
            return false;
        }
        
        return true;
    }
};