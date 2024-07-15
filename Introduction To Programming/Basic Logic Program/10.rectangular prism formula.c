//find the area of a rectangular prism formula: A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	int l,w,h;
	printf("enter l and w and h");
	scanf("%d %d %d",&l,&w,&h);
	int area;
	area=2*(w*l+h*l+h*w);
	printf("area of rectangular prism formula= %d",area);
	
	
}

