#include "stm32f10x.h"
#include "TestLED.h"

int main(){
	TestLED_Init();
	while(1){
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	}
}
