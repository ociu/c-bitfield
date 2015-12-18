#include <stdio.h>
#include "bitfield.h"

main()
{
  uint16_t word = 0;
  field v1 = {15,15}, v2 = {14,13}, v3 = {12,10}, v4 = {9,6}, v5 = {5,1};

  uint16_set(&word, v1, 1);
  uint16_set(&word, v2, 2);
  uint16_set(&word, v3, 3);
  uint16_set(&word, v4, 4);
  uint16_set(&word, v5, 5);
  
  printf("Word: %x\n", word);
  printf("v1: %d\n", uint16_get(&word, v1));
  printf("v2: %d\n", uint16_get(&word, v2));
  printf("v3: %d\n", uint16_get(&word, v3));
  printf("v4: %d\n", uint16_get(&word, v4));
  printf("v5: %d\n", uint16_get(&word, v5));
}
