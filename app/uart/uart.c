/*
 * uart.c
 *
 *  Created on: 2018-1-31
 *      Author: Administrator
 */

#include "uart.h"
#include "stdio.h"
#include "stdlib.h"

char *msg;

void UARTa_Init(Uint32 baud)
{
	unsigned char scihbaud=0;
	unsigned char scilbaud=0;
	Uint16 scibaud=0;

	scibaud=37500000/(8*baud)-1;
	scihbaud=scibaud>>8;
	scilbaud=scibaud&0xff;


	EALLOW;
	SysCtrlRegs.PCLKCR0.bit.SCIAENCLK = 1;   // SCI-A
	EDIS;

	InitSciaGpio();

	//Initalize the SCI FIFO
	SciaRegs.SCIFFTX.all=0xE040;
	SciaRegs.SCIFFRX.all=0x204f;
	SciaRegs.SCIFFCT.all=0x0;

	// Note: Clocks were turned on to the SCIA peripheral
	// in the InitSysCtrl() function
	SciaRegs.SCICCR.all =0x0007;   // 1 stop bit,  No loopback
								   // No parity,8 char bits,
								   // async mode, idle-line protocol
	SciaRegs.SCICTL1.all =0x0003;  // enable TX, RX, internal SCICLK,
								   // Disable RX ERR, SLEEP, TXWAKE
	SciaRegs.SCICTL2.all =0x0003;
	SciaRegs.SCICTL2.bit.TXINTENA =1;
	SciaRegs.SCICTL2.bit.RXBKINTENA =1;
	SciaRegs.SCIHBAUD    =scihbaud;  // 9600 baud @LSPCLK = 37.5MHz.
	SciaRegs.SCILBAUD    =scilbaud;
//	SciaRegs.SCICCR.bit.LOOPBKENA =1; // Enable loop back
	SciaRegs.SCICTL1.all =0x0023;     // Relinquish SCI from Reset

}


// Transmit a character from the SCI'
void UARTa_SendByte(int a)
{
	while (SciaRegs.SCIFFTX.bit.TXFFST != 0);
	SciaRegs.SCITXBUF=a;
}



void UARTa_SendString(char * msg)
{
	int i=0;

	while(msg[i] != '\0')
	{
		UARTa_SendByte(msg[i]);
		i++;
	}
}

int absolute_value(int x)
{
    if (x < 0)
    {
        return -x;
    }
    else if (x > 0)
    {
        return x;
    }
}//¾ø¶ÔÖµ

int change_to_HEX(int dec)
{
    int hex=0x30;
    switch(dec)
    {
    case 0:
        hex += 0x00;
        break;
    case 1:
        hex += 0x01;
        break;
    case 2:
        hex += 0x02;
        break;
    case 3:
        hex += 0x03;
        break;
    case 4:
        hex += 0x04;
        break;
    case 5:
        hex += 0x05;
        break;
    case 6:
        hex += 0x06;
        break;
    case 7:
        hex += 0x07;
        break;
    case 8:
        hex += 0x08;
        break;
    case 9:
        hex += 0x09;
        break;
    }
    return hex;
}

void change_doubleFFT(double num)
{
    int num_temp;
    num = num*1000;
    int cosine = num;
    cosine = (int) num;
    cosine=absolute_value(cosine);
    int cosine_list[3];
    cosine_list[0]=find_hun(cosine);
    cosine_list[1]=find_dec(cosine);
    cosine_list[2]=find_byte(cosine);
    int i=0;
    for (i; i<3; i++)
    {
        num_temp=cosine_list[i];
        num_temp=change_to_HEX(num_temp);
        UARTa_SendByte(num_temp);
    }
}

void change_double(double num)
{
    if(num==-1.0||num==1.0)
        {

            UARTa_SendByte(change_to_HEX(1));
            msg=".";
            UARTa_SendString(msg);
            int i=0;
            for (i; i<3; i++)
            {
                UARTa_SendByte(change_to_HEX(0));
            }

        }



        else
        {
            msg="0.";
            UARTa_SendString(msg);
            int num_temp;
            num = num*1000;
            int cosine = num;
            cosine = (int) num;
            cosine=absolute_value(cosine);
            int cosine_list[3];
            cosine_list[0]=find_hun(cosine);
            cosine_list[1]=find_dec(cosine);
            cosine_list[2]=find_byte(cosine);
            int i=0;
            for (i; i<3; i++)
            {
                num_temp=cosine_list[i];
                num_temp=change_to_HEX(num_temp);
                UARTa_SendByte(num_temp);
            }
        }
}


void UARTa_SendCosine_Value(double num)
{

    msg="your value of cosine is : ";
    UARTa_SendString(msg);
    if (num<0)
    {
        msg="-";
        UARTa_SendString(msg);
    }
    change_double(num);
    msg="\n";
    UARTa_SendString(msg);

}


void UARTa_SendFFT_Value(double num)
{
    msg="The measure frequence is : ";
    UARTa_SendString(msg);
    if (num<0)
    {
        msg="-";
        UARTa_SendString(msg);
    }
    change_double(num);

    msg="\n";
    UARTa_SendString(msg);

}

void UARTa_SendTime_Value(double num)
{
    msg="Time_used is : ";
    UARTa_SendString(msg);
    if (num<0)
    {
        msg="-";
        UARTa_SendString(msg);
    }
    change_double(num);

    msg="\n";
    UARTa_SendString(msg);

}




void UARTa_Send_Period(int num)
{
    msg="period : ";
    UARTa_SendString(msg);
    if (num<10)
    {
        UARTa_SendByte(change_to_HEX(num));
    }
    else
    {
        int T_list[2];
        T_list[0]=find_dec_dec(num);
        T_list[1]=find_byte(num);
        int i;
        int num_T;
        for(i=0;i<2;i++)
        {
            num_T=T_list[i];
            num_T=change_to_HEX(num_T);
            UARTa_SendByte(num_T);
        }
    }
    msg="  ";
    UARTa_SendString(msg);
}

void UARTa_Send_FFTPeriod(double num)
{

    int int_num;
    msg="FFT measured period : ";
    UARTa_SendString(msg);
    int_num=num;
    if (num<10)
    {
        UARTa_SendByte(change_to_HEX(int_num));
        msg=".";
        UARTa_SendString(msg);
        num=num-int_num;
        change_doubleFFT(num);
    }
    else
    {
        int T_list[2];
        T_list[0]=find_dec_dec(int_num);
        T_list[1]=find_byte(int_num);
        int i;
        int num_T;
        for(i=0;i<2;i++)
        {
            num_T=T_list[i];
            num_T=change_to_HEX(num_T);
            UARTa_SendByte(num_T);
        }
        msg=".";
        UARTa_SendString(msg);
        num=num-int_num;
        change_doubleFFT(num);
    }
    msg="  ";
    UARTa_SendString(msg);
}




int find_hun(int num)
{
    int hun;
    hun = (num - (num % 100)) / 100;
    return hun;
}

int find_dec(int num)
{
    int dec;
    dec = (num - find_hun(num)*100 - (num % 10)) / 10;
    return dec;
}

int find_dec_dec(int num)
{
    int dec;
    dec = (num - (num % 10)) / 10;
    return dec;
}


int find_byte(int num)
{
    int byte;
    byte = num % 10;
    return byte;
}
