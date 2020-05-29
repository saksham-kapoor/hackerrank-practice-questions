/*

void plusMinus(vector<int> arr) {
    int size = arr.size(), positive, negative, zero;
    positive = negative = zero = 0;
    for(auto i : arr){
        if(i<0){
            negative++;
        }
        else if(i>0){
            positive++;
        }
        else {
            zero++;
        }
    }
    cout << setprecision(6); //c++ manipulators
    cout << ((float)positive)/((float)size) << endl;
    cout << ((float)negative)/((float)size) << endl;
    cout << ((float)zero)/((float)size) << endl;
}


*/