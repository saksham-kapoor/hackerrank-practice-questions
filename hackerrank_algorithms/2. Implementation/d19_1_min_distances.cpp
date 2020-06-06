/*

int minimumDistances(vector<int> a) {
    int min = 10000;
    map<int, int> values;

    for(int i=0;i<a.size(); i++){
        if(values[a[i]] != 0){
            if(min > i - values[a[i]]  + 1){
                min = i - values[a[i]]  + 1; 
            } else {
                values[a[i]] = i + 1;
            }
        } else {
            values[a[i]] = i + 1;
        }
    }
    if(min == 10000){
        return -1;
    }
    else {
        return min;
    }

}

*/