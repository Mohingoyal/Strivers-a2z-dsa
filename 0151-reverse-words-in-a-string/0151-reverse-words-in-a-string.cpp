class Solution {
public:
void put(string &revstr,string &a,int s,int e)
{
    for(int i=s;i>=e;i--)
    {
        revstr=revstr+a[i];
    }
}
void rev(string &revstr,int k,int e)
{int j=0;
for(int i=k;i<=(k+e)/2;i++)
{
    swap(revstr[i],revstr[e-j]);
    j++;
}
}
    string reverseWords(string s) {
        string revstr="";
        int ptr1=s.length()-1;
        int ptr2=s.length()-1;
        while(ptr1>=0&&ptr2>=0)
        {
            if(s[ptr1]==' ')
            {
                ptr1--;
                ptr2--;

            }
         
            //  else if(ptr2==0 && s[ptr2]==' ')
            // {
            //     put(revstr,s,ptr1,ptr2+1);
            //     ptr2--;
            // }
              else if(s[ptr2]==' ')
            {
                put(revstr,s,ptr1,ptr2);
                ptr1=ptr2-1;
                ptr2--;
            }
            else if(ptr2==0)
            {
                put(revstr,s,ptr1,ptr2);
                ptr2--;
            }
           
            else{ptr2--;}
        }
        if (revstr[revstr.length()-1]==' ')
        revstr.pop_back();
        ptr1=0;
        ptr2=0;
        while(ptr1<revstr.length()&&ptr2<revstr.length())
        {
            if(revstr[ptr2]==' ')
            {rev(revstr,ptr1,ptr2-1);
            ptr1=ptr2+1;
            ptr2++;

            }
            else if(ptr2==revstr.length()-1)
            {
                rev(revstr,ptr1,ptr2);
                ptr2++;
            }
            else ptr2++;
        }
        return revstr;
    }
};