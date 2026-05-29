#include<stdio.h>
void main(){
int n;
int a[10];
scanf("%d",&n);
for(int i=0; i<n;i++){
	scanf("%d",&a[i]);
}
int pos=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				pos=pos+1;
			}
			if(pos==2){
				break;
					  }
		}
		if(pos==2){
			printf("true\n");
		break;
		}
		else{
			pos=0;
		}
		
		}
		if(pos==0){
			printf("false\n");
		}}
	
