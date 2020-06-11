/*

string timeInWords(int h, int m) {
    vector<string> numbers = {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half",
    };

    string time_string = "";
    string minute_s = "minutes";
    if(m == 1){
        minute_s = "minute";
    }
    if(m==0){
        time_string += numbers[h] + " o' clock";
    } else if (m<=30){
        if(m != 15 && m!= 30) {
            time_string += numbers[m] + " " + minute_s + " past " + numbers[h];
        } else {
            time_string += numbers[m] + " past " + numbers[h];
        } 
    } else if (m>30){
        m = 60 - m;
        if(m != 15) {
            time_string += numbers[m] + " " + minute_s + " to " + numbers[h+1];
        } else {
            time_string += numbers[m] + " to " + numbers[h+1];
        } 
    }
    return time_string;
}


*/