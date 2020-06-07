/*

vector<string> cavityMap(vector<string> grid) {
    int r, c;
    r = c = grid.size();
    for(int i=1; i< r-1; i++){
        for(int j=1; j< c-1; j++){
            if(grid[i][j] > grid[i-1][j] && grid[i][j] > grid[i+1][j] && grid[i][j] > grid[i][j-1] && grid[i][j] > grid[i][j+1]) {
                grid[i][j] = 'X';
            }
        }
    }
    return grid;
}


*/