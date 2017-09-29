#include <stdio.h>
#include <string.h>

int main(){
    printf("Welcome to James Smith's demo of strcmp and strncmp! We will begin with strcmp.\n");
    printf("strcmp stands for 'String Compare' and it compares the C string str1 to the C string str2\n");
    printf("The syntax is as follows:\n");
    printf("    int strcmp ( const char * str1, const char * str2 );\n");
    printf("This function works by comparing the first characters of str1 and str2, if they are equal, it keeps going until the characters are not equal or it hits a terminating null. If they are not equal, then it returns an integer.\n");
    printf("\nThis function can return 3 different values...let's see what they can be!\n");
    char str1[] = "Woopwoop!";
    char str2[] = "Raise the roof!";
    char str3[] = "Woopwoop!";
    printf("We have 3 strings: str1 = %s, str2 = %s str3 = %s\n Lets start by comparing str1 to str2:\n", str1, str2, str3);
    printf("    strcmp (str1, str2) returns %d\n", strcmp(str1, str2));
    printf("It returns a positive number because W does not match the value of R and W has a larger value than R.\n To generalize:\n");
    printf("    If the return value is > 0, the first character that does not match has a greater value in ptr1 than in ptr2\n Following that logic, lets see if it returns negative if we switch the order of str1 and str 2...\n");
    printf("    strcmp (str2, str1) returns %d\n", strcmp(str2, str1));
    printf("Wow! what a crazy surprise! We can generalize this: It returns < 0 if the first character that does not match has a lower value in ptr1 than in ptr2\n");
    printf("Now if they don't match and it returns > 0 and < 0 then I wonder what it returns when they match like str1 and str3...hmmm...\n");
    printf("    strcmp (str1, str3) returns %d\n", strcmp(str1, str3));
    printf("As you can see, if the two strings are the same, the function returns 0.\n What happens if I wanted to compare something like 'kilobytes' and 'kilograms' to check if they both had the same 4 character prefix? I can't do that with strcmp because it compares the entire string.\n Now it's time to learn about strncmp!\n\n");

    printf("strncmp stands for 'String Number Compare' and it compares the first num characters of C string str1 to the C string str2\n");
    printf("The syntax is as follows:\n");
    printf("    int strncmp ( const char * str1, const char * str2, size_t num );\n");
    printf("This is exactly like strcmp but now it can also terminate after num characters match.\n");
    printf("This function follows the return rules, but instead they apply to substrings.\n");
    char str4[] = "Kilobytes";
    char str5[] = "Kilograms";
    printf("We have 2 strings: str4 = %s, str5 = %s\n Lets start by comparing the first 4 characters of str4 to str5:\n", str4, str5);
    printf("    strncmp (str4, str5, 4) returns %d\n", strncmp(str4, str5, 4));
    printf("It returns 0 because it essentially does strcmp(""Kilo"", ""Kilo"")\nJust for consistency, lets see the other results");
    printf("    strncmp (str4, str5, 5) returns %d because strcmp(""Kilob"", ""Kilog"") returns %d\n", strncmp(str4, str5, 5), strncmp(str4, str5, 5));
    printf("    strncmp (str5, str4, 5) returns %d because strcmp(""Kilog"", ""Kilob"") returns %d\n", strncmp(str5, str4, 5), strncmp(str5, str4, 5));
    return 0;
}