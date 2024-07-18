// class Solution {
// public:
//     void fn(pair<int,int> p, vector<vector<int>>& matrix,set<pair<int, int>> zero_positions) {
//         int i = p.first;
//         int j = p.second;
//         int ru = i, rd = i, cr = j, cl = j;
//         while (cl >= 0) {
//             matrix[i][cl] = 0;
//             if(zero_position)
//             cl--;
//         }
//         cl = j + 1;
//         while (cl < matrix[0].size()) {
//             matrix[i][cl] = 0;
//             cl++;
//         }
//         while (ru >= 0) {
//             matrix[ru][j] = 0;
//             ru--;
//         }
//         ru = i + 1;
//         while (ru < matrix.size()) {
//             matrix[ru][j] = 0;
//             ru++;
//         }
//     }

//     void setZeroes(vector<vector<int>>& matrix) {
//         set<pair<int, int>> zero_positions;
        
       
//         for (int i = 0; i < matrix.size(); i++) {
//             for (int j = 0; j < matrix[0].size(); j++) {
//                 if (matrix[i][j] == 0) {
//                     zero_positions.insert({i, j});
//                 }
//             }
//         }
        
    
//         for (auto it : zero_positions) {
//             fn(it, matrix,zero_positions);
//         }
//     }