//week ->5 Assignment
// Assignment Question number-> 05

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int frequencytable[256]={0};
        bool CheckCharactersOftMapped[256]={0};
        for(int i=0;i<s.size();i++)
        {
            if(frequencytable[s[i]]==0 && CheckCharactersOftMapped[t[i]]==false )
            {
                frequencytable[s[i]]=t[i];
                CheckCharactersOftMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(char(frequencytable[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};