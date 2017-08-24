/*
 * File Name: main.c
 *
 * Name: Lab1, PIC24 Oscillator configuration and GitHub with MPLABX IDE
 *
 * Description: This program toggles LED RA7 in a while loop
 *  
 * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author   Date                Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 * GP       August 24 2017      v1.0.0 Configured oscillator bits and 
 *                                     made LED RA7 blink
 */
#include "mcc_generated_files/mcc.h"

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    // Set RA7 to output and to high (logic 1)
    _TRISA7 = 0;
    _LATA7 = 1;
    
    // Endless loop
    while (1)
    {
        // Toggle LED at RA7
        _LATA7 = _LATA7 ^ 1;
    }
    
    return -1;
}
