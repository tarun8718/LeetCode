class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> t = nums;
        int j=0;
        k = k%t.size();
        for(int i=t.size()-k; j<t.size(); i++){
            nums[(j++)] = t[i%t.size()];
        }
    }
};