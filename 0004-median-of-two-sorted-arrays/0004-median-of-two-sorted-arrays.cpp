class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size2=  nums2.size();
        for (int i=0;i<size2;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int size= nums1.size();
        int middle= size/2;
        double ans=0.0;
        if(size%2==0)
        {
            ans= double(nums1[middle]+nums1[middle-1])/2;
        }
        else
        {
            ans= nums1[middle]; 
        }
        return ans;
    }
};