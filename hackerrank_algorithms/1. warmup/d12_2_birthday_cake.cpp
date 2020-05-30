/*

int birthdayCakeCandles(vector<int> ar) {
    int no_of_candles = ar.size(), max=ar[0], count_of_max=0;
    for(auto i : ar){
        if(max < i){
            max = i;
            count_of_max = 1;
        } else if (max == i){
            count_of_max++;
        }
    }
    return count_of_max;
}

*/