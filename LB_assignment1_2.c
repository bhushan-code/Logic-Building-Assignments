
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : It is used to Print 5 times "Marvellous" on screen.
// Input          : -
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 19/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Print 5 times "Marvellous" on screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Display();

    return 0;
}