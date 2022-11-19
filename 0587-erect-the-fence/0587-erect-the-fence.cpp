class Solution 
{
public:
    
    using tree = vector<int>;
    
    vector<tree> outerTrees(vector<tree>& trees) 
    {
        auto cross = [](tree& B, tree& A, tree& T) -> int
        {
            return (T[1]-B[1])*(B[0]-A[0]) - (B[1]-A[1])*(T[0]-B[0]);
        };
        
        sort(trees.begin(), trees.end());
        
        deque<tree> F;
        
        for (tree T : trees)
        {
            while (F.size() >= 2 and cross(F[F.size()-1],F[F.size()-2],T) < 0)
                F.pop_back();
            F.push_back(T);

            while (F.size() >= 2 and cross(F[0],F[1],T) > 0)
                F.pop_front();
            F.push_front(T);
        }
        
        set<tree> unique(F.begin(), F.end());
        return vector<tree>(unique.begin(), unique.end());
    }
};