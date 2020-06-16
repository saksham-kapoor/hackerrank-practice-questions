/*

int introTutorial(int V, vector<int> arr) {
    int begin = 0, end = arr.size()-1;
    int mid = (begin+end)/2;
    while(begin <= end){
        if(V > arr[mid]){
            begin = mid + 1;
            mid  = (begin+end)/2;
        } else if(V < arr[mid]){
            end = mid - 1;
            mid = (begin+end)/2;
        } else {
            return mid;
        }
    }
    return -1;
}

*/