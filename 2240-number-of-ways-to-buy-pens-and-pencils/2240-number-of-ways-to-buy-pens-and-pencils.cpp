class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
            long long count=0;
         long long i=0;
            while(i*cost1 <= total){
                int diff=total-(i*cost1);
                count+=((diff/cost2)+1);
                i++;
         
            }
            return count;
            
        
    }
};