class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<=3){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int k=j+1,l=nums.size()-1;
                while(k<l){
                    long long q = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(q==target){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        if(find(ans.begin(),ans.end(),temp) != ans.end()){
                            k++;
                            l--;
                            continue;
                        }
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }else if(q>target){
                        l--;
                    }else{
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};