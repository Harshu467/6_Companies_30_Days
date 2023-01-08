/*You are given two positive integer arrays nums and numsDivide. You can delete any number of elements from nums.

Return the minimum number of deletions such that the smallest element in nums divides all the elements of numsDivide. If this is not possible, return -1.

Note that an integer x divides y if y % x == 0.*/

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        sort(numsDivide.begin(),numsDivide.end());
        int answer = numsDivide[0];
        int count=0;
        for(int i=0;i<numsDivide.size();i++)
        {
            answer = __gcd(answer,numsDivide[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(answer%nums[i]==0)
            {
                return count;
            }
            count++;
        }
        return -1;
    }
};
