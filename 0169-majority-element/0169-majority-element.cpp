class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me=nums[0],c=1;
        for(int i=1;i<nums.size();i++){
            if(me==nums[i]){
                c++;
            }else{
                c--;
                if(c==0){
                    me=nums[i];
                    c++;
                }
            }
        }
        return me;
    }
};