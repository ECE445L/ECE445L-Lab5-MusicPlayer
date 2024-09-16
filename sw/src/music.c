// File **********music.c***********
// Solution to Lab5 (not to be shown to students)
// Programs to play pre-programmed music and respond to switch
// inputs. TM4C123
// EE445L Fall 2015
//    Jonathan W. Valvano 9/22/15

// the 64 comes from the length of the sine wave table
// Bus cycle runs at 80MHz
// freq =80,000,000/64/Period = 1,250,000/Period

#include <stdint.h>
#include "../inc/tm4c123gh6pm.h"
#include "../inc/SysTickInts.h"
#include "Switch.h"
#include "../inc/TLV5616.h"
#include "music.h"
#include "mailbox.h"
    // write this
    

//-------------- Song_Init ----------------
// activate periodic interrupts and DAC
// Inputs: none
// Outputs: none
// called once
void Song_Init(void){

  
}

