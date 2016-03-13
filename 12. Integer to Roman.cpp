// Given an integer, convert it to a roman numeral.

// Input is guaranteed to be within the range from 1 to 3999.

class Solution {
public:
    string intToRoman(int num) {
        const string THOUS[]  = {"","M","MM","MMM"};
        const string HUNDS[]  = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        const string TENS[]   = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        const string ONES[]   = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string result;
        result += THOUS[(int)(num/1000)%10];
        result += HUNDS[(int)(num/100)%10];
        result += TENS[(int)(num/10)%10];
        result += ONES[num%10];
        return result;
    }
};