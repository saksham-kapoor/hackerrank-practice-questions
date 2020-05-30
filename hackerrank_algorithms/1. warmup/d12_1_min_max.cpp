/* 

void miniMaxSum(vector<int> arr) {
    int min, max;
    long sum = 0, min_sum, max_sum;
    min = arr[0];
    max = arr[0];
    for(auto i : arr){
        if(min > i){
            min = i;
        }
        if(max < i){
            max = i;
        }
        sum += i;
    }
    min_sum = sum - max;
    max_sum = sum - min;
    cout << min_sum << " " << max_sum;
}

*/