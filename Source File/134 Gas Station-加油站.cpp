class Solution 
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n = gas.size();         
        int index = 0; //起点下标
        while(index < n)
        {
            int ExtraGas = 0,i;
            for(i = 0;i < n;i++) //枚举n个点
            {
                int j = (i+index)%n; //类似循环队列
                ExtraGas += gas[j]-cost[j];
                if(ExtraGas < 0) break;
            }
            if(i == n) return index;
            else index += i+1; //getNext
        }
        return -1; //没有符合要求的点
    }
};