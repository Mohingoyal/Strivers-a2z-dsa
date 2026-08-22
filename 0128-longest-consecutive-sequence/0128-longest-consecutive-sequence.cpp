class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int> p;
        if(nums.size()==0)
        return 0;
        int count=1;
        int store=1;
        for(auto k:nums)
        {
              p.push(k);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            int a=p.top();
            p.pop();
            if(a==p.top()+1)
            count++;
            if(a==p.top())
      {      p.pop();p.push(a);}
            else if(a!=p.top()+1)
            {
                store=max(store,count);
                count=1;
            }
      
            
        }
        store=max(store,count);

        return store;

    }
};