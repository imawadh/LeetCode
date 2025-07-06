class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    map<int,int>mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for(int i =0; i<nums2.size(); i++){
            mp[nums2[i]]++;
        }
    }
    
    void add(int index, int val) {
        mp[nums2[index]]--;
        if(mp[nums2[index]]==0){
            mp.erase(nums2[index]);
        }
        nums2[index] +=val;
        mp[nums2[index]]++;

    }
    
    int count(int tot) {
        int ct = 0;
        for(int i =0; i<nums1.size(); i++){
            int req = tot-nums1[i];
            ct+=mp[req];
        }
        return ct;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */