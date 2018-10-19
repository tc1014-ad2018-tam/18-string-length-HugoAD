/*This program allows the user to enter a string and then show
 * to the user the length of the string.
 *
 * Author: Hugo Aguirre
 * Date: October 18th, 2018
 *
 * */

#include <stdio.h>

int main() {

    //Variable declaration
    char s[1000];
    int i;


    //make the request to the user
    printf("Welcome user, please, enter a string: ");
    scanf("%s", s);


    //cycle to calculate the length of the string
    for(i = 0; s[i] != '\0'; i++);

    //print solution
    printf("The length of the string is: %d", i);
    return 0;
}