#include <stdio.h>
#include <conio.h>
#include <math.h>
int length(char[]);
void substring(char[], char[]);
void palindrome(char[]);
void compare(char[], char[]);
void copy(char[]);
void reverse(char[]);

int main()
{
    char a[50];
    char b[50];
    int choice;
    printf("Enter a string a : ");
    gets(a);
    printf("Enter a string b : ");
    gets(b);
    do
    {
        
        printf("Select any operation by clicking the numbers such as 1,2,3,4,5 : \n1) substring \n2) palindrome \n3) compare \n4) copy \n5) reverse \n");
        scanf("\n%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nthis checks string b is substring of a or not");
            substring(a,b);
            break;
        case 2:
            printf("select string \n1)string a \n2)string b \n");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                palindrome(a);
                break;
            case 2:
                palindrome(b);
                break;
            default:
                printf("\nenter proper choice");
                break;
            }
            break;
        case 3:
            compare(a,b);
            break;
        case 4:
            printf("\nwhich string do you want to copy \n1)string a \n2)string b \n");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                copy(a);
                break;
            case 2:
                copy(b);
                break;
            default:
                printf("\nenter proper choice");
                break;
            }
            break;
        case 5:
            printf("\nwhich string do you want to reverse \n1)string a \n2)string b \n");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                reverse(a);
                break;
            case 2:
                reverse(b);
                break;
            default:
                printf("\nenter proper choice");
                break;
            }
        }
        printf("\nif you want more operations then press 1 otherwise 0 \n");
        scanf("%d",&choice);
    } 
    while (choice==1);
    getch();
}



void substring(char a[], char b[])
{

    int i = 0 ;
    int len_a = length(a) ;
    int len_b = length(b) ;

    int count = 0 ;
    for ( int i =0 ; i < len_a-len_b +1; i++  )
    {
        if ( a[i] == b[0] )
        {
            count = 1 ;
            for ( int j = 0 ; j < len_b;j++ )
            {
                if (b[j] != a[i+j])
                {
                    count = 0;
                    break;
                }
                else 
                {
                    continue;
                }
            }
        }

        if ( count == 1 )
        {
            printf("b is substring of a \n");
            break;
        }
    }

    if ( count == 0)
    {
        printf("b is not substring of a\n");
    }   
}

int length(char string[])
{
    int i = 0 ;
    while ( string[i] != '\0' )
    {
        i++;
    }

    return i;
}

void palindrome(char str[])
{
    int len = length(str) ;
    int count = 1 ;
    for ( int i = 0 ; i < floor(len/2) ; i++ )
    {
        if ( str[i] != str[len-i-1] )
        {
            count = 0 ;
            break;
        }

        else 
        {
            continue;
        }
    }

    if (count ==1 )
    {
        printf("String is palidrome\n");
    }
    else 
    {
        printf("String is palidrome\n");
    }

}
void compare(char x[],char y[])
{
   int count = 1 ;

   int x_len = length(x) ;
   int y_len = length(y) ;

   if ( x_len != y_len )
   {
        printf("Strings are not equal\n");
   } 

   else 
   {
        for ( int i = 0 ; i < x_len; i++ )
        {
            if ( x[i] != y[i] )
            {
                count = 0 ;
                break;
            }
            else 
            {
                continue;
            }
        }

        if ( count == 1 )
        {
            printf("Strings are equal\n");
        }

        else
        {
            printf("Strings are not equal\n");
        }
   }
}
void copy(char str[])
{
    int len = length(str);
    char copy_str[len];
    for ( int i = 0 ; i < len ; i++ )
    {
        copy_str[i] = str[i] ;
    }

    printf("Copied string is \n");
    for ( int i = 0 ; i < len ; i++ )
    {
        printf("%s",copy_str[i]) ;
    }
}
void reverse(char str[])
{
    int len = length(str);
    char rev_str[len] ;
    for ( int i = 0 ; i < len ; i++ )
    {
        rev_str[i] = str[len-i-1];
    }

    for ( int i = 0 ; i < len ; i++ )
    {
        printf("%s", rev_str[i]);
    }
}