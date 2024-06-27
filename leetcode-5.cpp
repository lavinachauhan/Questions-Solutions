//week ->5 Assignment
// Assignment Question number-> 08

class Solution {
public:
    bool ispalindrome(string &s ,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    string longestPalindrome(string s) {

        int i=0;
        string ans="";

        while(i<s.size())
        {
            int j=i;

            while(j<s.size())
            {
                if(ispalindrome(s,i,j))
                {
                    //substr(startingindex,length)
                    string temp=s.substr(i,j-i+1);
                    if(temp.size()>ans.size())
                    {
                        ans=temp;
                    }
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};
