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

char* charArray(int n){
    char *ans = (char *)malloc(n * sizeof(char));
    return ans;
}

int* intArray(int n){
    int *ans = (int *)malloc(n * sizeof(int));
    return ans;
}