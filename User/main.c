/*
 * main.c
 *
 *  Created on: 2018-3-21
 *      Author: Administrator
 */

#include "stdio.h"
#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File
#include "leds.h"
#include "key.h"
#include "math.h"
#include "ti_me.h"
#include "uart.h"
#include <stdlib.h>
#include <FPU.h>
#include "DSP2833x_CpuTimers.h"

#define D2 C[0]
#define D3 C[1]
#define D4 C[2]
#define D5 C[3]
#define M_PI 3.14159265358979323846

int C[4]={0,};
int T=1;
//int T_temp;
int count=0;
double phi=0;
double theta;
double cosine;
double omiga=2*M_PI;
char key=0;
int symbol=0;
Uint16 ReceivedChar=0;

double temp[512]={0,};
double FRE=0.0;
int flag=0;




/*******************************************************************************
* 函 数 名         : delay
* 函数功能         : 延时函数，通过循环占用CPU，达到延时功能
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/






void delay(void)
{
    Uint16      i;
    Uint32      j;
    for(i=0;i<100;i++)
        for (j = 0; j < 10000; j++);
}

int modify(int byte)
{
    if(byte==1)
        {byte=0;}
    else
        {byte=1;}
    return byte;
}

int calculate_C(int D_2,int D_3,int D_4,int D_5)
{
    int Cir;
    Cir = D_5 + 2*D_4 + 2*2*D_3 + 2*2*2*D_2 ;
    return Cir;
}


int get_key()
{

    key=KEY_Scan(0);

    switch(key)
    {
        case KEY2_PRESS:
            LED4_TOGGLE;
            D4=modify(D4);
            break;
        case KEY3_PRESS:
            LED5_TOGGLE;
            D5=modify(D5);
            break;
        case KEY4_PRESS:
            LED2_TOGGLE;
            D2=modify(D2);
            break;
        case KEY5_PRESS:
            LED3_TOGGLE;
            D3=modify(D3);
            break;
    }
    return calculate_C(D2,D3,D4,D5);
}

void get_UART()
{
    ReceivedChar = SciaRegs.SCIRXBUF.all;
}

void isSend(double send_num)
{
    if(ReceivedChar==0x74)//判断是否是't'字符
    {
        symbol=1;
    }
    else if(ReceivedChar==0x54)//判断是否是'T'字符
    {
        symbol=2;
    }
    else
    {
        symbol=0;
    }
}


interrupt void TIM0_IRQn(void)
{
    EALLOW;
    LED7_TOGGLE;
    phi ++;
    count ++;
    if(phi>512)
        phi=0;
    omiga = 2 * M_PI / T;
    cosine = sin(omiga * phi/10);
    temp[flag]=cosine;
    flag++;

    if(flag>512)
    {
        flag=0;
    }
    if(symbol==1)
    {
        if (count>=10)
        {
            theta ++;
            if(theta>512)
                theta=0;
            UARTa_Send_Period(T);
            UARTa_SendCosine_Value(sin(omiga * theta/10));
            count=0;
        }
        count++;
    }
    else if(symbol==2)
    {
        //double clock1,clock2;
        //clock1=clock();
        //FFT(temp);
        UARTa_SendFFT_Value(FFT(temp));
        //clock2=clock();
        //UARTa_SendFFT_Value(clock1-clock2);
        symbol=0;
    }
    else
    {

    }


    PieCtrlRegs.PIEACK.bit.ACK1=1;
    EDIS;
}


/*******************************************************************************
* 函 数 名         : main
* 函数功能         : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/


extern void FFT();
void main()
{

    D2=0;
    D3=0;
    D4=0;
    D5=0;

    InitSysCtrl();

    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    LED_Init();
    KEY_Init();
    TIM0_Init(150,10000);
    UARTa_Init(115200);
    while(1)
    {

        T = get_key();

        get_UART();
        isSend(cosine);
    }
}



