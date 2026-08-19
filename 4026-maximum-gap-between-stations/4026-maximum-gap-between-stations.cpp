class Solution {
public:
void getmaxpos(string& skill,string &station,vector<int> &ary,int &gap)
{int k=ary.size()-1;
    for(int i=station.length()-1;i>=0;i--)
    {
      if(station[i]==skill[k]&&k>0)
      {
        
    int store=i-ary[k-1];
    k--;
    gap=max(store,gap);
      }
    }
    return;

}
void place(string &skill,string &station,vector<int>& ary)//placing the skills that occur one by one in order at stations
{int k=0;
for(int i=0;i<station.length();i++)
{
    if(k==skill.length())
    break;
    if(station[i]==skill[k])
    {
        ary.push_back(i);//skill ka konsa element station ki kis pos pe baitha hai
        k++;
    }
}
return;
}
    int maximumGap(string skill, string station) {
        vector<int> ary;
        int gap=0;
    

        place(skill,station,ary);
    getmaxpos(skill,station,ary,gap);
    return gap;
    }
};