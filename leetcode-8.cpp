//week ->5 Assignment
// Assignment Question number-> 10


class Solution {
public:
    int myAtoi(string s) {

        int i=0,num=0,sign=1;
        //step ->1 ignore spaces
        while(s[i] == ' ')
        {
            i++;
        }

        //step ->2 determine the sign

        if(i < s.size() && (s[i] =='-' || s[i] =='+'))
        {
            sign = s[i]=='+'? 1 : -1;
            i++;
        }

        //step ->3 conversion of digit character to integer
        while(i<s.size() && isdigit(s[i]))
        {
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] >'7'))
            {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i]-'0');
            i++;
        }
        return num*sign;
    }
};