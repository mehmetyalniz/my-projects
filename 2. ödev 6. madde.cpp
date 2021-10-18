
#include <stdio.h>
#include <conio.h>
   
int main()
{
    double a, b, c;
    
    printf("1. sayiyi gir: ");
    
	 scanf("%d",&a);
	 
    printf("2. sayiyi gir: ");
    
	 scanf("%d",&b);
	 
    printf("3. sayiyi gir: "); 
    
	scanf("%d",&c);
	
    if ((a>b) && (a>c)) printf("En buyuk sayi: %d", a);
    
    else if (b>c) printf("En buyuk sayi: %d", b);
    
    else printf("En buyuk sayi: %d", c);
    
    
    getch();
}
