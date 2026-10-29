class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        long long ma=*max_element(s.begin(),s.end());
        ma++;
        cout<<ma;
        for(int i=1;i<=ma;i++){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return 1;
    }
};