//                  题目：   筷子 
//做完饭后，从消毒柜里取出筷子准备吃饭是一件十分有趣的事情消毒柜中有 n 种不同的筷子
//这些筷子的种类从 1 开始标号。第 i 种筷子有 ai只。两只筷子能组成一对筷子当且仅当这两只筷子属于同一个种类。
//每一只筷子最多属于一对你的家里一共有 m 个人。于是，你需要组 m 双筷子你想知道最小的整数 k ，使得无论怎么取 k 只筷子，
//一定能组成至少 m 双。如果无解，输出-1。
//Input
//第一行一个整数 T(1≤T≤10^6)，表示数组组数对于每组数据:
//第一行两个整数n,m(1sns10^6,1<ms10^[15》)，需要取出的筷子对表示筷子的种类数，数: 第二行 n 个整数 a1,a2,a3,..,an(1<ais10^9) ，
//表示每种筷子的只数保证所有数据中 n 的和不会超过 1sns106Output
//对于每组数据，输出一个整数 k ，表示最小的整数，使得无论如何都能组成至少 m 双筷子如果无解，输出 -1。

#include <stdio.h>
typedef long long LL;
LL t,n,m;
int main()
{
	LL i=0;
	LL j=0;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld %ld",&n,&m); 
		//dui取出筷子的对数，zhi取出筷子的支数，sheng剩下的备用筷子的数量 
		LL dui=0,zhi=0,sheng=0; 
		//取出每种筷子的小于等于该种筷子数量的最大 奇数个
		for(j=0;j<n;j++)
		{
			LL t;
			scanf("%ld",&t);
			//如果是奇数个就全取
			if(t%2)
			{
				zhi+=t;
				dui+=t/2;	
			}
			//偶数个取小于等于该偶数的最大奇数个
			else
			{
				zhi+=(t-1);
				dui+=(t-1)/2;
				sheng+=1; // 剩下的那一个备用 
			 } 
		} 
		//取多了，减少几对 
		if(dui>=m)
		{
			zhi-=(dui-m)*2;	
		} 
		//取的刚好，由于全是奇数个，其中一种筷子减少一个也可以
		else if(dui==m)
		zhi-=1;
		//取的还不够，从剩下的里面去凑
		else
		{
			if(sheng>=m-dui)
			zhi+=(m-dui);//剩下的足够
			else
			zhi=-1;//剩下的凑不齐m对了 
		 } 
		 printf("%ld\n",zhi); 
	}
	return 0;
}
