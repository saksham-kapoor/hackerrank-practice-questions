/*

string angryProfessor(int k, vector<int> a) {
    int num_on_time = 0;
    for(auto i:a){
        if(i <= 0){
            num_on_time++;
        }
    }
    if(num_on_time >= k){
        return "NO";
    } else {
        return "YES";
    }
}

*/