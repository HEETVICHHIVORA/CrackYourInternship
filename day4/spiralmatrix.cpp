using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        if (n == 0) return ans; 
        int m = matrix[0].size();
        int ele = m * n;
        int count = 0;
        int srow = 0, ecol = m - 1, scol = 0, erow = n - 1;
        
        while (count < ele) {
            // Traverse top row
            for (int i = scol; i <= ecol && count < ele; i++) {
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;
            
            // Traverse rightmost column
            for (int i = srow; i <= erow && count < ele; i++) {
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;
            
            // Traverse bottom row
            for (int i = ecol; i >= scol && count < ele; i--) {
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;
            
            // Traverse leftmost column
            for (int i = erow; i >= srow && count < ele; i--) {
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }
        return ans;
    }
};
