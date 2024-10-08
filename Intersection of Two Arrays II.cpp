/*
**Time Complexity (TC):** O(n1 log n1 + n2 log n2 + min(n1, n2))

**Space Complexity (SC):** O(min(n1, n2))

Where:
- `n1` is the size of `nums1`.
- `n2` is the size of `nums2`.
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        vector<int> ans;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } else if(nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};