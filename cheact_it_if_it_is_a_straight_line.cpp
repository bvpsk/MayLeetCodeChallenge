class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2) return true;
        int y1 = coordinates[0][1],
            y21 = coordinates[1][1] - y1,
            x1 = coordinates[0][0],
            x21 = coordinates[1][0] - x1;
        for(int i = 2; i < coordinates.size(); i++){
            if(y21 * (coordinates[i][0] - x1) != x21 * (coordinates[i][1] - y1))
                return false;
        }
        return true;
    }
};