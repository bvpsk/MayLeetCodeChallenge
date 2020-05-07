class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> M;
        int maxx = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(M.find(nums[i]) != M.end()){
                M[nums[i]] += 1;
                if(M[nums[i]] > M[maxx]) maxx = nums[i];
            }else M[nums[i]] = 1;
        }
        return maxx;
    }
};