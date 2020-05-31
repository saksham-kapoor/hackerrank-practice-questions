/*

int getTotalX(vector<int> a, vector<int> b) {
    int max = *max_element(a.begin(), a.end()), min = *min_element(b.begin(), b.end());
    int count = 0;
    for(int i=max; i <= min; i++){
        int flag_a = 0, flag_b = 0;
        for(auto j : a){
            if(!(i % j == 0)){
                flag_a = 1;
                break;
            }
        }
        if(flag_a == 1){
            continue;
        }
        for(auto j : b){
            if(!(j % i == 0)){
                flag_b = 1;
                break;
            }
        }
        if(flag_b == 1){
            continue;
        } else {
            count++;
        }
    }
    return count;
}

*/