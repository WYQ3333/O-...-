//时间复杂度
//程序 = 算法 + 数据结构
//数据结构：数据与数据之间的关系
//逻辑——抽象
//关系
//线性
//树形
//图形——网状
//物理：数据在内存中的存储形式
//顺序结构
//链式结构
//算法：解决问题的一些步骤
//特性：
//注意：
////fib,运行速度尽可能快，所有的资源尽可能少
//时间                  内存
//时间复杂度         空间复杂度
//Int fib(N)
//{
//	If N<3
//		Return N;
//	Else
//		Return fib(N - 1) + fib(N - 2);
//}
//语句执行次数
//为什么用执行次数而不是时间来衡量算法的好坏
//因为环境（运行环境（多核cpu肯定运行时间短））会影响时间，而且运行环境不同，程序运行时别的程序也会因运行时间对所测程序的时间产生影响。
//例
//Int Find(int array[])//1 5 6  8 4 3  4 
//{
//	For(int i = 0; i<size; i++)
//	{
//		If(data == array[i])
//			Return i;
//	}
//	Return - 1;
//}
//最坏情况下的执行次数以及最优情况下的执行此数还有平均执行次数（每一个数据的比较次数的执行次数相加在除以size）
//时间复杂度的大O渐进表示法
//Function1：F(N) = 10； - 》O(F(N)) == O(10)----》O(1)
//Function2：F(N) = 2 * N + 10-->O(F(N)) == O（2*N + 10--》O(N)
//Function3：F(N) = N ^ 2 + 2 * N + 10-- - 》O(F(N)) == O（N ^ 2 + 2 * N + 10）-->O(N ^ 2)
//Function4：F(N) = m + n-->O(F(N)) == O（m + n）--->O(m + n)
//Function5：F(N) = 2 * m*n-->O(F(N)) == O（2*m*n）-->O(m*n)
//规则：用常数1取代表达式中的常数, 只保留表达式中的最高次项, 常忽略最高次项前的系数。
//
//分治算法的时间复杂度：
//二分法：
//int binarySearch（int *arry, int size, int data）
//{
//	int lift = 0;
//	Int right = size - 1;							size
//		While(lift <= right)							lift<right
//	{
//		Int mid = (right - lift) / 2 + lift;
//		If(data == array[mid])
//			Reurn mid;
//		Else if (data<array[mid])
//		{
//			Right = mid - 1;						right = mid; ()这种情况下如果									取mid - 1；因为right取不到，会损失一位。
//		}
//		Else
//		{
//			Lift = mid + 1;						lift = mid + 1;
//		}
//	}
//	If(right<lift)
//	{
//		printf(“没有找到\n”);
//	}
//	Return - 1;
//}
//二分法的时间复杂度：
//设执行次数为n，则
//1 * 2 ^ n = N;
//所以执行次数为：n = log2（N）；O（log2N）（有些书中也把log2写作lg）
//
//二叉树的比较次数相当于求树的高度
//即二叉树的时间复杂度为树的高度即为log2N - 1；
//二分搜索法的时间复杂度为log2N - 1；
//递归算法时间复杂度：递归总次数*每一次递归的次数
//Int sum（N）
//{
//	If N<2
//	Return 1;
//	Else
//		Return N + sum(N - 1);
//}
//Sum(6)--->sum(5)--->sum(4)--->sum(3)--->sum(2)-- - sum(1)
//总共的递归次数为N次，所以时间复杂度为O(N)；
//N！的时间复杂度
//Int Fac(N)
//{
//	If(N == 0)
//		Return 1;
//	Else
//		Return N*Fac(N - 1);
//}
//Fac(6)--->Fac(5)--->Fac(4)--->Fac(3)
//递归了N + 1；次时间复杂度为O(N)；
//空间复杂度
//使用的辅助空间的大小(常量，空间复杂度为O(1))如果是变量，则看变量里面的元素个数。
//递归：递归总的次数*每次递归次数
//
//
//
//
//
//
//衡量一个算法的好坏：
//时间复杂度、空间复杂度
//时间复杂度------》基本语句关于问题规模n的数学表达式
//空间复杂度------》创建变量关于问题规模n的数学表达式
//数学表达式
//最坏情况：
//O(N)渐进表示法
//时间复杂度的求解的方法：
//1.求解数学表达式
//2.O------ - 》3条规则：常量：O(1) 、如果数学表达式有多个项，只保留最高次项（增长最快的那一项）、忽略最高阶项前的系数。（二分法查找、递归他们的函数关系式不好找，所以画图分析解决问题，递归总的次数*每次递归的次数------ - 》画图分析）
//空间复杂度：
//1.画图分析
//2.一般都是O(1)，或者是O(N)。
//Fib的时间复杂度与空间复杂度
//时间复杂度：
//O()
//空间复杂度：
//递归的深度*每一次递归里面建立变量的个数
//深度即为这个树的高度；
//O(N)
//优化递归----->O(N)
//尾递归：跟迭代比较像，
//Int FIb(int  first, int  second, int  N)//first、second分别为这个数列的第一项和第二项的数。
//{
//	If(N<3)
//		Return 1;
//	Else if (N == 3)
//		Return first + second;
//	Else
//		Return Fib(second, first + second, N - 1);
//}
//Fib(1, 1, 6)---->Fib(1, 2, 5)--->Fib(2, 3, 4)---->Fib(3, 5, 3)//当N=3时，返回first+second;
//此时的时间复杂度为O(N)；
//此时的空间复杂度为O(N)或者为O(1)
//
//尾递归：如果一个函数所有的递归形式的调用都出现在函数的末尾，我们称这个递归函数是尾递归的。当递归调用是整个函数体中最后执行的语句且它的返回值不属于表达式的一部分时，这个递归调用就是尾递归。尾递归的函数特点是在回归过程中不用做任何操作，大多数编译器会根据这一特点自动生成优化的代码。
//非递归的Fib
//Int Fib（int N）
//{
//	Int first = 1;
//	Int second = 1;
//	Int ret = 0;
//	If(N<3)
//		Return 1;
//	For(int i = 3; i <= N; i++)
//	{
//		Ret = first + second;
//		First = second;
//		Second = ret;
//	}
//	Return ret;
//}
//此时的时间复杂度为O(N)，空间复杂度为O(1)；
//栈
//特殊的线性结构：栈、队列
//栈：连续的空间-------->只能在线性表的一端操作（插入、删除&取元素）先进后出的线性表。栈顶。可以将一组数据的一种序列改为另一种序列。
//顺序栈：和顺序表的数据成员相同，但是操作不同，栈只允许在栈顶操作。
//队列：
//Stack.h
//#pragma once
////此处为静态栈
//#include<assert.h>
//Typedef int SDataType;
//#define MAXSIZE 10
//Struct Stack
//{
//	SDataType _array[MAXSIZE];
//	Int top;//标价栈顶（栈中元素个数）
//}Stack；
//Void StackInit(Stack *ps);
//Void StackPush(Stack *ps, SDataType data);
//Void StackPop(Stack *ps);
//SDataType StackTop(Stack *ps);//获取栈顶元素
//Int StackSize(Stack *ps);//获取栈中元素个数；
//Int StackEmpty(Stack *ps);//判断栈是否为空
//Stack.c
//#include”Stack.h”
//Void StackInit(Stack *ps);
//{
//	Assert(ps);
//	Ps->top = 0;
//}
//Void StackPush(Stack *ps, SDataType data)
//{
//	Assert(ps);
//	If(ps->top == MAXSIZE)
//		Return;
//	Ps->array[ps->top++] = data;
//}
//Void StackPop(Stack *ps)
//{
//	Assert(ps);
//	If(StackEmpty(ps))
//		Return;
//	Ps->top--;
//}
//Int StackSize(Stack *ps)
//{
//	Assert(ps);
//	Return ps->top;
//}
//Int StackEmpty(Stack *ps)
//{
//	Assert(ps);
//	Return 0 == ps->top;
//}
//SDataType StackTop(Stack *ps)//返回栈顶元素
//{
//	Assert(ps);
//	Return ps->array[ps->top - 1];
//}
//test.c
//#include”Stack.h”
//Void test()
//{
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	Printf(“%d ”, StackSize(&s));
//	Printf(“%d”, StackTop(&s));
//}
//Int main()
//{
//	Test()；
//		System(“pause”);
//	Return 0;
//}
//链栈：
//栈的应用 :
//括号匹配问题
//取一个字符：
//0.判断一个字符是否是括号；是继续1，否则取下一个括号；
//1.如果是左括号，入栈
//2.如果是右括号，检测该括号是否与栈顶匹配
//栈是否为空：空------->右边括号比左边多，不匹配。
//是：将栈顶元素出栈
//否：括号匹配次序出错
//栈是否为空
//是：匹配
//否：左边比右边括号多
//Int IsBrackets(char ch)
//{
//	If(‘(’ == ch || ’)’ == ch || (‘(’ == ch || ’)’ == ch) || (‘(’ == ch || ’)’ == ch))
//		Return 1;
//}
//Void MatchBrackets(const shar *str)//将字符读进栈中并进行操作
//{
//	Stack s;
//	Int i = 0;
//	Int size = 0;
//	If(str == NULL)
//		Return;
//	StackInit(&s);
//	Size = strlen(str);
//	For(i = 0, i<size; i++)
//	{
//		If(IsBrackets(str[i]))
//		{
//			If(str[i] == ’(‘ || str[i] == ’[’ || str[i] == ’{ ‘)
//				StackPush(&s, str[i]);
//		}
//			Else
//			{
//				//右括号
//				If(StackEmpty(&s))
//				{
//					printf(“右边比左边多了\n”);
//					Return;
//				}
//				//检测当前括号是否与栈顶元素匹配
//				Ch = StackTop(&s);
//				If(!((‘(’ == ch&&’)’ == str[i]) || (‘[’ == ch&&’]’ == str[i]) || (‘{ ’ == ch&&’ }’ == str[i])))
//				{
//					printf(“匹配出错\n”); return;
//				}
//				StackPop(&s);//将匹配的括号从栈里面删除。
//			}
//		}
//		If(StackEmpty(&s))
//		{
//			printf(“匹配成功\n”);
//		}
//		Else
//			Printf(“括号右边比左边多\n”);
//	}
//	Int main()
//	{
//		Test();
//		Char  a[] = ’’ ’’
//	}
//
//	逆波兰表达式
//		1 + 2：中缀表达式
//		Rpn：中缀表达式