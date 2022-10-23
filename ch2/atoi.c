# include <stdio.h>


int my_atoi(char s[]){
    int i, n;
    n = 0;
    for (i = 0; '0' <= s[i] && s[i] <= '9'; i++)
        n = 10 * n + (s[i] - '0');
    return n;
}


int main(int argc, char const *argv[])
{
    char s[] = "3215";
    printf("str: %s\n", s);
    int d = my_atoi(s);
    printf("num: %d\n", d);
    return 0;
}
