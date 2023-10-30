#include <stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet to proceed: ");
    scanf("%c",&a);
        switch (a)
    {
        case 'a':
        printf("%c is a vowel\n",a);
        break;
        case 'e':
        printf("%c is a vowel\n",a);
        break;
        case 'i':
        printf("%c is a vowel\n",a);
        break;
        case 'o':
        printf("%c is a vowel\n",a);
        break;
        case 'u':
        printf("%c is a vowel\n",a);
        break;
        case 'A':
        printf("%c is a vowel\n",a);
        break;
        case 'E':
        printf("%c is a vowel\n",a);
        break;
        case 'I':
        printf("%c is a vowel\n",a);
        break;
        case 'O':
        printf("%c is a vowel\n",a);
        break;
        case 'U': 
        printf("%c is a vowel\n",a);
        break;
        default:
        printf("%c is a consonant\n",a);
        break;
    }
    return 0;
}