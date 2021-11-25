#include <stdio.h>

typedef struct {
int num;
int denom;
} FRACTION;
//declarations
void addFraction (FRACTION,FRACTION);
void subtractFraction (FRACTION,FRACTION);
void multiplyFraction (FRACTION,FRACTION);
void divideFraction (FRACTION,FRACTION);
void displayFraction (FRACTION, FRACTION);

int main () {
  FRACTION a, b;
  char answer;

  printf("Press y to start\n");
  scanf("%c", &answer);

 while (answer == 'y') { 
  printf("\nPlease enter the numerator and denominator of the first fraction or 0,0 to end the program:\n");
  scanf("%d,%d", &a.num, &a.denom);

    
    if(a.denom == 0) {
    printf("\nDenominator can not be 0.\n");
    return(1);
    }
    else
    printf("\nPlease enter the numerator and denominator of the second fraction:\n");
    scanf("%d,%d", &b.num,&b.denom);
    

    if(b.denom ==0)  {
    printf("\nDenominator can not be 0.\n");
    return (1);
    }
    else
    displayFraction(a,b);

   }
} //end of main


//statements
//addition function
void addFraction( FRACTION a, FRACTION b)
{
    FRACTION c;
    c.num = a.num*b.denom + a.denom*b.num;
    c.denom = a.denom*b.denom;
    printf("\n%d/%d\n", c.num,c.denom);
}
//subtraction function
void subtractFraction(FRACTION a, FRACTION b)
{
    FRACTION c;
    c.num = a.num*b.denom - a.denom*b.num;
    c.denom = a.denom*b.denom;
    printf("\n%d/%d\n", c.num, c.denom);
}
//multiplication function
void multiplyFraction(FRACTION a, FRACTION b)
{
    FRACTION c;
    c.num = a.num*b.num;
    c.denom = a.denom*b.denom;
    printf("\n%d/%d\n", c.num,c.denom);
}
//division function
void divideFraction(FRACTION a, FRACTION b)
{
    FRACTION c;
    c.num = a.num*b.denom;
    c.denom = a.denom*b.num;
    printf("\n%d/%d\n", c.num,c.denom);
}
//display function
void displayFraction (FRACTION a, FRACTION b) {
    printf("\nAddition of the fractions are:\n");
    addFraction(a,b);

    printf("\nSubtraction of fractions are:\n");
    subtractFraction(a,b);

    printf("\nMultiplication of the fractions are:\n");
    multiplyFraction(a,b);

    printf("\nDivision of the fractions are:\n");
    divideFraction(a,b);
    return;
}