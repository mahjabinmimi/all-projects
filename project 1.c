// digital clock project
#include <stdio.h>

#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000;//we use a delay of 1000 milisecond we will use it in function sleep..
    printf("Set time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
    printf("Error !\n");
    exit(0);
    }
    while(1)//infinite loop will continue untill user manually exit..
    {
        s++;
        if(s>59){
        m++;
        s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\n clock : \n");
        printf("\n %02d:%02d:%02d \n",h,m,s);//this writes the time in 00:00:00 format..
        Sleep(d);//the function sleep slow down the while loop & make it more like a real clock..
        system("cls");

    }
}
