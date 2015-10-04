char* intToRoman(int num) {
    char *str;
    str = (char*)calloc(20, sizeof(char));
    switch(num / 1000)
    {
        case 1: strcat(str, "M"); break;
        case 2: strcat(str, "MM"); break;
        case 3: strcat(str, "MMM"); break;
        default: break; 
    }
    num %= 1000;
    switch(num / 100)
    {
        case 1: strcat(str, "C"); break;
        case 2: strcat(str, "CC"); break;
        case 3: strcat(str, "CCC"); break;
        case 4: strcat(str, "CD"); break;
        case 5: strcat(str, "D"); break;
        case 6: strcat(str, "DC"); break;
        case 7: strcat(str, "DCC"); break;
        case 8: strcat(str, "DCCC"); break;
        case 9: strcat(str, "CM"); break;
        default: break; 
    }
    num %= 100;
    switch(num / 10)
    {
        case 1: strcat(str, "X"); break;
        case 2: strcat(str, "XX"); break;
        case 3: strcat(str, "XXX"); break;
        case 4: strcat(str, "XL"); break;
        case 5: strcat(str, "L"); break;
        case 6: strcat(str, "LX"); break;
        case 7: strcat(str, "LXX"); break;
        case 8: strcat(str, "LXXX"); break;
        case 9: strcat(str, "XC"); break;
        default: break; 
    }
    num %= 10;
    switch(num)
    {
        case 1: strcat(str, "I"); break;
        case 2: strcat(str, "II"); break;
        case 3: strcat(str, "III"); break;
        case 4: strcat(str, "IV"); break;
        case 5: strcat(str, "V"); break;
        case 6: strcat(str, "VI"); break;
        case 7: strcat(str, "VII"); break;
        case 8: strcat(str, "VIII"); break;
        case 9: strcat(str, "IX"); break;
        default: break; 
    }
    return str;
}