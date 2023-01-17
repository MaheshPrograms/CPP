#include <stdio.h>
#include <math.h>
int length(char string[])
{
    int i = 0 ;
    while ( string[i] != '\0' )
    {
        i++;
    }

    return i;
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
        printf("%c",copy_str[i]) ;
    }
    printf("\n");
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
        printf("%c", rev_str[i]);
    }
    printf("\n");
}

int main()
{
    char str[] = "abcds";
    printf("%d\n", length(str));

    substring("abc","a");

    palindrome("abcba");

    compare("int","int");

    copy("pranav") ;

    reverse("pranav");
    
    
    return 0 ;
}