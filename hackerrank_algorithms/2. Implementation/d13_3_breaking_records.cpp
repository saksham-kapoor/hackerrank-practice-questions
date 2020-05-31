/*

vector<int> breakingRecords(vector<int> scores) {
    vector<int> record_breaking_count(2,0);
    int cur_min = scores[0];
    int cur_max = scores[0];
    for(auto i : scores){
        if(cur_min > i){
            record_breaking_count[1]++;
            cur_min = i;
        }
        if(cur_max < i){
            record_breaking_count[0]++;
            cur_max = i;
        }
    }
    return record_breaking_count;
}


*/