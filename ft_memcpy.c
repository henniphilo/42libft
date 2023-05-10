void	*ft_memcpy (void *restrict dest, const void *restrict src, size_t size)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (0);
    while (i < size)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    return (dest);
}
