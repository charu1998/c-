#include<stdio.h>
int main()
{
char letter;
printf("enter the letter",letter);
scanf("%c",&letter);
if('A'>=letter<='Z'&&'a'>=letter<='z')
printf("Alphabet");
else
printf("No");
return 0;
}
