#include "unity.h"
#include "led.h"

void setUp(void) {}
void tearDown(void) {}

void test_led_should_be_off_by_default(void){
	TEST_ASSERT_EQUAL(0, get_current_led_state()); 
}

void test_led_can_be_turned_on(void){
	led_on();
	TEST_ASSERT_EQUAL(1, get_current_led_state());
}

void test_led_can_be_turned_off(void){
	led_on();
	led_off();
	TEST_ASSERT_EQUAL(0, get_current_led_state());
}
