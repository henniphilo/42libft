int	ft_memcmp (const void *a1, const void *a2, size_t n)
{
    const unsigned char *aa1;
    const unsigned char *aa2;
    size_t              i;

    i = 0;
    aa1 = (const unsigned char *)a1;
    aa2 = (const unsigned char *)a2;
    while (i < n)
    {
        is (aa1[i] != aa2[i])
            return (aa1[i] != aa2[i]);
        i++;
    }
    return (NULL);
}