class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s; 
        for(int n:nums){
            if(s.find(n)!=s.end()){
                return n;
            }
            s.insert(n);
        }
        return 0;   
    }
};