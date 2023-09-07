#include<stdio.h>
 
int isVowel(char c);
int isConsonant(char c);
int isDigit(char c);
int isSpace(char c); 
 
int main(){
    char str[500]; // define the array to save the string 
    // initiallization to their value
    int vowels = 0, constant = 0, Digits = 0, space = 0, i;
    printf("\nEnter the line --> ");
    gets(str); // function to receive the line of string has the adress of the array
    // loop to pass on all the line "array"
    for(i = 0 ; str[i] != '\0' ; i++) {
        vowels += isVowel(str[i]);
        constant += isConsonant(str[i]);
        Digits += isDigit(str[i]);
        space += isSpace(str[i]);
    }
// prints the value
    printf("\n    Vowels: %d\n",vowels);
    printf("    Consonants: %d\n",constant);
    printf("    Digits: %d\n",Digits);
    printf("    Spaces: %d\n",space);
     
return 0;
}
 
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){ 
        return 1;
    } else {
        return 0;
    }
}
 
int isConsonant(char c) {
    if(((c>='a'&& c<='z') || (c>='A'&& c<='Z')) && !isVowel(c)){
    return 1;
    } else {
    return 0;
    }
}
 
int isDigit(char c) {
    if(c>='0'&&c<='9'){
    return 1;
    } else {
    return 0;
    }
}
 
int isSpace(char c) {
    if(c == ' '){
    return 1;
    } else {
    return 0;
    }
}