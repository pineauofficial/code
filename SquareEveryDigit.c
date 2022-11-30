int ft_nlen(unsigned n)
{
  int a;
  
  a = 1;
  while (n > 9)
  {
    n = n / 10;
    a++;
  }
  return (a);
}

int multiplier(unsigned long long int a)
{
  if(a * a > 9)
    return (100);
  else
    return (10);
}

unsigned long long int ft_div(unsigned long long int a)
{
  unsigned long long int n;
  
  n = 1;
  while (a > 1)
  {
    n = n * 10;
    a--;
  }
  return (n);
}

unsigned long long square_digits (unsigned n)
{
  unsigned long long int result;
  unsigned long long int divi;
  unsigned long long int nb;
  
  divi = ft_div(ft_nlen(n));
  nb = (n / divi); 
  result = nb * nb; 
  if (n > 9)
  {
    while (divi > 1)
    {
      nb = n % divi;
      divi = divi / 10;
      nb = nb / divi;
      result = result * multiplier(nb) + (nb * nb);
    }
  }
  else if(n == 0)
    return (0);
  return (result);
}
