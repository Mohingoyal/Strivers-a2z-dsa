class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> s1;
        vector<char> s2;
        map<char,char> mp;
         for(int i=0;i<s.length();i++)
         {if(find(s1.begin(),s1.end(),s[i])==s1.end())//hai nhi
         { 
         s1.push_back(s[i]);
            mp[s[i]];
         }
       
        if(find(s2.begin(),s2.end(),t[i])==s2.end())//hai nhi
         { 
         s2.push_back(t[i]);
         mp[s[i]]=t[i];
         }
        
         }
         string f="";
if(s1.size()!=s2.size())
return false;
// map<char,char> mp;
// for(int j=0;j<s1.size();j++)
// {
//     mp[s1[j]]=s2[j];
// } 
for(auto k:s)
{
    f=f+mp[k];
}
if(f==t)
return true;
return false;
    }
};