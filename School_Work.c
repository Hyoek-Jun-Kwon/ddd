#include<stdio.h>
#include<conio.h> 
int main()
{
	int i,j,aa,temp,n;
	
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
	printf("입력:");
	scanf("%d",&a[i]);
    }
    
    
    printf("입력값: ");
    for(i=0;i<n;i++){
    	printf("%d ",a[i]);
	}
	
	
    printf("정렬중.......\n");
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
		
    	if(a[i]>a[j]){
    		temp = a[i];
    		a[i] = a[j];
    		a[j] = temp;
		}
	}
	}
	/*
	for(i=0;i<9;i++){
         if(a[i]>a[i+1]){
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
	*/
	printf("Sorted: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
AA:	printf("찾고 싶은 수:");
	scanf("%d",&aa);
		
	for(i=0;i<n;i++){
		if(aa==a[i]){
			printf("%d 번째에서 %d 를 찾음\n",i+1,aa);
			j=1;
			break;
		}
		
	}
	
	
	if(j!=1){
		printf("못 찾음\n");
	}
	
	printf("다시 하시겠습니까?(y/n)\n");
	j=getche();
	if(j=='y') goto AA;
	
	else{ printf("끝");
	}
	
}
