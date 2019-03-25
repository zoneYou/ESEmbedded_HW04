#include <stdint.h>
#include "blink.h"
#include "reg.h"

int main(void)
{

	//blink_count((LED_GREEN),10);
	//blink_count((LED_ORANGE),10);
	//blink_count((LED_RED),10);
	SET_BIT(RCC_BASE + RCC_AHB1ENR_OFFSET, GPIO_EN_BIT(GPIO_PORTA));
        CLEAR_BIT(GPIO_BASE(GPIO_PORTA) + GPIOx_MODER_OFFSET, MODERy_1_BIT(0));
        CLEAR_BIT(GPIO_BASE(GPIO_PORTA) + GPIOx_MODER_OFFSET, MODERy_0_BIT(0));
        while(1)
        {
        if(READ_BIT(GPIO_BASE(GPIO_PORTA) + GPIOx_IDR_OFFSET,0))
	{blink(LED_BLUE);}
	}

}
