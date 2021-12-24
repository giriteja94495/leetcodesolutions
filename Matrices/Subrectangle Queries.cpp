class SubrectangleQueries {
public:
    vector<vector<int>> rect;
    vector<int> v={0,0,0,0,0};
    vector<vector<int>> updates;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rect=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        v[0]=row1;
        v[1]=col1;
        v[2]=row2;
        v[3]=col2;
        v[4]=newValue;
        updates.push_back(v);
    }
    
    int getValue(int row, int col) {
        for(int i=updates.size()-1;i>=0;i--){
            if(row>=updates[i][0] && row<=updates[i][2] && col>=updates[i][1] && col<=updates[i][3])
                return updates[i][4];
        }
        return rect[row][col];
    }
};

// solution i wrote after i saw discuss section 

// link to question : https://leetcode.com/problems/subrectangle-queries/
