//week ->5 Assignment
// Assignment Question number-> 04


class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch >='A' && ch<='Z')
        {
            ch=ch-'A'+'a';
        }
        if(ch =='a' || ch =='e'||ch =='i' || ch =='o'|| ch =='u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {

        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if( isvowel(s[i]) && isvowel(s[j]))
            {
                swap(s[i++],s[j--]);
            }
            else if(isvowel(s[i])==0)
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