void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	while (nb)
	{
		write(1, nb % 10 + '0', 1);
		nb /= 10;
	}
}
