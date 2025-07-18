  int ft_fibonacci(int nb)                                   
   {
       if (nb < 0)
           return (-1);
        else if (nb < 2)
           return (nb);  

       return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
   }

   /*
   
  #include <stdio.h>
  
  int     main(void)
  {
      printf("%d", ft_fibonacci(-11));
  }
  */
  

