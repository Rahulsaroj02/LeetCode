class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    if(locked[j]==0 && locked[j+1]==0){  
                        swap(nums[j],nums[j+1]);
                        c++;
                    }else{
                        if(k==0 && locked[j]==1){
                            return -1;
                        }
                        if(locked[j]==1 && k!=0){
                            c++;
                            locked[j]=0;
                            k--;
                        }
                        if(k==0 && locked[j+1]==1){
                            return -1;
                        }
                        if(locked[j+1]==1 && k!=0){
                            c++;
                            locked[j+1]=0;
                            k--;
                        }
                        swap(nums[j],nums[j+1]);
                        c++;
                    }
                }
            }
        }
        return c;
    }
};