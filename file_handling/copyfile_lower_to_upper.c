#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    FILE *ptr1,*ptr2;
    char arr[100];

    ptr1=fopen("C:/prachi new/c code/forexample1.txt","r+w");
    ptr2=fopen("C:/prachi new/c code/forexample2.txt","r+w");
    if (ptr1 == NULL)
    {
        printf("Cannot open first file\n");
        //exit(0);
    }
    if (ptr2 == NULL)
    {
        printf("Cannot open second file\n");
        exit(0);
    }

    char ch;
    //ch=fgetc(ptr1);
    //putc(c,ptr2);
    while(ch!=EOF)
    {
        ch=fgetc(ptr1);
        char c;
        if(ch>=97 && ch<=122)
        {
            c=toupper(ch);
        }
        else
        {
            c=ch;
        }
        putc(c,ptr2);
        printf("%c",c);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}


/*
int main()
{
	FILE *f= fopen("C:/prachi new/c code/forexample1.txt", "r");
	FILE *f2= fopen("C:/prachi new/c code/forexample2.txt", "w+");
	char ch= fgetc(f);
	while(ch!=EOF)
	{
		int temp= ch;
		if(temp>=97 && temp<=122)
		{
			temp-=32;
			fputc(temp, f2);
			printf("%c", temp);
		}
		else
		{
			printf("%c", ch);
			fputc(ch, f2);
		}
		ch= fgetc(f);
	}
	printf("\n");
	fclose(f);
	fclose(f2);
}
*/
