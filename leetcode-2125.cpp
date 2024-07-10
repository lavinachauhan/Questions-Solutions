//week ->5 Assignment
// Assignment Question number-> 16

class Solution {
public:
    int countdevices(string &s)
    {   
        int count=0;
        for(auto i:s)
        {
            if(i=='1')
            {
                count++;
            }
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank) {

        int beams=0;
        vector<int>count;
        for(auto i:bank)
        {
            count.push_back(countdevices(i));
        }
        for(int i=0;i<count.size();i++)
        {
            int j=i+1;

            while(j<count.size())
            {
                beams+=count[i]*count[j];

                if(count[j]==0)
                {
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return beams;
    }
};