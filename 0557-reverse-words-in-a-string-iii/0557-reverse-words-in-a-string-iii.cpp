class Solution {
public:
void rev(string &s,int k,int e)
{int j=0;
    for(int i=k;i<=(k+e)/2;i++)
    {
        swap(s[i],s[e-j]);
        j++;
    }
}
    string reverseWords(string s) {
        int ptr1=0;
        int ptr2=0;
        while(ptr1<s.length() && ptr2<s.length())
        {
            if(s[ptr2]==' ')
            {rev(s,ptr1,ptr2-1);
            ptr1=ptr2+1;
            ptr2++;
            }
            else if(ptr2==s.length()-1)
            {
                rev(s,ptr1,ptr2);
                ptr2++;
            }
            
            ptr2++;
        }
        return s;
    }
};