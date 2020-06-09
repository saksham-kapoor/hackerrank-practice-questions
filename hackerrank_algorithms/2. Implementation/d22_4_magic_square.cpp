/*

#define mod_diff(a,b) (a > b)? a-b : b-a


vector<vector<int>> magic_squares;

//checking if magic square
void check_magic(vector<int> v){

    // check row sum
    
    for(int i=0; i<3; i++){
        int row_sum = 0;
        for(int j=0; j<3; j++){
            row_sum += v[3*i + j];
        }
        if(row_sum != 15){
            return;
        }
    }

    for(int i=0; i<3; i++){
        int col_sum = 0;
        for(int j=0; j<3; j++){
            col_sum += v[3*j + i];
        }
        if(col_sum != 15){
            return;
        }
    }

    int diag_sum = 0;
    int diag_sum_2 = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                diag_sum += v[3*i + j];
            } 
            if(i+j == 2) {
                diag_sum_2 += v[3*i + j];
            }
        }
    }
    if(diag_sum != 15){
        return;
    }
    if(diag_sum_2 != 15) {
        return;
    }


    magic_squares.push_back(v);
    
}


//generating all permutations/matrices
void generate_matrices(){
    vector<int> v(9);
    for(int i=1; i<=9; i++){
        v[i-1] = i;
    }

    do {
        check_magic(v);
    } while(next_permutation(v.begin(), v.end()));
}



// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    vector<int> costs;
    
    for(long unsigned int k=0; k<magic_squares.size(); k++){
        int cost = 0;
        for(int i=0; i<9; i++){
                cost += mod_diff(s[i/3][i%3], magic_squares[k][i]);
        }
        costs.push_back(cost);
    }

    return *min_element(costs.begin(), costs.end());
}


*/