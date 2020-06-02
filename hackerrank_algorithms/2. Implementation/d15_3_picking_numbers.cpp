/*

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    vector<int> counts(100, 0);
    int k = 0;

    for(long unsigned int i=0; i<a.size(); k++){
        int sum = 0;
        for(long unsigned int j=i; j<a.size(); j++){
            if(a[j] - a[i] <= 1){
                counts[k]++;
            }
        }
        i = accumulate(counts.begin(),counts.end(),0);
    }
    return *max_element(counts.begin(), counts.end());
}

*/