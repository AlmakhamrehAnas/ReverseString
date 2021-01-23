#include <stdio.h>
//created by anas
//this program reverses a give string and stores it in a new array of characters.
int main()
{

    char myString[] = {'c','o','n','g','r','a','t','u','l','a','t','i','o','n','s'};
    char reversedString[sizeof(myString)] = {};
    int i,j=0;
    printf("original string: ");
    for(i=0;i<sizeof(myString);i++)
        printf("%c",myString[i]);

    printf("\n");

    for(i=sizeof(myString)-1 ; i>=0 ; i--)
    {
        reversedString[j] = myString[i];
        j++;
    }

    printf("reversed string: ");
    for(i=0;i<sizeof(reversedString);i++)
        printf("%c",reversedString[i]);
    
    return(0);
}
