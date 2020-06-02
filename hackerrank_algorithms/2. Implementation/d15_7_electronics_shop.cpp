/*

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end(), greater<int>());
    sort(drives.begin(), drives.end());
    int max = -1;
    for(int i=0, j=0; i<keyboards.size(); i++){
        for(;j<drives.size(); j++){
            if(keyboards[i] + drives[j] > b){
                break;
            }
            if(keyboards[i] + drives[j] > max){
                max = keyboards[i] + drives[j];
            }
        }
    }
    return max;
}


*/