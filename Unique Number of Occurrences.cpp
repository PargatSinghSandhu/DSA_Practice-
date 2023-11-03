class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n = arr.size();
        bool ans;
        unordered_map<int, int> mpp;
        set<int> s;
        for(int i = 0 ;i<n;i++)
        {
            mpp[arr[i]]++;
        }

        for(auto i : mpp)
        {
            s.insert(i.second);
        }
        return mpp.size() == s.size();
    }
};


