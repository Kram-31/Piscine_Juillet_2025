int main(void)
{
  int nombreEntre = 0;

    while (nombreEntre != 47)
    {
    printf("Tapez le nombre 47 ! ");
    scanf("%d", &nombreEntre);
    if (nombreEntre != 47)
    {
      printf("Ce n'est pas le bon nombre ! Essayez encore.\n");
    }
    else
    {
      printf("Bravo, vous avez tapé le bon nombre !\n");
    }
       
  return 0;
    }
}
