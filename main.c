#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double x,y; //число с плавающей зап€той
printf("Enter x:");
scanf("%lf",&x); //скан введеных данных с клавиатуры
if (x>=0 && x<6){//ф-ци€ если
    y=(double)((x-1)/(x+1));
    }
else if (x>=5 && x<25){
    y=(double)(5*x+10);
    }
else if (x>=100 && x<125){
    y=(double)((x)/(sqrt(x+pow(x,2))));
    }
else{//если все другие варианты не верны, выполн€етьс€ последнее"
    y=-4;
    }

    printf("\n Y=%f",y);
    return 0; //ќбнуление прогаммы
}
