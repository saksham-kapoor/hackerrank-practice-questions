/*

void kaprekarNumbers(int p, int q) {
    int flag = 0;
    for(long n=p; n<=q; n++){
        long sq = n*n;
        string num = to_string(n);
        long num_digits = num.size();
        string sq_num = to_string(sq);
        long sq_num_digits = sq_num.size();
        string left = sq_num.substr(0, sq_num_digits-num_digits), right = sq_num.substr(sq_num_digits-num_digits, num_digits);
        stringstream conversionl(left);
        long l = 0;
        conversionl >> l;
        
        stringstream conversionr(right);
        long r = 0;
        conversionr >> r;
        
        if(l + r == n){
            flag = 1;
            cout << n << " ";
        }
    }
    if(!flag){
        cout << "INVALID RANGE";
    }
}

*/