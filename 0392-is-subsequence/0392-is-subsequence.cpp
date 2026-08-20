class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr1=0;
        int ptr2=0;

if(s.length()==0)
return true;
        if(s.length()>t.length())
        return false;
        int flag=0;
        while(ptr1<s.length()&&ptr2<t.length())
        {
            if(s[ptr1]==t[ptr2])
            {
               flag=1;
               ptr1++;
            }
            else flag=0;
            ptr2++;
        }
        if(ptr1<s.length()&&ptr2==t.length())
        return false;
        if(flag==1)
        return true;
        return false;
    }
};