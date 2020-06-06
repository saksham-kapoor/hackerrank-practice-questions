/*

int workbook(int n, int k, vector<int> arr) {
    int num_special = 0;
    int p=1, t =0;
    map<int, vector<int>> page_problems;

    for(int i=0; i<n; i++){
        for(int j=1; j<=arr[i]; j++){
            t=0;
            page_problems[p].push_back(j);
            if(j%k == 0){
                p++;
                t = 1;
            }
        }
        if(t!=1){
            p++;
        }
    }

    for(int i=1; i<=page_problems.size(); i++){
        for(int j=0; j<page_problems[i].size(); j++){
            if(page_problems[i][j] == i){
                num_special++;
            }
        }
    }

    return num_special;
}

*/