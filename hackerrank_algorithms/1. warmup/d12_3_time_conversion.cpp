/*

string timeConversion(string s) {
    string hours_string, minutes_string, seconds_string;
    int length = s.size(), hours, minutes, seconds, hours_to_add=0;
    
    hours_string = s.substr(0,2);

    if(s[length-2] == 'P'){
        hours_to_add = 12;
        if(hours_string == "12"){
            s.replace(length-2, 2, "");
            return s;
        }
    } else {
        hours_to_add=0;
        if(hours_string == "12"){
            s.replace(0,2,"00");
            s.replace(length-2, 2, "");
            return s;
        }
    }
    
    stringstream convert(hours_string);
    convert >> hours;
    hours += hours_to_add;
    hours_string = to_string(hours);
    if(hours_string.size() == 1){
        hours_string = "0" + hours_string;
    }
    s.replace(0,2,hours_string);
    s.replace(length-2, 2, "");

    return s;
}


*/