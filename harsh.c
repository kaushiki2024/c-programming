#include <stdio.h>

int main(void) {
 int t,x,y;
 scanf("%d",&t);
 while(t--){
     scanf("%d%d",&x,&y);
     int r=100*x;
     int w=10*y;
       if(r<w){
	        printf("disposble \n");
	    }
	     else {
	       printf("cloth \n");
	    }
	    
 }
 
	return 0;
}

