#include iostream
#include random
#include stdlib.h
#include cmath

int main(){
  int i;
  float ang;
  
  srand48(42);
  float x; x=0;
  float y; y=0;

  for (i=0;i1000;i++){  
    stdcout  x   y  stdendl;
    ang = drand48()23.141592654;
    x += cos(ang);
    y += sin(ang);
    }
  
  return 0;
}
