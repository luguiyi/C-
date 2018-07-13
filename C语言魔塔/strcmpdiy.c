int strcmpdiy(const char * a, const char * b)
{
    for(; *a !='\0' && *b !='\0'; a++, b++)
        if( *a > *b)
            return 1;
        else if ( *a==*b)
            return 0;
        else
            return -1;
}
