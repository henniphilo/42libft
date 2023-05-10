size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int    i;
    unsigned int    slen;
    unsigned int    dlen;

    i = 0;
    slen = 0;
    while (src[slen])
        slen++;
    dlen = 0;
    while (dest[dlen] && dlen < size)
        dlen++;
    if (size <= dlen)
        return (slen + size);
    while (src[i] && dlen + 1 + i < size)
    {
            dest[dlen + i] = src[i];
            i++;
    }
    dest[dlen + i] = '\0';
    return (dlen + slen);
}