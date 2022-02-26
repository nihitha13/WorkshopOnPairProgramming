# Convert roman to integer

int romanToInt(string s) {
    int n=s.length();
    int result=0;
    unordered_map<char,int> mapping_char_to_int;
    mapping_char_to_int['I']=1;
    mapping_char_to_int['V']=5;
    mapping_char_to_int['X']=10;
    mapping_char_to_int['L']=50;
    mapping_char_to_int['C']=100;
    mapping_char_to_int['D']=500;
    mapping_char_to_int['M']=1000;
    int i=n-1;
    int count=0;
    while(i>=0)
    {
        if(mapping_char_to_int[s[i]]>=count)
        {
            result+=mapping_char_to_int[s[i]];
            count=mapping_char_to_int[s[i]];
        }
        else
        {
            result-=mapping_char_to_int[s[i]];
        }
        i--;
    }
    return result;
}

# Convert integer to roman

string intToRoman(int number) {
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    string result = "";
    
    for(int i=0 ; i<n ; ++i)
    {
        while(number>=numbers[i])
        {
            result += romans[i];
            number -= romans[i];
        }
    }
    return result;
}
