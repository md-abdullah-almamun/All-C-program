//Number of vowels, consonants, words, digits and other

#include<stdio.h>
int main()
{
    char string[100],ch;
    int i,vowel,consonant ,digit,word,other=0;
    printf("enter string....");
    gets(string);

    i=vowel=consonant=word=digit=other;

    while((ch=string[i])!='\0')
    {
        if( ch=='a'|| ch=='e' || ch=='i' || ch=='o' ||  ch=='u' ||
           ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'
           )
                    vowel++;

        else if((ch>'a' && ch<='z')||
                (ch>'A' && ch<='Z'))
                    consonant++;

        else if(ch>'0' && ch<='9')
                    digit++;

        else if(ch==' ')
                    word++;

        else
            other++;

      i++;
    }
    word++;

    printf("number of vowels=%d\n",vowel);
    printf("number of consonant=%d\n",consonant);
    printf("number of digit=%d\n",digit);
    printf("number of word=%d\n",word);
    printf("number of other=%d\n",other);

    return 0;

}
