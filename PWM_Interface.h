#ifndef PWM_INTERFACE_H
#define PWM_INTERFACE_H


void PWM_Init(void);   
void PWM_start(void);  
sint8_t PWM_SetDutyCycle(uint8_t DutyCycle);

#endif