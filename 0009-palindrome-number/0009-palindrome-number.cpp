class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long ans=0,pre=x;
        while(x!=0){
            int k=x%10;
            ans=k+(ans*10);
            x=x/10;
        }
        if(ans==pre){
            return true;
        }
        return false;

    }
};