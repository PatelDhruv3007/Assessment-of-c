#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int choice,length,i,rep,num,sum=0,rem,reverce=0,temp;
    start:
    printf("\nPress 1 for reverse a string");
    printf("\nress 2 for Concatenation");
    printf("\nPress 3 for Palindrome");
    printf("\nPress 4 for Copy a string ");
    printf("\nPress 5 for Length of the string");
    printf("\nPress 6 for Frequency of character in s string ");
    printf("\nPress 7 for Check the number of vowels and consonants ");
    printf("\nPress 8 for Check the number of blank spaces and digits ");

    printf("\nPlease Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
    
        case 1:
            printf("\nEnter the value of str = ");
	        scanf("%s",str1);

            printf("\noriginal value of str1 = %s",str1);
            
            strrev(str1);
	        printf("\nReversed  string = %s",str1);
        break;
        case 2:
            printf("\nEnter the value of str1 = ");
	        scanf("%s",str1);
            printf("\nEnter the value of str2 = ");
	        scanf("%s",str2);

            printf("\noriginal value of str1 = %s",str1);
            printf("\noriginal value of str1 = %s",str2);

            strcat(str1,str2);
            printf("\nConcated string = %s",str1);
        break;
        case 3:

            printf("\nEnter the value of num = ");
            scanf("%d",&num);

            temp = num;

            while (num!=0)
            {
                rem = num%10;
                reverce = (reverce*10) + rem;
                num = num/10;
            }

            printf("\nReverce = %d",reverce);

            if (reverce==temp)
            {
                printf("\n%d is Palindrome number",reverce);
            }
            else
            {
                printf("\n%d is not Palindrome number",reverce);
            }
        break;
        case 4:
            printf("\nEnter the value of str1 = ");
	        scanf("%s",str1);

            printf("\noriginal value of str1 = %s",str1);
            printf("\noriginal value of str2 = %s",str2);

            strcat(str2,str1);
            printf("\nCopied string = %s",str1);
            printf("\nCopied string = %s",str2);
        break;
        case 5:
            printf("\nEnter the value of str = ");
	        scanf("%s",str1);

            printf("\noriginal value of str1 = %s",str1);

            length = strlen(str1);
	        printf("\nLennth of  string = %d",length);
        break;
        case 6:
            printf("\nEnter the value of str = ");
	        scanf("%s",str1);

            printf("\noriginal value of str1 = %s",str1);

            length = strlen(str1);
	        printf("\nLennth of  string = %d",length);
        break;
        case 7:
            printf("\nEnter the value of str = ");
	        scanf("%s",str1);
            for(i=0;str1[i]!='\0';i++)
            {
                if(i>='a' && i<='z' || i>='A' && i<='Z')
                {
                    length++;
                }
            }
	        printf("\nTotal Vowel or consonant = %d",length);
        break;
        case 8:
            printf("\nEnter the value of str = ");
	        scanf("%s",str1);
            for(i=0;str1[i]!='\0';i++)
            {
                if(i=' ' || i >= '0' && i<= '9')
                {
                    length++;
                }
            }
	        printf("\nTotal blank space and digits are = %d",length);
        break;
    }
    printf("\nDo you want to continue<press 1 to  continue>");
    printf("\nEnter your choice = ");
    scanf("%d",&rep);

    if(rep == 1)
    {
        goto start;
    }


    return 0;
}