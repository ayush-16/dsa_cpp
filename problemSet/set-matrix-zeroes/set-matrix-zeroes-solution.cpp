class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rowSet = {};
        set<int> columnSet = {};

        for(int i = 0; i < matrix.size(); i++ ){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    rowSet.insert(i);
                    columnSet.insert(j);
                }
            }
        }

        for(int i = 0; i < matrix.size(); i++ ){
            for(int j = 0; j < matrix[0].size(); j++){
                if (rowSet.find(i) != rowSet.end() || columnSet.find(j) != columnSet.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};