/*

int sockMerchant(int n, vector<int> ar) {
    vector<int> counts(100, 0);
    for(auto i : ar){
        counts[i-1]++;
    }
    vector<int> pairs(100,0);
    int j = 0;
    for(auto i : counts){
        pairs[j++] = i/2;
    }
    int sum = 0;
    for(auto i : pairs) {
        sum += i;
    }
    return sum;
}

*/