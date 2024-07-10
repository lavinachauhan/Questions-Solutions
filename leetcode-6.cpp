//week ->5 Assignment
// Assignment Question number-> 13

class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string> zigzag(numRows);
        bool direction=true;
        int i=0;
        int r=0;
        if(numRows==1)
        {
            return s;
        }
        while(true)
        {
            if(direction)
            {
                while(i<s.size() && r<numRows)
                {
                    zigzag[r++].push_back(s[i++]);
                }
                r=numRows-2;
            }
            else{
                while(i<s.size() && r>=0)
                {
                    zigzag[r--].push_back(s[i++]);
                }
                r=1;
            }
            direction=!direction;
            if(i>=s.size())
            {
                break;
            }
        }

        string ans="";
        for(auto j:zigzag)
        {
            ans+=j;
        }
    return ans;
    }
};