/*
 * @Author: lwj
 * @Date: 2022-04-25 22:25:51
 * @Description:
 */
#include <iostream>
using namespace std;
#include "can.h"

int main()
{
	cout << "***************商品货架管理****************" << endl;

	int i, t, temp, x;
	stack s;
	Initstack(s, N);
	cout << "输入货架上的现有的商品信息：" << endl;
	cout << "注：从最里端开始（即日期较大），预设货架有五个商品可放空间，输入五组数据，每个商品日期以回车键结束输入" << endl;
	for (i = 0; i < N; i++)
	{ //输入5个日期
		cin >> x;
		Push(s, x);
	}
	cout << "***************商品录入完毕****************" << endl;

	cout << "请输入要取商品的数量:" << endl;
	cin >> x;
	while (x < 0 && x > N)
	{
		cout << "要求的商品数量不合理，请重新输入：" << endl;
		cin >> x;
	}
	for (i = 0; i < x; i++) //取x件商品
		cout << "取出的商品生产日期有:" << Pop(s) << endl;
	t = s.Maxsize - s.top - 1;
	cout << "现在货架还能放下" << t << "件商品" << endl;

	stack s1; //建立辅助栈
	Initstack(s1, N);
	cout << "请输入要放入货架的新商品日期：" << endl;
	for (i = 0; i < t; i++)
	{ //倒货操作
		cin >> x;
		while (Stackempty(s) != 1 && x > s.Slist[s.top])
		{
			temp = Pop(s);
			Push(s1, temp);
		}
		Push(s, x);
		while (Stackempty(s1) != 1)
		{
			temp = Pop(s1);
			Push(s, temp);
		}
	}
	cout << "***************商品上货完毕****************" << endl;
	cout << "从货架靠里端到外端的商品的日期为:" << endl;
	Traverstack(s); // 显示放入新商品后栈元素顺序
}
