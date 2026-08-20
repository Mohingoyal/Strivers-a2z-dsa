class Solution {
public:
void levels(vector<vector<int>> &matrix,int start)
{if(start==matrix.size()/2)
return;
 for(int i=start;i<matrix.size()-1-start;i++)
        {
       
              //start at matrix[0][i] go to matrix[i][matrix.size()-1] 
           int store1=matrix[i][matrix.size()-1-start];//wrt to start is position ki value ko pehle store karlo phir ispe jaake value rakhdo
           matrix[i][matrix.size()-1-start]=matrix[start][i];
             int store2=matrix[matrix.size()-1-start][matrix.size()-1-i];
            matrix[matrix.size()-1-start][matrix.size()-1-i]=store1;
            int store3=matrix[matrix.size()-1-i][start];
            matrix[matrix.size()-1-i][start]=store2;
            matrix[start][i]=store3;
        }
        levels(matrix,start+1);
        return;
}
    void rotate(vector<vector<int>>& matrix) {
       levels(matrix,0);
        
    }
};