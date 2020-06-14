/*

vector<int> absolutePermutation(int n, int k) {
    vector<int> abs_perm;
    if(k==0){
        for(int i=1; i<=n; i++){
            abs_perm.push_back(i);
        }
    } else if(n%2 != 0 || n%k != 0 || n%(2*k) != 0){
        abs_perm.push_back(-1);
    } else {
        int flag = 0;
        for(int i=1, j=0; i<=n ;i++, j++){
            j%=k;
            if(j==0 && i!=1){
                if(flag == 0){
                    flag = 1;
                }
                else {
                    flag = 0;
                }
            }
            if(flag==0){
                abs_perm.push_back(i+k);
            } else {
                abs_perm.push_back(i-k);
            }
        }
    }
    return abs_perm;
}


*/