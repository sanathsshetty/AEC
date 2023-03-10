#include <stdio.h>

int main(void) {
	int t,x,y,z,sum,d,ld;
	scanf("%d",&t);
	while(t!=0){
	    scanf("%d%d%d",&x,&y,&z);
	    if(x<=3){
	        sum=x*y;
	    }else{
	        ld=x%3;
	        d=x/3;
	        if(ld!=0){
	            sum=(ld*y)+(d*3*y)+(d*z);
	        }else{
	            sum=(d*3*y)+((d-1)*z);
	        }
	    }
	     printf("%d\n",sum);
	     t--;
	}
	return 0;
}