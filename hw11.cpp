#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,z;
	printf("��J�T�Ӽ�: ");
	scanf("%d%d%d",&x,&y,&z);
	int max,mid,min;
	if(x>y&&y>z&&x>z){
	max=x,mid=y,min=z;
	}
	if(y>x&&x>z&&y>z){
	max=y,mid=x,min=z;
    }
    if(z>x&&x>y&&z>y){
    max=z,mid=x,min=y;
	}
	if(z>y&&y>x&&z>x){
	max=z,mid=y,min,x;
	}
	if(x>z&&z>y&&x>z){
	max=x,mid=z,min=y;
	}
	if(y>z&&z>x&&y>x){
	max=y,mid=z,min=x;
	}
	
	
	printf("%d>%d>%d",max,mid,min);
	
 } 
