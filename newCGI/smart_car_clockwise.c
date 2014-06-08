#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
//#include "smart_car_move.h"
#include "move.h"
#define AXI_GPIO_BASEADDR 0x41200000
#define AXI_PWM_BASEADDR  0x43C00000

static int fd;

int main(void)
{
	//set_clockwise();
	/*int speed;
	Xil_Out32(AXI_GPIO_BASEADDR, 0x33);

	speed = 7000;
	int __static = 10;
	Xil_Out32(AXI_PWM_BASEADDR,      0x80000000 | speed);
	Xil_Out32(AXI_PWM_BASEADDR + 4,  0x80000000 | __static);

	Xil_Out32(AXI_PWM_BASEADDR + 8,  0x80000000 | __static);
	Xil_Out32(AXI_PWM_BASEADDR + 12, 0x80000000 | speed);*/
   	 return 0;
}
