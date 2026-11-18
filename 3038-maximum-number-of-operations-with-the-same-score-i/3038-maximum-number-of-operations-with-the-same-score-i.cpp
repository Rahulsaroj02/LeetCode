class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int m=1;
        int i=2,sum=nums[0]+nums[1];
        while(i<nums.size()){
            if(sum!=nums[i]+nums[i+1]){
                return m;
            }
            m++;
            i=i+2;
        }
        return m;
    }
};