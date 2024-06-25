//week ->5 Assignment
// Assignment Question number-> 03

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];

            bool check =true;
            for(int s=1;s<strs.size();s++)
            {
                char cur_ch=strs[s][i];
                if(cur_ch!=ch)
                {
                    check=false;
                    break;
                }
            }
            if(check==false)
            {
                break;
            }
            else{
                ans+=ch;
            }
        }
        return ans;
    }
};