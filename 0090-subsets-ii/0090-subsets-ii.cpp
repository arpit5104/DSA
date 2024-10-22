class Solution {
public:
    void helper(vector<int> &nums, set<vector<int>> &res, int ind, vector<int> &temp){
        //base condition
        if(ind == nums.size()){
            sort(temp.begin(),temp.end());
            res.insert(temp);
            return;
        }

        //pick
        temp.push_back(nums[ind]);
        helper(nums,res,ind+1,temp);
        //not pick
        temp.pop_back();
        helper(nums,res,ind+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> res;
        vector<int> temp;
        helper(nums,res,0,temp);
        for(auto it=res.begin();it!=res.end();it++){
            ans.push_back(*it);
        }
        return ans;
    }
};