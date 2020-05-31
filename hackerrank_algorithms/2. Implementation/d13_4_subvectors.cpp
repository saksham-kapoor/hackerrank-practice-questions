/*

int birthday(vector<int> s, int d, int m) {
    int count = 0, length = s.size();
    // number of contiguous subarrays = length - elements_in_subarray + 1
    for(int i = 0; i < (length - m + 1); i++){
        auto start = s.begin() + i;
        auto end = s.begin() + i + m;
        // vector initialisation (start, end)
        // here start is included and end is excluded
        vector<int> subvector(start, end);
        int sum = 0;
        for(auto i : subvector){
            sum += i;
        }
        if(sum == d){
            count ++;
        }
    }
    return count;
}

*/