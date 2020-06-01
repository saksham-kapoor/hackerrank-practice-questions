/*

string dayOfProgrammer(int y) {
    string final_date;
    string dd, mm, yyyy;
    int day, month=9;
    int dayOfProg = 256;

    if(y <= 1917){
        if(y % 4 == 0){
            day = 12;
        } else {
            day = 13;
        }
        
    } else if(y >= 1919) {
        if(y % 400 == 0 || ((y % 4 == 0) && (y % 100 != 0))){
            day = 12;
        } else {
            day = 13;
        }

    } else if (y == 1918) {
        day = 26;
        month = 9;
    }

    dd = to_string(day);
    mm = "0" + to_string(month);
    yyyy = to_string(y);
    
    final_date = dd + "." + mm + "." + yyyy;
    return final_date; 
}

*/