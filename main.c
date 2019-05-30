#include "inc/stm32l476xx.h"

void delay(int a);

void SystemInit() 
{
  RCC->CR |= RCC_CR_MSION;
  // Reset CFGR register 
  RCC->CFGR = 0x00000000U;
  // Reset HSEON, CSSON , HSION, and PLLON bits
  RCC->CR &= 0xEAF6FFFFU;
  // Reset PLLCFGR register 
  RCC->PLLCFGR = 0x00001000U;
  // Reset HSEBYP bit
  RCC->CR &= 0xFFFBFFFFU;
  // Disable all interrupts
  RCC->CIER = 0x00000000U;
  SCB->VTOR = FLASH_BASE; // Vector Table Relocation in Internal FLASH
}

int main(void) 
{

  while (1) {
  
  }
  return 0;
}

void _exit() {}
