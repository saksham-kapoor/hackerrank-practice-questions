/*

vector<int> permutationEquation(vector<int> p) {
    vector<int> indexes(p.size());
    vector<int> y;

    for(int i=0; i<p.size(); i++){
        indexes[p[i]-1] = i+1;
    }

    for(int i=0; i<indexes.size(); i++){
        y.push_back(indexes[indexes[i]-1]);
    }
    return y;
}

*/