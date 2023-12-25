/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/
#include <stdio.h>

int main() {

    char str[100], * ptr;
    int count;

    printf("Enter any string: ");
    gets(str);

    ptr = str;

    count = 0;

    while (*ptr!='\0') {
        count++;
        ptr++;
    }

    printf("The length of the string is: %d", count);

}
