/*

string biggerIsGreater(string w) {
    int i = w.size()-1;

    if(i == 0) {
        return "no answer";
    }

    while(i>=0){
        if(i != 0) {
            if(w[i-1] < w[i]){
                i--;
                break;
            }
        }
        i--;
    }

    if(i==-1) {
        return "no answer";
    }

    int j =w.size()-1;

    while(j > i){
        if(w[j] > w[i]){
            break;
        }
        j--;
    }

    char temp = w[i];
    w[i] = w[j];
    w[j] = temp;

    sort(w.begin() + i + 1, w.end());
    return w;
}

*/