/*
 * File:   delay.c
 * Author: 21193460
 *
 * Created on 4 de Março de 2022, 09:04
 */


#include <xc.h>
#include "delay.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms( 1 );
        --t;
    }
}