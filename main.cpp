/*
    *Autor: Hugo Campos
    *Objetivo: Objetivo desse programa é utilizar o PWMout
    *Data: 09/03/2021
    *Status: Funcionando
    *Titulo dado pelo Livro: Sets PWM source to fixed frequency and duty cycle. Observe output on
                             oscilloscope.
*/

#include "mbed.h"

PwmOut   PWM1 (D3);


int main()
{
        PWM1.period(0.010);
        PWM1=0.5;
}
