//  here wee can make all the subsets by two ways 
// the first one is using DFS:-
class Solution {
public:
    void recursive(int index,vector<vector<int>>&ans,vector <int> &nums,vector<int> &temp){
        if (index==nums.size()){
            if (!count(ans.begin(),ans.end(),temp)){
            ans.push_back(temp);
            return ;
            }
        }
        for (int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            recursive(i+1,ans,nums,temp);
            temp.pop_back();
            recursive(i+1,ans,nums,temp);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        recursive(0,ans,nums,temp);
        return ans;
    }
};

//  the second way is normal recursion:-
// this is the best way and more optimmized than the dfs with count function:-

class Solution {
public:
    void recursive(int index,vector<vector<int>>&ans,vector <int> &nums,vector<int> &temp){
        if (index==nums.size()){
            {
            ans.push_back(temp);
            return ;
            }
        }
        temp.push_back(nums[index]);    /take that index .
        recursive(index+1,ans,nums,temp);    
        temp.pop_back();
        recursive(index+1,ans,nums,temp);      /donot take that index .

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        recursive(0,ans,nums,temp);
        return ans;
    }
};
