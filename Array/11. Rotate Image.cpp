class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        if (n < 2) return;
        
        /*
        // transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
         
        // swap elements for each row
        int mid = n / 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < mid; j++) {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
        */
        
        
        //  01 02 03 04 05
        //  06 07 08 09 10
        //  11 12 13 14 15
        //  16 17 18 19 20
        //  21 22 23 24 25
        /*
            
        */
        for (int layer = 0; layer < n/2; layer++) {
            int first = layer;
            int last = n - layer - 1;
             
            for (int i = first; i < last; i++) {
                int offset = i - first;
                int top = matrix[first][i];
                 
                // left -> top
                matrix[first][i] = matrix[last - offset][first];
                 
                // bottom -> left
                matrix[last - offset][first] = matrix[last][last - offset];
                 
                // right -> bottom
                matrix[last][last - offset] = matrix[i][last];
                 
                // top - > right;
                matrix[i][last] = top;
            }
        }
        
    }
};