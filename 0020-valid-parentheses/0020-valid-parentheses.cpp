class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')' || s[0]=='}' || s[0]==']'){
            return false;
        }
        stack<char> a;
        for(char n:s){
            if(n=='(' || n=='{' || n=='['){
                a.push(n);
            }else{
                if(a.empty()){
                    return false;
                }
                if(n==41){
                    if(a.top()==40){
                        a.pop();
                    }else{
                        return false;
                    }
                }else if(n==93){
                    if(a.top()==91){
                        a.pop();
                    }else{
                        return false;
                    }
                }else if(n==125){
                    if(a.top()==123){
                        a.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(a.empty()){
            return true;
        }
        return false;
    }
};