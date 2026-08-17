class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,curr=0;
        for(int num:nums){
            curr+=num;
            sum=max(sum,curr);
            if(curr<0){
                curr=0;
            }
        }
        return sum;
    }
};