int persistence(int n) 
{
  int a;
  int nb;
  int count;
  
  count = 0;
  while (n > 9)
  {
    a = 1;
    while (n > 0)
    {   
      nb = n % 10;
      a = a * nb;
      n = n / 10;
    }
    n = a; 
    count++;
  }
  
  return (count);
}