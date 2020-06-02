/*

int countingValleys(int n, string s) {
    stack<char> path;
    int count = 0;
    for(int i=0; i<n; i++){
        if(path.empty()){
            path.push(s[i]);
        } else{
            if(s[i] == 'U'){
                if(path.top() == 'D' && path.size() == 1){
                    path.pop();
                    count++;
                } else if (path.top() == 'D') {
                    path.pop();
                } else {
                    path.push(s[i]);
                }
            }
            else {
                if(path.top() == 'U'){
                    path.pop();
                } else {
                    path.push(s[i]);
                }
            }
        }       
    }
    return count;
}

*/