/*

string organizingContainers(vector<vector<int>> container) {
    int n = container.size();
    long long sum1, sum2;
    sum1 = sum2 = 0;
    vector<int> row_sum;
    vector<int> col_sum;

    int i;
    for(i=0; i<n; i++){
        sum1 = sum2 = 0;
        for(int j=0; j<n; j++){
            sum1 += container[i][j];
            sum2 += container[j][i];
        }
        row_sum.push_back(sum1);
        col_sum.push_back(sum2);
    }

    sort(row_sum.begin(), row_sum.end());
    sort(col_sum.begin(), col_sum.end());

    for(i=0; i<n; i++){
        if(row_sum[i] != col_sum[i]){
            break;
        }
    }

    if(i == n){
        return "Possible";
    } else {
        return "Impossible";
    }

}


*/