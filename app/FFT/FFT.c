/*
 * FFT.c
 *
 *  Created on: 2023Äê5ÔÂ6ÈÕ
 *      Author: ad
 */

#include <FPU.h>

//============================FFT_DEFINE===========================================
#define RFFT_STAGES 9//N
#define RFFT_SIZE   512//signal_SIZE

#pragma DATA_SECTION(RFFTin1Buff,"FFTdata1");  //Buffer alignment for the input array,
float RFFTin1Buff[RFFT_SIZE];                 //RFFT_f32u(optional), RFFT_f32(required)
                                                //Output of FFT overwrites input if
                                                //RFFT_STAGES is ODD
#pragma DATA_SECTION(RFFToutBuff,"FFTdata2");
float RFFToutBuff[RFFT_SIZE];                 //Output of FFT here if RFFT_STAGES is EVEN

#pragma DATA_SECTION(RFFTmagBuff,"FFTdata3");
float RFFTmagBuff[RFFT_SIZE/2+1];             //Additional Buffer used in Magnitude calc

#pragma DATA_SECTION(RFFTF32Coef,"FFTdata4");
float RFFTF32Coef[RFFT_SIZE];                 //Twiddle buffer

#define M_PI 3.14159265358979323846
//============================FFT_DEFINE===========================================

int MAX;
double fre;
RFFT_F32_STRUCT rfft;


void FFT(double origin_signal[])
//void FFT()
{
    int i;
    for(i=0; i < RFFT_SIZE; i++)
    {
        RFFTin1Buff[i] = 0.0f;
    }

    for(i=0; i < RFFT_SIZE; i++)
    {
        //RFFTin1Buff[i] = sin(2*M_PI*(1.0/15.0)*i/10) ; //Real input signal
        RFFTin1Buff[i]=origin_signal[i];
    }
    rfft.FFTSize   = RFFT_SIZE;
    rfft.FFTStages = RFFT_STAGES;
    rfft.InBuf     = &RFFTin1Buff[0];  //Input buffer
    rfft.OutBuf    = &RFFToutBuff[0];  //Output buffer
    rfft.CosSinBuf = &RFFTF32Coef[0];  //Twiddle factor buffer
    rfft.MagBuf    = &RFFTmagBuff[0];  //Magnitude buffer

    RFFT_f32_sincostable(&rfft);       //Calculate twiddle factor

    for (i=0; i < RFFT_SIZE; i++)
    {
        RFFToutBuff[i] = 0;            //Clean up output buffer
    }

    for (i=0; i < RFFT_SIZE/2; i++)
    {
        RFFTmagBuff[i] = 0;            //Clean up magnitude buffer
    }

    RFFT_f32(&rfft);                   //Calculate real FFT

    RFFT_f32_mag(&rfft);                //Calculate magnitude

    MAX=nmax(RFFTmagBuff,RFFT_SIZE/2);

    fre=MAX*10.0/RFFT_SIZE;
    //UARTa_Send_Period(6);
    //return fre;
}


int nmax(double arr[], int n)
{

    int i = 0, MAX = 0, l = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > MAX)
        {
            MAX = arr[i];
            l = i;
        }
    }
    return l;
}


