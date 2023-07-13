class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lower_low = 0, lower_high = n-1, upper_low =0, upper_high =n-1;
        int lans = n, uans=n;
        vector<int> res;
        while(lower_high<=lower_low)
        {
            int lmid = (lower_low+lower_high)/2;
            int umid = (upper_low+ upper_high)/2;

            if(lmid>=target)
            {
                lans=lmid;
                lower_high = lmid-1;
            }
            if(umid>target)
            {
                uans = umid;
                upper_high = umid-1;
            }
            if(lmid<target)
            {
                lower_low=lmid+1;
            }
            if(umid<target)
            {
                upper_low = umid+1; 
            }
            
        }
        res.push_back(lans);
        res.push_back(uans);
        return res;
    }
    
};
