#include <stdio.h>


typedef unsigned char uint8_t;
#define array_size 3
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
    uint8_t cal_checksum[array_size] = {0x02,0x23,0x00}; 
    //// loop 
   // uint8_t checkSum = cal_checksum[0];
    // for(uint8_t i = 1 ; i < array_size ; i++)
    // {
    //     checkSum ^= cal_checksum[i];  
    // }
    ///recursive
    printf("hello world:0x%x\n",checksum(cal_checksum,0));
    //printf("checksum is : %d",checkSum);
    return 0;

}