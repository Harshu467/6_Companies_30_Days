/*Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

 */
class Solution {
public:
    void Sol(vector<vector<int>> &ans,vector<int> &A,int n, int k,int s)
    {
        if(n==0 && k==0)
        {
            ans.push_back(A);
            return;
        }
        if(k==0)
        {
            return;
        }
        for(int i=s;i<=9;i++)
        {
            A.push_back(i);
            Sol(ans,A,n-i,k-1,i+1);
            A.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>A;
        Sol(ans,A,n,k,1);
        return ans;
    }
};
