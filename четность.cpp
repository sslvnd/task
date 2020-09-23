// КТбо1-4, Селевцова Надежда
//Ввести число в клавиатуры. Проверить на четность. Вывести «четно» (even), если четно, «нечетно» (uneven) - если нечетно.

#include <stdio.h>

int main()
{
    int a;
 
    scanf_s("%d", &a);
    if (a % 2 == 0) { printf("Even"); }
    else { printf("Uneven"); };
    return 0;
    
}


