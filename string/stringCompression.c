//string compression

char * compress(char *s)
{
    char c;
    char a[20];
    char *walk = s, *pivot = s;
    int i = 0, count = 1;
    
    while(*s != '\0')
    {
        a[i] = *s;
        walk = s + 1;
        while (*walk == *s)
        {
            walk++;
            count++;
        }
        char b = count + '0';
        a[++i] = count + '0';
        i++;
        count = 1;
        s = walk;
    }
    a[i] = '\0';
    printf("%s\n", a);

    return a;
}