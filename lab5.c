#include "lab5.h"

int readPosNum()
{
  int theNum;
  do
  {
  printf("Please enter a number: \n");
  scanf("%d\n", &theNum);
  }while( theNum <= 0);
  return theNum;
}

int menu(int choice)
{
  do
  {printf("1) Enter a new number\n");
  printf("2) Print the number of odd digits, even digits and zeros\n");
  printf("3) Print the prime numbers between 2 and the integer\n");
  printf("4) Print the number in reverse order\n");
  printf("Quit\n");
  scanf("%d\n", &choice);
  }while( choice < 1 || choice > 4);
  
}

void oddEvenZero(int theNum)
{
   int odd, zero, even; 
   int copy = theNum;
   while(copy > 0)
   {
    if (theNum % 10 == 0)
       zero++;
    else if((copy % 10) %2==0)
      even++; 
    else
      odd++; 
  

   }
   printf("The number of even, odds zero in %d are %d-odd, %d-even, %d-zero\n", theNum, odd, even, zero);
}

void printReverse(int theNum)
{
  int reverse = 0, revcopy;
  printf("The reverse order of the integer is");
  while(theNum != 0) 
  {
    revcopy = theNum % 10;

    printf("%d", revcopy);
    theNum = theNum/10;

  }
 
  
}

