main()
{
	int k,s,t,m,p,q;
	scanf("%i,%i",&p,&q);
	for(k=p;k<=q;k++)
	for(s=p;s<=q;s++)
	for(t=p;t<=q;t++)
	for(m=p;m<=q;m++)
	{
		if(k%4==0)
		if(s%4==1)
		if(t%4==2)
		if(m%4==3)
		printf("%i,%i \n",k,t);
		printf("%i,%i \n",s,m);
	}
}
		
	

