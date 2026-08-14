class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1=nums1.size();
        int p2=nums2.size();
        int p3=(p1+p2)/2;
        double ans;
        vector<int> nums;
        int count=-1;
        int i=0;int j=0;
        while(i<p1&&j<p2)
        {
            if(count==p3 && (p1+p2)%2!=0)
            {ans=nums[count];
            return ans;}
            else if(count==p3&& (p1+p2)%2==0)
            {
                ans=((double)nums[count]+(double)nums[count-1])/2;
                return ans;
            }
            else if(nums1[i]<nums2[j])//put nums1[]
            {
                nums.push_back(nums1[i]);
                i++;
                count++;
            }
            else
            {
                nums.push_back(nums2[j]);
                j++;
                count++;

            }
        }
        while(i<=p1)
        {
             if(count==p3 && (p1+p2)%2!=0)
            {ans=nums[count];
            return ans;}
            else if(count==p3&& (p1+p2)%2==0)
            {
                ans=((double)nums[count]+(double)nums[count-1])/2;
                return ans;
            }
           else if(i<p1)
           {nums.push_back(nums1[i]);
            i++;count++;}
            else break;
        }
          while(j<=p2)
        {
             if(count==p3 && (p1+p2)%2!=0)
            {ans=nums[count];
            return ans;}
            else if(count==p3&& (p1+p2)%2==0)
            {
                ans=((double)nums[count]+(double)nums[count-1])/2;
                return ans;
            }
           else if(j<p2){nums.push_back(nums2[j]);
            j++;
            count++;}
            else break;
        }
        
return ans;
    }
};