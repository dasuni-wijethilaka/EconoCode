#include <stdio.h>
int main()
{
	int TUV[5];
	int TUC[5];
	int i,j,X=0,PV,PC,UV,UC,amt;
	int MUV[5];
	int MUC[5];
	int num=1;	
	
	printf("enter the amount Anne has=");
	scanf ("%d",&amt);
	printf("enter the price of a vanilla ice cream=");
	scanf ("%d",&PV);
	printf("enter the price of a chocolate ice cream=");
	scanf ("%d",&PC);
	
	printf("\n\n");
	for (i=0;i<5;i++)
	{
		printf ("enter total utility for %d units of vanilla ice cream=",num);
		scanf("%d",&TUV[i]);
		num++;
	}
	
	printf("\n\n");
	num=1;
	for (i=0;i<5;i++)
	{
		printf ("enter total utility for %d units of chocolate ice cream=",num);
		scanf("%d",&TUC[i]);
		num++;
	}
	
	num=1;
	printf("\n\n");
	for (i=0;i<5;i++)
	{
		MUV[i]=TUV[i]-X;
		X=TUV[i];
		printf("marginal utility for %d unit of vanilla ice cream=%d\n",num,MUV[i]); 
		num++;
	}
	
	printf("\n\n");
	num=1;
	X=0;
	for (i=0;i<5;i++)
	{
		MUC[i]=TUC[i]-X;
		X=TUC[i];
		printf("marginal utility for %d units of chocolate ice cream=%d\n",num,MUC[i]); 
		num++;
	}
	
	printf("\n\n");
	num=1;
	int MVP[5];
	for (i=0;i<5;i++)
	{
		MVP[i]=MUV[i]/PV;
		printf("marginal utility / price of vanilla ice cream for %d units=%d\n",num,MVP[i]);
		num++;
	}
	
	printf("\n\n");
	num=1;
	int MVC[5];
	for (i=0;i<5;i++)
	{
		MVC[i]=MUC[i]/PC;
		printf("marginal utility / price of chocolate ice cream for %d units=%d\n",num,MVC[i]);
		num++;
	}

int y=0;	
while (y<1)
{
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (MVP[i]==MVC[j])
			{
				UV=i+1;
				UC=j+1;
			}
		}
	}
	if ((UV*PV)+(UC*PC)==amt)
	{
		y++;
	}
}
	
	printf ("\n(%d*%d)+(%d*%d)=%d",UV,PV,UC,PC,amt);
	printf("\nnumber of Vanilla ice creams=%d ",UV);
	printf("\nnumber of chocolate ice creams=%d",UC);
	
	return 0;
}
