//week ->5 Assignment
// Assignment Question number-> 09

class Solution {
public:
    int strStr(string haystack, string needle) {

        int h=haystack.size();
        int n=needle.size();

        for(int i=0;i<h-n+1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(needle[j]!=haystack[i+j])
                {
                    break;
                }
                if(j==n-1)
                {
                return i;
                }
            }
        }
        return -1;
    }
};