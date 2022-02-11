int arrayLenth(char *p)
{
    int len = 0;
    while (*p)
    {
        p++;
        len++;
    }
    return len;
}