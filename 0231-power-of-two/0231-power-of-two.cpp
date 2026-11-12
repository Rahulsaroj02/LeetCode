class Solution {
public:

    bool powerOfTwo(int n){
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        if(n%2!=0){
            return false;
        }
        return powerOfTwo(n/2);

    }
    bool isPowerOfTwo(int n) {
        return powerOfTwo(n);
    }
};