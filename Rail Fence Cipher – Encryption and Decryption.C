#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char name[100];
    int key,i, j, k = -1, m = 0, h = 0;
    char abc[100][100];
    int nameLen;
     clrscr();
    printf("\n enter string==");
    gets(name);
    printf("\n enter row value:");
    scanf("%d",&key);
    nameLen = strlen(name);

     printf("\n length of given string is %d:",nameLen);



    for(i = 0; i < key; i++)
    {
	for(j = 0; j < nameLen; j++)
	{
	    abc[i][j] = '*';     //assigning value * in all
	 }
    }

    for(i = 0; i<=nameLen; i++)
    {

	abc[m][h++] = name[i];

	if(m == 0 || m == key-1)
	{
	    k= k * (-1);
	 }
	m = m + k;
    }

    printf("\nAfter converting %s the value is: ",name);

    for(i = 0; i < key; ++i)
    {
	for(j = 0; j < nameLen; ++j)
	{
	    if(abc[i][j] != '*')
	    {
		printf("%c", abc[i][j]);
		}
	}
     }
	getch();
}
