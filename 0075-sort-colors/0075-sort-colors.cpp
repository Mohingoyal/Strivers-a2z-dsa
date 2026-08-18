class Solution {
public:
    void sortColors(vector<int>& nums) {
     int count0=0;
     int count1=0;
    
     for(auto k:nums)
     {
        if(k==0)
        count0++;
         if(k==1)
        count1++;
       
     }int n=0;
     int size=nums.size();
     for(int i=0;i<size;i++)
     { if(count0!=0)
     {
        nums[n]=0;
        n++;
        count0--;
     }
if(count0==0&&count1!=0)
     {
        nums[n]=1;
        n++;
        count1--;
     }
     if(count0==0&&count1==0&&n<nums.size())
     {
        nums[n]=2;
        n++;
        
     }
     }
    }
};