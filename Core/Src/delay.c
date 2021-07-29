//
// Created by yekai on 2021/7/29.
//

#include "delay.h"
#include "driverlib/sysctl.h"

void delay_us(uint32_t us) {
    SysCtlDelay(us * (SysCtlClockGet() / 3000000));
}

void delay_ms(uint32_t ms) {
    SysCtlDelay(ms * (SysCtlClockGet() / 3000));
}
