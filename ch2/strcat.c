# include <stdio.h>


void my_strcat(char s[], char t[]){
    int i, j;
    i = j =0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0');
}


int main(int argc, char const *argv[])
{
    char s[500] = "abcd fr";
    char t[] = "asdfghjk rdcftg";
    printf("%s\n", s);
    printf("%s\n", t);
    my_strcat(s, t);
    printf("%s\n", s);
    return 0;
}
