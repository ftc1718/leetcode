char* intToRoman(int num) {
    int values[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char strs[][3] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    char *str;
    int i;
    str = (char*)calloc(20, sizeof(char));
    for(i = 0; i < 13; i++)
    {
        while(num >= values[i])
        {
            num -= values[i];
            strcat(str, strs[i]);
        }
    }
    return str;
}