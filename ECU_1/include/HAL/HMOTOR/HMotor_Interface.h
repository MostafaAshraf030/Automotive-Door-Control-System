#ifndef  _HMOTOR_INTERFACE_H_
#define  _HMOTOR_INTERFACE_H_ 

//MDMA_voidSetConfiguration

typedef enum 
{
	ClockWise = 0 ,
	AntiClockWise
	
}HMotor_Direction_t ;


void HMotor_vidStart (HMotor_Direction_t Copy_uddtMotorDirection) ;

void HMotor_vidStop (void) ;





#endif