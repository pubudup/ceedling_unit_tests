#include "led.h"

int led_state=0;

void led_on(void){
	led_state = 1;
}

void led_off(void){
	led_state = 0;
}

int get_current_led_state(void){
	return led_state;
}

