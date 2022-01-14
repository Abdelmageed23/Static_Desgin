#ifndef MOTOR_INTERFACE_H
#define MOTOR_INTERFACE_H

void MOTOR_Init(void);
sint8_t MOTOR_ON(uint8_t Motor_num);
sint8_t MOTOR_OFF(uint8_t Motor_num);
sint8_t MOTOR_SetSpeed(uint8_t Motor_num , uint8_t Motor_speed);


#endif