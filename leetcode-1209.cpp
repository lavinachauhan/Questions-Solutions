//week ->5 Assignment
// Assignment Question number-> 17



class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<int> count(s.size());

        int i=0;
        int j=0;
        while(j<s.size())
        {
            s[i]=s[j];
            count[i]=1;
            if(i>0 && s[i-1]==s[i])
            {
                count[i]+=count[i-1];
            }
            if(count[i]==k)
            {
                i=i-k;
            }
            i++;
            j++;
        }
      return s.substr(0,i);

    }
};