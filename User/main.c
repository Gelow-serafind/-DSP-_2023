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
#include "DSP2833x_CpuTimers.h"

#define D2 C[0]
#define D3 C[1]
#define D4 C[2]
#define D5 C[3]
#define M_PI 3.14159265358979323846

int C[4]={0,};
int T=1;
double phi=0;
double cosine;
double omiga=2*M_PI;
char key=0;
int symbol=0;
Uint16 ReceivedChar=0;

/*******************************************************************************
* 函 数 名         : delay
* 函数功能         : 延时函数，通过循环占用CPU，达到延时功能
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/


interrupt void TIM0_IRQn(void)
{
    EALLOW;
    LED1_TOGGLE;
    phi += 0.1;
    if(phi>2*M_PI)
        phi=0;
    omiga = 2 * M_PI / T;
    cosine = cos(omiga * phi);
    if(symbol==1)
    {
        UARTa_Send_Period(T);
        UARTa_SendCosine_Value(cosine);
    }
    else
    {}


    PieCtrlRegs.PIEACK.bit.ACK1=1;
    EDIS;
}


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
    else if(ReceivedChar==0x54)
    {

    }
    else
    {
        symbol=0;
    }
}


/*******************************************************************************
* 函 数 名         : main
* 函数功能         : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/
void main()
{

    D2=0;
    D3=0;
    D4=0;
    D5=0;
    char *msg;


    InitSysCtrl();

    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    LED_Init();
    KEY_Init();
    TIM0_Init(150,100000);
    UARTa_Init(115200);

    while(1)
    {

        T = get_key();

        get_UART();
        isSend(cosine);

        //DELAY_US(1000000);

    }


//    while(1)
//    {
//
//        ReceivedChar = SciaRegs.SCIRXBUF.all;
//        msg = "  You sent: ";
//        if(ReceivedChar==0x74)//判断是否是't'字符
//            UARTa_SendByte(ReceivedChar);
//
//        UARTa_SendCosine_Value(0.123867);
//        DELAY_US(100000);
//    }
}



