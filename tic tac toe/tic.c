#include<stdio.h>
#include<stdlib.h>
char a[10]="123456789";
char e,c,z;
void winner();
void input()
{
	system("cls");
printf("\n\n    %c     |       %c     |      %c  \n",a[0],a[1],a[2]);
printf("  ________|_____________|____________\n ");
printf("    %c    |       %c     |      %c  \n",a[3],a[4],a[5]);
printf("  ________|_____________|____________\n ");
printf("    %c    |       %c     |      %c  \n",a[6],a[7],a[8]);
}
//input
void main()
{
	printf("PLAYER 1: Select your symbol\n X or 0 ");
	int b=getch();
	if(b=='\r')
	{
	main();
	}
	else if(b=='X'||b=='0'||b=='x')
	{
		e=b;
		if(b=='X'||b=='x')
		{
		c='0';
		}
		else
		{
		c='X';
		}
		system("cls");
		check();
    }
    else
	{
    main();
	}
}
//game start
int check()
{
	int i;
	input();
	printf("\n CHOOSE FROM AVAILABLE OPTION PLAYER 1: YOU SYMBOL %c \n ",e);
	for(i=0;i<9;i++)
	{
		if(a[i]!='X'&&a[i]!='0'&&a[i]!='x')
		{
		printf(" %c ,",a[i]);
	    }
	    else
	    continue;
	}
	printf("\n CHOOSE: ");
	int ca=getche()-'0';
	if(ca=='\r')
	{
	check();
	}
	else if(ca==1||ca==2||ca==3||ca==4||ca==5||ca==6||ca==7||ca==8||ca==9)
	{
	if(a[ca-1]!='X'&&a[ca-1]!='0'&&a[ca-1]!='x')
		{
			a[ca-1]=e;
			z=e;
			winner();
			play2();
		}
		else
		check();
	}
	else
	{
	check();
    }
}
//player2
int play2()
{

	int i;
	input();
	printf("\n CHOOSE FROM AVAILABLE OPTION PLAYER 2: YOU SYMBOL %c \n ",c);
	for(i=0;i<9;i++)
	{
		if(a[i]!='X'&&a[i]!='0'&&a[i]!='x')
		{
		printf(" %c ,",a[i]);
	}
	}
	printf("\n CHOOSE: ");
	int ca=getche()-'0';
	if(ca=='\r')
	{
	check();
	}
	else if(ca==1||ca==2||ca==3||ca==4||ca==5||ca==6||ca==7||ca==8||ca==9)
	{
		if(a[ca-1]!='X'&&a[ca-1]!='0'&&a[ca-1]!='x')
		{
			a[ca-1]= c;
			z=c;
			winner();
			check();
		}
		else
		play2();
    }
	else
	{
		system("cls");
	    check();
    }
}
//winner condition
void winner()
{
	int f;
	if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[0]=='x'&&a[1]=='x'&&a[2]=='x'||a[0]=='0'&&a[1]=='0'&&a[2]==0||a[0]=='X'&&a[3]=='X'&&a[6]=='X'||a[0]=='x'&&a[3]=='x'&&a[6]=='x'||a[0]=='0'&&a[3]=='0'&&a[6]=='0'||a[3]=='x'&&a[4]=='x'&&a[5]=='x'||a[3]=='X'&&a[4]=='X'&&a[5]=='X'||a[3]=='0'&&a[4]=='0'&&a[5]=='0'||a[6]=='X'&&a[7]=='X'&&a[8]=='X'||a[6]=='x'&&a[7]=='x'&&a[8]=='x'||a[6]=='0'&&a[7]=='0'&&a[8]=='0'||a[1]=='x'&&a[4]=='x'&&a[7]=='x'||a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[1]=='0'&&a[4]=='0'&&a[7]=='0'||a[2]=='x'&&a[5]=='x'&&a[8]=='x'||a[2]=='X'&&a[5]=='X'&&a[8]=='X'||a[2]=='0'&&a[5]=='0'&&a[8]=='0'||a[2]=='x'&&a[4]=='x'&&a[6]=='x'||a[2]=='X'&&a[4]=='X'&&a[6]=='X'||a[2]=='0'&&a[4]=='0'&&a[6]=='0'||a[0]=='x'&&a[4]=='x'&&a[8]=='x'||a[0]=='X'&&a[4]=='X'&&a[8]=='X'||a[0]=='0'&&a[4]=='0'&&a[8]=='0')
	{
		if(z==e)
		{
			input();
			printf("PLAYER 1 YOU ARE THE WINNER");
			scanf("%d",&f);
		}
		else
		{
			input();
			printf("PLAYER 2 YOU ARE THE WINNER");
			scanf("%d",&f);
		}
	}

}

