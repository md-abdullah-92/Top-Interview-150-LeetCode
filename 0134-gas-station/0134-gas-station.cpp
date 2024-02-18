class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0,cur_gas=0,index=0;
       // gas.push_back(gas[0]);
        for(int i=0;i<gas.size();i++){
            sum1+=gas[i];
            sum2+=cost[i];
            cur_gas+=(gas[i]-cost[i]);
            if(cur_gas<0){
                index=i+1;
                cur_gas=0;
                
            }
            
        }
        if(sum1>=sum2) return index;
        else return -1;
        
    }
};