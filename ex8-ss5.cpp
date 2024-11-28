#include<stdio.h>  
int main(){
	int a,b,i,kiem_tra=0;
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	while( kiem_tra==0)
	{
	    i++;
	    if(i%a==0 && i%b==0){
	    	printf("Uoc chung lon nhat cua 2 so vua nhap la:%d",i);
	    	kiem_tra=1;
	    }
	}
	return 0;
}
	         
	
	
	


 
