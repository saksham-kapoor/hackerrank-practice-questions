/*

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    vector<int> ranking;
    set<int> unique_scores(scores.begin(), scores.end());
    int j=0, rank;
    int size = unique_scores.size();
    set<int>:: iterator it;
    it = unique_scores.begin();
    for(long unsigned int i=0; i<alice.size(); i++){
        while(alice[i] > *it && it != unique_scores.end()){
            it++;
            j++;
        }
        if(alice[i] == *it){
            rank = size-j;
        } else {
            rank = size-j+1;
        }
        ranking.push_back(rank);
    }
    return ranking;
}

*/