/*You are playing the Bulls and Cows game with your friend.

You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info:

The number of "bulls", which are digits in the guess that are in the correct position.
The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position. Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls.
Given the secret number secret and your friend's guess guess, return the hint for your friend's guess.

The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. Note that both secret and guess may contain duplicate digits.

 */
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0, sum1=0, ans=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            sum1+=(i*nums[i]);
        }
        ans=sum1;
        for(int i=nums.size()-1; i>=0; i--){
            sum1+=sum-(nums[i]*nums.size());
            ans=max(ans, sum1);
        }
        return ans;
    }
};
