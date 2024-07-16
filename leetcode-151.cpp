class Solution {
public:
    string reverseWords(string s) {

        //step-> 01 reverse whole string
        reverse(s.begin(),s.end());

        int start = 0;    //represents the starting position of individual word
        int end = 0;    //reprsents ending position of individual word
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            //step-> 02 skip leading spaces
            while(i < n && s[i] == ' ')
            {
                i++;
            }
                if(i == n) break;

            //step-> 03 copy individual values
            while(i < n && s[i] != ' ')
            {
                s[end++] = s[i++];
            }

            //step-> 04 reverse string up to e
            reverse(s.begin()+start,s.begin()+end);

            //step-> 05 add space after word
            s[end++] = ' ';
            
            //step-> 06 update value of s
            start = end;

        }
            //step-> 07 final step resize string
            s.resize(end-1);
        return s;
    }
};