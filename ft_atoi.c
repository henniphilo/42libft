int     ft_atoi (const char *string)
{
    int     sign;
    int     result;
    int     i;

    sign = 1;
    result = 0;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <+ 13))
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}
