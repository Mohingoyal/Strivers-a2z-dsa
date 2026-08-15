class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> vt;
        int maxi=0;
        int ptr1=0;
        int ptr2=0;
        while(ptr2<s.length())
        {
            if(find(vt.begin(),vt.end(),s[ptr2])==vt.end())//hai nhi
            {
                   vt.push_back(s[ptr2]);
                   ptr2++;
            }
            else{
                if(maxi<vt.size())
                maxi=vt.size();
                vt.clear();
                ptr1++;
                ptr2=ptr1;
            }
        }
        if(maxi<vt.size())
                maxi=vt.size();
                return maxi;
    }
};