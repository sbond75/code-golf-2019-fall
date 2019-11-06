#include <cstdio>
main(){for(int i=0;i<18;i++){[](auto o){for(int i=o;i<70+o;i++){if(i%4==0)printf("|");else printf("_");}puts("");}(i%2==0?-1:1);}}