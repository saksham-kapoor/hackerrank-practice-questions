/*

void extraLongFactorials(int n) {

    vector<int> big_factorial;
    big_factorial.push_back(1);

    for(int i=2; i<=n; i++){

        for(int j=0; j<big_factorial.size();j++){
            big_factorial[j] *= i;
        }

        for(int j=0; j<big_factorial.size(); j++){
            if(big_factorial[j] < 10){
                continue;
            }

            if(j == big_factorial.size()-1){
                big_factorial.push_back(0);
            }

            big_factorial[j + 1] += big_factorial[j] / 10;
            big_factorial[j] %= 10;

        }

    }

    for(int i=big_factorial.size()-1; i>=0;i--){
        cout << big_factorial[i];
    }
}

*/