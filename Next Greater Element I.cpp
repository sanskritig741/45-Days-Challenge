class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i= 0 ;i <nums1.size() ; i++){
            int num=-1;
            int p = 0;
            for(int j=0 ; j< nums2.size() ; j++){
                if(p==0){
                    if(nums1[i]  == nums2[j])p++;
                    continue;
                }

                if(nums2[j] > nums1[i]){
                    num =nums2[j];
                    break;
                }
            }
            v.push_back(num);
        }
        return v;
    }
};
