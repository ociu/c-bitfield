# c-bitfield
A tiny, endianness-aware, bitfield manipulation library written in C

##The problem
C/C++ structs using bitfields are completely unportable when fields surpass the byte barrier
(the following article gives a very good description of the issue:
http://opensourceforu.efytimes.com/2015/03/be-cautious-while-using-bit-fields-for-programming/).

##The solution
Forget about structs and go to direct bit manipulation with bitwise operators.

This small piece of code offers a way to do it and keep the code clean and understandable,
specially for embedded/network software that must run on big and little endian architectures.
