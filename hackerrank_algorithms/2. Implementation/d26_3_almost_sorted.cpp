/*      2/25 Test Cases Failed :(

void almostSorted(vector<int> arr) {
    int ups = 0, downs = 0, l,r;
    vector<long unsigned int> ups_i, downs_i;
    for(long unsigned int i=1; i<arr.size()-1; i++){
        int prev_i = i-1;
        int next_i = i+1;
        if(arr[i] > arr[prev_i] && arr[i] > arr[next_i]){
            ups_i.push_back(i);
            ups++;
        } else if(arr[i] < arr[prev_i] && arr[i] < arr[next_i]) {
            downs++;
            downs_i.push_back(i);
        }
    }
    if(ups == 0){
        cout << "yes";
    } else if(ups > 2 ){
        cout << "no";
    } else if(ups == 2 && downs == 2 ) {
        if(arr[ups_i[0]] > arr[downs_i[1] + 1] || arr[downs_i[1]] < arr[ups_i[0] - 1]) {
            cout << "no";
        } else {
            cout << "yes" << endl << "swap " << ups_i[0] << " " << downs_i[1];
        }
    } else if(ups == 1 && downs == 1 && ups_i[0] - downs_i[0] ==-1){
        if(arr[ups_i[0]] > arr[downs_i[0] + 1] || arr[downs_i[0]] < arr[ups_i[0] - 1]) {
            cout << "no";
        } else {
            cout << "yes" << endl << "swap " << ups_i[0] << " " << downs_i[0];
        }
    } 
    else if(ups == 1 && downs == 1) {
        if(arr[ups_i[0]] > arr[downs_i[0] + 1] || arr[downs_i[0]] < arr[ups_i[0] - 1]) {
            cout << "no";
        } else {
            cout << "yes" << endl << "reverse " << ups_i[0] << " " << downs_i[0];
        }
    }
}


*/