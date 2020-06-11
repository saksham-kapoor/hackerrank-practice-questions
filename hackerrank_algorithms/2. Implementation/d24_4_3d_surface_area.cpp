/*

int surfaceArea(vector<vector<int>> A) {
    int new_A_rows = A.size() + 2;
    int new_A_cols = A[0].size() + 2;

    vector<vector<int>> new_A(new_A_rows);

    for(int i=0; i<new_A_rows; i++){
        new_A[i] = vector<int>(new_A_cols);
        for(int j=0; j<new_A_cols; j++){
            if(i==0 || j==0 || i == new_A_rows-1 || j == new_A_cols-1 ){
                new_A[i][j] = 0;
            } else {
                new_A[i][j] = A[i-1][j-1];
            }
        }
    }

    int area = 2*A.size()*A[0].size();

    for(int i=1; i<new_A_rows-1; i++){
        for(int j=1; j<new_A_cols-1; j++){
            area += max(0, new_A[i][j]-new_A[i][j-1]);
            area += max(0, new_A[i][j]-new_A[i][j+1]);
            area += max(0, new_A[i][j]-new_A[i-1][j]);
            area += max(0, new_A[i][j]-new_A[i+1][j]);
        }
    }

    return area;
}

*/