//week ->5 Assignment
// Assignment Question number-> 11

class Solution {
public:
    void insertcount(vector<char>& chars,int &index,int &count)
    {
        int start=index;
        while(count)
        {
            chars[index++] = (count % 10) + '0';
            count/=10;
        }
        reverse(chars.begin()+start,chars.begin()+index);
        return;
    }

    int compress(vector<char>& chars) {

        int index = 0;
        int i = 1;
        int count = 1;
        char prev = chars[0];

        while(i<chars.size())
        {
            if(chars[i] == prev)
                count++;
            else{
                chars[index++] = prev;
                if(count>1)
                {
                    insertcount(chars,index,count);
                }
                prev = chars[i];
                count = 1;
            }
            i++;
        }
        chars[index++] = prev;
        if(count>1){
        insertcount(chars,index,count);
        }
        return index;
        
    }
};