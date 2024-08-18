class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum = 0;
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        int maxsum = INT_MIN;
        maxsum = max(sum, maxsum);
        int i = 0, j = k;
        while(j < nums.size())
        {
            sum = sum - nums[i++];
            sum = sum + nums[j++];
            maxsum = max(sum, maxsum);
        }
        double avg = maxsum/(double)k;
        return avg;
    }
};