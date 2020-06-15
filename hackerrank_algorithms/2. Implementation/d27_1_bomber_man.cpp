/*

vector<string> give_state(vector<string> grid){
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> bomb_locs;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(grid[i][j] == (char)79){
                vector<int> locs(2);
                locs[0] = i;
                locs[1] = j;
                bomb_locs.push_back(locs);
            } 
            grid[i][j] = (char)79;
        }
    }

    for(int k=0; k<bomb_locs.size(); k++){
        int i= bomb_locs[k][0];
        int j= bomb_locs[k][1];
        grid[i][j] = '.';
        if(!(i==0 && i==rows-1)){
            if(i==0){
                grid[i+1][j] = '.';
            }else if(i==rows-1){
                grid[i-1][j] = '.';
            } else {
                grid[i+1][j] = '.';
                grid[i-1][j] = '.';
            }
        }
        if(!(j==0 && j==cols-1)){
            if(j==0){
                grid[i][j+1] = '.';
            }else if(j==cols-1){
                grid[i][j-1] = '.';
            } else {
                grid[i][j+1] = '.';
                grid[i][j-1] = '.';
            }
        }
    }
    return grid;
}

vector<string> bomberMan(int n, vector<string> grid) {
    int rows = grid.size(), cols = grid[0].size();
    vector<string> final_state;
    int time = 1;
    final_state = grid;
    if(n == 1){
        return final_state;
    } else if(n%2==0){
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                final_state[i][j] = (char)79;
            }
        }
    } else {
        n %= 4;
        if(n==3){
            while(time != 3){
                final_state = give_state(final_state);
                time += 2;
            }
        } else {
            while(time != 5){
                final_state = give_state(final_state);
                time += 2;
            }
        }
    }

    return final_state;
}


*/