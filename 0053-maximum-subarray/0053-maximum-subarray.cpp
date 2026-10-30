class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ma=INT_MIN,curr=0;
        for(int n:nums){
            curr+=n;
            ma=max(ma,curr);
            if(curr<0){
                curr=0;
            }
        }
        return ma;
    }
};