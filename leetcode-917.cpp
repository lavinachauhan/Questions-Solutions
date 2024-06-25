
//week ->5 Assignment
// Assignment Question number-> 02

class Solution {
public:
    bool isvalid(char ch)
    {
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        {
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(isvalid(s[i])==1 && isvalid(s[j])==1)
            {
                swap(s[i++],s[j--]);
            }
            else if(isvalid(s[i])==0)
            {
                i++;
            }
            else{
                j--;
            }
        }
    return s;
    }
};