class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int index=-1;
        for(int i=0;i<drones.size();i++)
            {
                if((abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]))<=drones[i][2])
                {if(index==-1)
                {
                    index=i;
                }
                   else if((abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]))<(abs(drones[index][0]-target[0])+abs(drones[index][1]-target[1])))
                        index=i;
                } 
            }
        return index;
    }
};