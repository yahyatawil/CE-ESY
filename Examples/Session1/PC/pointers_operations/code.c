#include <stdint.h>
#include <stdio.h>

uint32_t var = 0xAABBCCDD ;
uint16_t *ptr = (uint16_t *)&var;

int main()
{
printf("%p:0x%x\r\n", ptr,*ptr);
ptr++; //ptr = ptr + 1;
printf("%p:0x%x\r\n", ptr,*ptr);
ptr--; //ptr = ptr - 1;
*ptr = 0xEEFF;
printf("%p:0x%x\r\n", ptr,*ptr);
printf("%p:0x%x\r\n", ptr+1,*(ptr+1)); 
(*ptr)++;
printf("%p:0x%x\r\n", ptr,*ptr);
return 0;
}