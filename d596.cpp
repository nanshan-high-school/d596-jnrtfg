#include <iostream>
/* 1 2 3
   4 5 6
   7 8 9
   1=2\4 2=1\5\3 3=2\6 4=1\5\7 5=2\4\6\8 6=3\5\9 7=4\8 8=5\7\9 9=6\8
*/
int main(int argc, char** argv) 
{
	int T,num1,num2,num3,pos[8],inpos[8],posn=0,inposn=0,haspt=0;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int posn=0,inposn=0,haspt=0;
		if(i>1)
		{
			printf("\n");
		}
		scanf("%d %d %d",&num1,&num2,&num3);
		switch(num1)
		{
			case 1:
				pos[posn]=2;
				posn++;
				pos[posn]=4;
				posn++;
				break;
			case 2:
				pos[posn]=1;
				posn++;
				pos[posn]=3;
				posn++;
				pos[posn]=5;
				posn++;
				break;
			case 3:
				pos[posn]=2;
				posn++;
				pos[posn]=6;
				posn++;
				break;
			case 4:
				pos[posn]=1;
				posn++;
				pos[posn]=5;
				posn++;
				pos[posn]=7;
				posn++;
				break;
			case 5:
				pos[posn]=2;
				posn++;
				pos[posn]=4;
				posn++;
				pos[posn]=6;
				posn++;
				pos[posn]=8;
				posn++;
				break;
			case 6:
				pos[posn]=3;
				posn++;
				pos[posn]=5;
				posn++;
				pos[posn]=9;
				posn++;
				break;
			case 7:
				pos[posn]=4;
				posn++;
				pos[posn]=8;
				posn++;
				break;
			case 8:
				pos[posn]=5;
				posn++;
				pos[posn]=7;
				posn++;
				pos[posn]=9;
				posn++;
				break;
			case 9:
				pos[posn]=6;
				posn++;
				pos[posn]=8;
				posn++;
				break;	
		}
		switch(num2)
		{
			case 1:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=4;
				inposn++;
				break;
			case 2:
				inpos[inposn]=1;
				inposn++;
				inpos[inposn]=3;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				break;
			case 3:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=6;
				inposn++;
				break;
			case 4:
				inpos[inposn]=1;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=7;
				inposn++;
				break;
			case 5:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=4;
				inposn++;
				inpos[inposn]=6;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
			case 6:
				inpos[inposn]=3;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=9;
				inposn++;
				break;
			case 7:
				inpos[inposn]=4;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
			case 8:
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=7;
				inposn++;
				inpos[inposn]=9;
				inposn++;
				break;
			case 9:
				inpos[inposn]=6;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
		}
		switch(num3)
		{
			case 1:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=4;
				inposn++;
				break;
			case 2:
				inpos[inposn]=1;
				inposn++;
				inpos[inposn]=3;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				break;
			case 3:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=6;
				inposn++;
				break;
			case 4:
				inpos[inposn]=1;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=7;
				inposn++;
				break;
			case 5:
				inpos[inposn]=2;
				inposn++;
				inpos[inposn]=4;
				inposn++;
				inpos[inposn]=6;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
			case 6:
				inpos[inposn]=3;
				inposn++;
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=9;
				inposn++;
				break;
			case 7:
				inpos[inposn]=4;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
			case 8:
				inpos[inposn]=5;
				inposn++;
				inpos[inposn]=7;
				inposn++;
				inpos[inposn]=9;
				inposn++;
				break;
			case 9:
				inpos[inposn]=6;
				inposn++;
				inpos[inposn]=8;
				inposn++;
				break;
		}
		for(int i=0;i<=posn-1;i++)
		{
			for(int j=0;j<=inposn-1;j++)
			{
				if(pos[i]==inpos[j])
				{
					pos[i]=0;
					inpos[j]=0;
				}
			}
		} 
		for(int i=0;i<=posn-1;i++)
		{
			for(int j=0;j<=inposn-1;j++)
			{
				if((pos[i]!=inpos[j])&&(pos[i]!=0))
				{
					printf("%d ",pos[i]);
					haspt++;
					pos[i]=0;
				}
			}
		}
		if(haspt==0)
		{
			printf("Empty");
		}
	}
	
	return 0;
}