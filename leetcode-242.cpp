//week ->5 Assignment
// Assignment Question number-> 01

class Solution {
public:
    //METHOD ->01
    bool isAnagram(string s, string t) {

        int frequencytable[256]={0};
        for(int i=0;i<s.size();i++)
        {
            frequencytable[s[i]]+=1;
        }
        for(int i=0;i<t.size();i++)
        {
            frequencytable[t[i]]-=1;
        }
        for(int i=0;i<256;i++)
        {
            if(frequencytable[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};


//METHOD ->02

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()>t.size() || s.size()<t.size())
        {
            return false;
        }
        int i=0;
        while(i<s.size() && i<t.size())
        {
            if(s[i]!=t[i])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};