/*

#define max(a,b) (a > b)? a : b

int nonDivisibleSubset(int k, vector<int> s) {
    // To Store Max Subset Length
    int max_subset_length = 0;

    // Calculate Remainders
    vector<int> rems(k,0);
    for(int i=0; i<s.size(); i++){
        int rem = s[i]%k;
        rems[rem]++;
    }

    max_subset_length = (rems[0] > 0) ? 1 : 0;
    int i;
    for(i=1; i<=k/2; i++){
        if(i != k-i){
            int max_rem_count = max(rems[i],  rems[k-i]);
            max_subset_length += max_rem_count;
        }
        else {
            max_subset_length++;
        }
    }
    
    
    return max_subset_length;
}

*/