static __inline__ unsigned long long rdtsc(void)
{
  unsigned long long x;
  __asm__ __volatile__ ("rdtsc" : "=A"(x));
  return x;
}