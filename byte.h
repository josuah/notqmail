#ifndef BYTE_H
#define BYTE_H

extern unsigned int byte_chr();
extern unsigned int byte_rchr();
extern void byte_copy();
extern void byte_copyr();
extern void byte_zero();

#define byte_equal(s,n,t) (memcmp(s,t,n) == 0)

#endif
