class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        string st=s1;
        swap(s1[0],s1[2]);
        swap(st[1],st[3]);
        string st1=st;
        swap(st1[0],st1[2]);
        // cout<<s1<< " "<<s2<<" "<<st<<" "<<st1;
    
        if(s1==s2){
            return true;
        }
        else if(st==s2){
            return true;
        }else if(st1==s2){
            return true;
        }else{
            return false;
        }
    }
};