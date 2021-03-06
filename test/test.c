#include<stdio.h>
#include<stdlib.h>

int getIP[16] = {0};

int getLen(int intergNum)
{
	int n=1;
	while(intergNum/10)
	{
		n++;
		intergNum /= 10;
	}
	return n;
}


int main()
{
	int i,IP1,IP2,IP3,IP4,len=0;
	
	
		printf("请输入IP：\n");
		scanf("%d %d %d %d",&IP1,&IP2,&IP3,&IP4);
		if(IP1 > 99 && IP1 < 255)
		{
			getIP[0] = IP1/100;
			getIP[1] = IP1%100/10;
			getIP[2] = IP1%10;
			getIP[3] = 0x2E;
			if(IP2 > 99 && IP2 < 255)
			{ 
				getIP[4] = IP2/100;
				getIP[5] = IP2%100/10;
				getIP[6] = IP2%10;
				getIP[7] = 0x2E;
				if(IP3 > 99 && IP3 < 255)
				{
					getIP[8] = IP3/100;
					getIP[9] = IP3%100/10;
					getIP[10] = IP3%10;
					getIP[11] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[12] = IP4/100;
						getIP[13] = IP4%100/10;
						getIP[14] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[12] = IP4/10;
						getIP[13] = IP4%10;
					}
					else
						getIP[12] = IP4;
							
				}
				else if(IP3 > 9 && IP3 < 100)
				{
					getIP[8] = IP3/10;
					getIP[9] = IP3%10;
					getIP[10] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[11] = IP4/100;
						getIP[12] = IP4%100/10;
						getIP[13] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[11] = IP4/10;
						getIP[12] = IP4%10;
					}
					else
						getIP[11] = IP4;
				}
				else if(IP3 >= 0 && IP3 < 10)
				{
					getIP[8] = IP3;
					getIP[9] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[10] = IP4/100;
						getIP[11] = IP4%100/10;
						getIP[12] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[10] = IP4/10;
						getIP[11] = IP4%10;
					}
					else
						getIP[10] = IP4;
				}					
			}
			else if(IP2 > 9 && IP2 < 100)
			{
				getIP[4] = IP2/10;
				getIP[5] = IP2%10;
				getIP[6] = 0x2E;
				if(IP3 > 99 && IP3 < 255)
				{
					getIP[7] = IP3/100;
					getIP[8] = IP3%100/10;
					getIP[9] = IP3%10;
					getIP[10] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[11] = IP4/100;
						getIP[12] = IP4%100/10;
						getIP[13] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[11] = IP4/10;
						getIP[12] = IP4%10;
					}
					else
						getIP[11] = IP4;
							
				}
				else if(IP3 > 9 && IP3 < 100)
				{
					getIP[7] = IP3/10;
					getIP[8] = IP3%10;
					getIP[9] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[10] = IP4/100;
						getIP[11] = IP4%100/10;
						getIP[12] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[10] = IP4/10;
						getIP[11] = IP4%10;
					}
					else
						getIP[10] = IP4;
				}
				else if(IP3 >= 0 && IP3 < 10)
				{
					getIP[7] = IP3;
					getIP[8] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[9] = IP4/100;
						getIP[10] = IP4%100/10;
						getIP[11] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[9] = IP4/10;
						getIP[10] = IP4%10;
					}
					else
						getIP[9] = IP4;
				}					
				
			}	
		}
		else if(IP1 > 9 && IP1 < 100)
		{
			getIP[0] = IP1/10;
			getIP[1] = IP1%10;
			getIP[2] = 0x2E;
			if(IP2 > 99 && IP2 < 255)
			{ 
				getIP[3] = IP2/100;
				getIP[4] = IP2%100/10;
				getIP[5] = IP2%10;
				getIP[6] = 0x2E;
				if(IP3 > 99 && IP3 < 255)
				{
					getIP[7] = IP3/100;
					getIP[8] = IP3%100/10;
					getIP[9] = IP3%10;
					getIP[10] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[11] = IP4/100;
						getIP[12] = IP4%100/10;
						getIP[13] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[11] = IP4/10;
						getIP[12] = IP4%10;
					}
					else
						getIP[11] = IP4;
							
				}
				else if(IP3 > 9 && IP3 < 100)
				{
					getIP[7] = IP3/10;
					getIP[8] = IP3%10;
					getIP[9] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[10] = IP4/100;
						getIP[11] = IP4%100/10;
						getIP[12] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[10] = IP4/10;
						getIP[11] = IP4%10;
					}
					else
						getIP[10] = IP4;
				}
				else if(IP3 >= 0 && IP3 < 10)
				{
					getIP[7] = IP3;
					getIP[8] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[9] = IP4/100;
						getIP[10] = IP4%100/10;
						getIP[11] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[9] = IP4/10;
						getIP[10] = IP4%10;
					}
					else
						getIP[9] = IP4;
				}					
			}
			else if(IP2 > 9 && IP2 < 100)
			{
				getIP[3] = IP2/10;
				getIP[4] = IP2%10;
				getIP[5] = 0x2E;
				if(IP3 > 99 && IP3 < 255)
				{
					getIP[6] = IP3/100;
					getIP[7] = IP3%100/10;
					getIP[8] = IP3%10;
					getIP[9] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[10] = IP4/100;
						getIP[11] = IP4%100/10;
						getIP[12] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[10] = IP4/10;
						getIP[11] = IP4%10;
					}
					else
						getIP[10] = IP4;
							
				}
				else if(IP3 > 9 && IP3 < 100)
				{
					getIP[6] = IP3/10;
					getIP[7] = IP3%10;
					getIP[8] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[9] = IP4/100;
						getIP[10] = IP4%100/10;
						getIP[11] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[9] = IP4/10;
						getIP[10] = IP4%10;
					}
					else
						getIP[9] = IP4;
				}
				else if(IP3 >= 0 && IP3 < 10)
				{
					getIP[6] = IP3;
					getIP[7] = 0x2E;
					if(IP4 > 99 && IP4 < 255)
					{
						getIP[8] = IP4/100;
						getIP[9] = IP4%100/10;
						getIP[10] = IP4%10;					
					}
					else if(IP4 > 9 && IP4 < 100)
					{
						getIP[8] = IP4/10;
						getIP[9] = IP4%10;
					}
					else
						getIP[8] = IP4;
				}					
				
			}

		}
		else
		{
			printf("IP1输入错误，请重新输入:\n");
			scanf("%d",&IP1);
		}
		 
}

