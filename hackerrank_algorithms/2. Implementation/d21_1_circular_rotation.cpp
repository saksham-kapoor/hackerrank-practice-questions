/*

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int length = a.size();
    int new_k = k % length;
    vector<int> answers;
    for(int i:queries){
        int ans;
        ans = a[(i - new_k + length)%length];
        answers.push_back(ans);
    }
    return answers;
}

*/