class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> res;
        map <int, int>::iterator it;
        for (int i=0;i< nums.size();i++)
        {
            it=res.find(nums[i]);
            if (it==res.end()) res.insert(make_pair(nums[i],i));
            else res.erase(it);
        }
        it=res.begin();
        int result=it->first;
        return result;
    }
};

