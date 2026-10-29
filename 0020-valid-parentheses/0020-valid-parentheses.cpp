class Solution {
public:
    bool isValid(string st) {
        if(st.length()<=1){
            return false;
        }
        stack<char> s;
        for(char ch : st){  
            if((ch==')' && !s.empty()) && s.top()=='('){
                s.pop();
                continue;
            }else if((ch=='}' && !s.empty()) && s.top()=='{'){
                s.pop();
                continue;
            }else if((ch==']' && !s.empty()) && s.top()=='['){
                s.pop();
                continue;
            }
            s.push(ch);
        }
        if(s.empty()){
            return true;
        }
        return false;
    }
};