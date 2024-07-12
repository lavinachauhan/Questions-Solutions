//This question can be done with so many approaches like binary search, XOR, Negative marking 

//xor approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        for(int i=0;i<=nums.size();i++)
        {
            ans=ans^i;
        }
        return ans;
    }
};

//negative marking approach
TC->O(n);

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int i=0;
       int index;
       int ans=0;
       bool zero=false;
       while(i<nums.size())
       {
            index=abs(nums[i]);
            if(index==0)
            {
                zero=true;
            }
            if(index>0)
            {
                if(nums[index-1]>0)
                {
                    nums[index-1]*=-1;
                }
            }
            i++;
       } 
        if(zero==false)
        {
            return 0;
        }
        int zeroindex;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]>=0)
            return i+1;

        if(nums[i]==0)
        {
            zeroindex=i+1;
        }
       }
       return zeroindex;
    }
};