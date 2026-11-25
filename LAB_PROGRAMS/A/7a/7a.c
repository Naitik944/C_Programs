#include <stdio.h>
#include <string.h>

void input(char str[]);
int countVowels(char str[]);
int countConsonants(char str[]);
void output(int vowels, int consonants);

void input(char str[]) {
    printf("Enter a string: ");
    fgets(str,100,stdin);
}
int countVowels(char str[]) {
    char vowels[]="aeiouAEIOU";
    int i,count=0;
    for (i=0;str[i]!='\0';i++)
        if (strchr(vowels,str[i]))
            count++;
    return count;
}
int countConsonants(char str[]) {
    char alphabets[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char vowels[]="aeiouAEIOU";
    int i,count=0;
    for (i=0;str[i]!='\0';i++)
        if (strchr(alphabets,str[i]) && !strchr(vowels,str[i]))
            count++;
    return count;
}
void output(int vowels, int consonants) {
    printf("Number of vowels: %d\n",vowels);
    printf("Number of consonants: %d\n",consonants);
}
int main() {
    char str[100];
    input(str);
    output(countVowels(str),countConsonants(str));
}