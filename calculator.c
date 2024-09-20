int main (void)
{
  int x;
  int y;
  char z;
  while (1)
    {
      printf("Enter your calculation: \n");
      scanf("%d %c %d", &x, &z, &y);
      if (z == '+')
      {
        printf("> %d + %d = %d\n", x, y, x + y);
      }
      else if (z == '-')
      {
        printf("> %d - %d = %d\n", x, y, x - y);
      }
      else if (z == '/')
      {
        printf("> %d / %d = %d\n", x, y, x / y);
      }
      else if (z == '*')
      {
        printf("> %d * %d = %d\n", x, y, x * y); 
      }
      else if (z == '&')
      {
        printf("> %d & %d = %d\n", x, y, x & y);
      }
      else if (z == '%')
      {
        printf("> %d %% %d = %d\n", x, y, x % y);
      }
      else
      {
        printf("Invalid Calculation! \"%d e %d\"\n", x, y);
        break;
      }
    }
}
