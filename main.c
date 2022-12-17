#include <stdio.h>


typedef unsigned char uint8_t;
#define array_size 5
uint8_t checksum(uint8_t *cal,uint8_t size)
{
    if(size == array_size)
    {
        return 0;
    }
     
    return (cal[size] ^ checksum(cal,size+1));
}
int main()
{
    uint8_t cal_checksum[array_size] = {0x24,0x01,0x08,0x01,0x40}; 

    printf("hello world:%d\n",checksum(cal_checksum,0));
    return 0;

}