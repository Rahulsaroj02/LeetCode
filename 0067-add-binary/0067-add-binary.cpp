class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        char c='0';
        int i=a.size()-1,j=b.size()-1;

        while(i>=0 && j>=0){
            if(a[i]=='1' && b[j]=='1'){
                cout<<"1 && 1 "<<" "<<ans<<" "<<c<<endl;
                ans+=c;
                c='1';
            }
            else if(a[i]=='0' && b[j]=='0'){
                cout<<"0 && 0"<<" "<<ans<<" "<<c<<endl;
                if(c=='1'){
                    ans+='1';
                    c='0';
                }else{
                    ans+='0';
                }
            }else{
                cout<<"0 && 1"<<" "<<ans<<" "<<c<<endl;
                if(c=='1'){
                    ans+='0';
                }else{
                    ans+='1';
                }
            }
            i--;
            j--;
        }
        cout<<"completed "<<i<<" "<<j<<" "<<c;

        while(j>=0){
            if(b[j]=='1'){
                if(c=='1'){
                    ans+='0';
                }else{
                    ans+='1';
                }
            }else{
                ans+=c;
            }
            j--;
        }
        while(i>=0){
            if(a[i]=='1'){
                if(c=='1'){
                    ans+='0';

                }else{
                    ans+='1';
                }
            }else{
                ans+=c;
                c='0';
            }

            i--;
            
        }
        if(c=='1'){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};