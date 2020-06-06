/*

vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> widths) {
    vector<int> min_widths;
    for(auto i:cases){
        int entry = i[0];
        int exit = i[1];
        min_widths.push_back(*min_element(widths.begin()+entry, widths.begin() + 1 + exit));
    }
    return min_widths;
}

*/