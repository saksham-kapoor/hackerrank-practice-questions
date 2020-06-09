/*

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> answers;
    map<int, int> counts;
    int total_count = arr.size();
    answers.push_back(total_count);
    set<int> unique_asc(arr.begin(), arr.end());
    
    for(auto i:arr){
        counts[i]++;
    } // O(n)
        
    for(auto i:unique_asc){
        total_count -= counts[i];
        answers.push_back(total_count);
    } // O(n)

    answers.pop_back();

    return answers;
}

*/