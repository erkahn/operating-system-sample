/*
* Keros OS Project ( Kerim Operating System )
* This code was written by Kerim BASOL
* I am an embedded system programmer who is working on Microprocessor development
* http://twitter.com/kerimbasol
* Mail : kerim@bayner.com
* Mobile : +90555221 30 39
* URL : http://www.bayner.com
*/
unsigned char in(unsigned short _port)
{
  // "=a" (result) means: put AL register in variable result when finished
  // "d" (_port) means: load EDX with _port
  unsigned char result;
  __asm__  ("in %%dx, %%al" : "=a" (result) : "d" (_port));
  return result;
}

void out(unsigned short _port, unsigned char _data)
{
  // "a" (_data) means: load EAX with _data
  // "d" (_port) means: load EDX with _port
  __asm__ ("out %%al, %%dx" : :"a" (_data), "d" (_port));
}
