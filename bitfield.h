/*----------------------------------------------------------------------
bitfield.h: a simple, endianness-aware, C bitfield manipulation library
----------------------------------------------------------------------*/
#ifndef BITFIELD_H
#define BITFIELD_H

#include <stdint.h>

typedef struct
{
  unsigned char msb;
  unsigned char lsb;
} field;

/* 16 bit word operations */
inline void
uint16_set(uint16_t* const word_ptr, const field range, const uint16_t value)
{
  /* Set target range to 0 with mask. Then insert value*/
  *word_ptr &= ~(uint16_t)(~0 << ((15 - range.msb) + range.lsb))
                              >> (15 - range.msb);
  *word_ptr |= (uint16_t)(value << ((15 - range.msb) + range.lsb))
                      >> (15 - range.msb);
}

inline uint16_t
uint16_get(const uint16_t* word_ptr, const field range)
{
  return (uint16_t)(*word_ptr << (15 - range.msb))
                              >> ((15 - range.msb) + range.lsb);
}

/* 32/64/128 bit word operations: TO DO with macros...*/



#endif
