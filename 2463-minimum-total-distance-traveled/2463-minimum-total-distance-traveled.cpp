long long memo[101][101]={0};
class Solution {
public:    
   long long dp(vector<int>& robot, vector<vector<int>>& factory,int i,int j)
    {
        if(i == robot.size()) return 0;    
        if(j == factory.size()) return  1e16;
        if(memo[i][j]!=-1) return memo[i][j];
        
        int limit=0,ind=i;
        long long sum=dp(robot,factory,i,j+1),cursum=0;
        
        while(ind<robot.size()&&limit<factory[j][1])
        {
            cursum=cursum+(1LL*abs(1LL*robot[ind]-factory[j][0]));
            sum=min(sum,cursum+dp(robot,factory,ind+1,j+1));
            ind++,limit++;
        }
        return memo[i][j]=sum;
    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) 
    {
        sort(begin(robot),end(robot));
        sort(begin(factory),end(factory));
        memset(memo, -1, sizeof(memo)); 
        return dp(robot,factory,0,0);
    }
};