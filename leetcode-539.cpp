//week ->5 Assignment
// Assignment Question number-> 15


class Solution {
public:
    int HourToMin(string &time)
    {
        int hr=stoi(time.substr(0,2));
        int min=stoi(time.substr(3,2));
        int temp = hr*60 + min;
        return temp;
    }

    int findMinDifference(vector<string>& timePoints) {

        vector<int> mins;
        int ans=INT_MAX;

        for(int i=0;i<timePoints.size();i++)
        {
            int minute=HourToMin(timePoints[i]);
            mins.push_back(minute);
        }
        sort(mins.begin(),mins.end());

        for(int i=0;i<mins.size()-1;i++)
        {
            int diff = mins[i+1]-mins[i];
            ans = min(ans,diff);
        }

        int lastdiff = mins[0] + 1440 - mins[mins.size()-1];
        ans = min(ans,lastdiff);

        return ans;

    }
};