class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<long long,long long> mp;
        long long size=nums.size();
        for(long long i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }
        long long j=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            nums[j]=itr->first;
            j++;
        }
        //cout<<"j="<<j<<endl;
        return j;
    }
};