//ʱ�临�Ӷ�
//���� = �㷨 + ���ݽṹ
//���ݽṹ������������֮��Ĺ�ϵ
//�߼���������
//��ϵ
//����
//����
//ͼ�Ρ�����״
//�����������ڴ��еĴ洢��ʽ
//˳��ṹ
//��ʽ�ṹ
//�㷨����������һЩ����
//���ԣ�
//ע�⣺
////fib,�����ٶȾ����ܿ죬���е���Դ��������
//ʱ��                  �ڴ�
//ʱ�临�Ӷ�         �ռ临�Ӷ�
//Int fib(N)
//{
//	If N<3
//		Return N;
//	Else
//		Return fib(N - 1) + fib(N - 2);
//}
//���ִ�д���
//Ϊʲô��ִ�д���������ʱ���������㷨�ĺû�
//��Ϊ���������л��������cpu�϶�����ʱ��̣�����Ӱ��ʱ�䣬�������л�����ͬ����������ʱ��ĳ���Ҳ��������ʱ�����������ʱ�����Ӱ�졣
//��
//Int Find(int array[])//1 5 6  8 4 3  4 
//{
//	For(int i = 0; i<size; i++)
//	{
//		If(data == array[i])
//			Return i;
//	}
//	Return - 1;
//}
//�����µ�ִ�д����Լ���������µ�ִ�д�������ƽ��ִ�д�����ÿһ�����ݵıȽϴ�����ִ�д�������ڳ���size��
//ʱ�临�ӶȵĴ�O������ʾ��
//Function1��F(N) = 10�� - ��O(F(N)) == O(10)----��O(1)
//Function2��F(N) = 2 * N + 10-->O(F(N)) == O��2*N + 10--��O(N)
//Function3��F(N) = N ^ 2 + 2 * N + 10-- - ��O(F(N)) == O��N ^ 2 + 2 * N + 10��-->O(N ^ 2)
//Function4��F(N) = m + n-->O(F(N)) == O��m + n��--->O(m + n)
//Function5��F(N) = 2 * m*n-->O(F(N)) == O��2*m*n��-->O(m*n)
//�����ó���1ȡ�����ʽ�еĳ���, ֻ�������ʽ�е���ߴ���, ��������ߴ���ǰ��ϵ����
//
//�����㷨��ʱ�临�Ӷȣ�
//���ַ���
//int binarySearch��int *arry, int size, int data��
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
//			Right = mid - 1;						right = mid; ()������������									ȡmid - 1����Ϊrightȡ����������ʧһλ��
//		}
//		Else
//		{
//			Lift = mid + 1;						lift = mid + 1;
//		}
//	}
//	If(right<lift)
//	{
//		printf(��û���ҵ�\n��);
//	}
//	Return - 1;
//}
//���ַ���ʱ�临�Ӷȣ�
//��ִ�д���Ϊn����
//1 * 2 ^ n = N;
//����ִ�д���Ϊ��n = log2��N����O��log2N������Щ����Ҳ��log2д��lg��
//
//�������ıȽϴ����൱�������ĸ߶�
//����������ʱ�临�Ӷ�Ϊ���ĸ߶ȼ�Ϊlog2N - 1��
//������������ʱ�临�Ӷ�Ϊlog2N - 1��
//�ݹ��㷨ʱ�临�Ӷȣ��ݹ��ܴ���*ÿһ�εݹ�Ĵ���
//Int sum��N��
//{
//	If N<2
//	Return 1;
//	Else
//		Return N + sum(N - 1);
//}
//Sum(6)--->sum(5)--->sum(4)--->sum(3)--->sum(2)-- - sum(1)
//�ܹ��ĵݹ����ΪN�Σ�����ʱ�临�Ӷ�ΪO(N)��
//N����ʱ�临�Ӷ�
//Int Fac(N)
//{
//	If(N == 0)
//		Return 1;
//	Else
//		Return N*Fac(N - 1);
//}
//Fac(6)--->Fac(5)--->Fac(4)--->Fac(3)
//�ݹ���N + 1����ʱ�临�Ӷ�ΪO(N)��
//�ռ临�Ӷ�
//ʹ�õĸ����ռ�Ĵ�С(�������ռ临�Ӷ�ΪO(1))����Ǳ������򿴱��������Ԫ�ظ�����
//�ݹ飺�ݹ��ܵĴ���*ÿ�εݹ����
//
//
//
//
//
//
//����һ���㷨�ĺû���
//ʱ�临�Ӷȡ��ռ临�Ӷ�
//ʱ�临�Ӷ�------�����������������ģn����ѧ���ʽ
//�ռ临�Ӷ�------�������������������ģn����ѧ���ʽ
//��ѧ���ʽ
//������
//O(N)������ʾ��
//ʱ�临�Ӷȵ����ķ�����
//1.�����ѧ���ʽ
//2.O------ - ��3�����򣺳�����O(1) �������ѧ���ʽ�ж���ֻ������ߴ������������һ���������߽���ǰ��ϵ���������ַ����ҡ��ݹ����ǵĺ�����ϵʽ�����ң����Ի�ͼ����������⣬�ݹ��ܵĴ���*ÿ�εݹ�Ĵ���------ - ����ͼ������
//�ռ临�Ӷȣ�
//1.��ͼ����
//2.һ�㶼��O(1)��������O(N)��
//Fib��ʱ�临�Ӷ���ռ临�Ӷ�
//ʱ�临�Ӷȣ�
//O()
//�ռ临�Ӷȣ�
//�ݹ�����*ÿһ�εݹ����潨�������ĸ���
//��ȼ�Ϊ������ĸ߶ȣ�
//O(N)
//�Ż��ݹ�----->O(N)
//β�ݹ飺�������Ƚ���
//Int FIb(int  first, int  second, int  N)//first��second�ֱ�Ϊ������еĵ�һ��͵ڶ��������
//{
//	If(N<3)
//		Return 1;
//	Else if (N == 3)
//		Return first + second;
//	Else
//		Return Fib(second, first + second, N - 1);
//}
//Fib(1, 1, 6)---->Fib(1, 2, 5)--->Fib(2, 3, 4)---->Fib(3, 5, 3)//��N=3ʱ������first+second;
//��ʱ��ʱ�临�Ӷ�ΪO(N)��
//��ʱ�Ŀռ临�Ӷ�ΪO(N)����ΪO(1)
//
//β�ݹ飺���һ���������еĵݹ���ʽ�ĵ��ö������ں�����ĩβ�����ǳ�����ݹ麯����β�ݹ�ġ����ݹ���������������������ִ�е���������ķ���ֵ�����ڱ��ʽ��һ����ʱ������ݹ���þ���β�ݹ顣β�ݹ�ĺ����ص����ڻع�����в������κβ�����������������������һ�ص��Զ������Ż��Ĵ��롣
//�ǵݹ��Fib
//Int Fib��int N��
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
//��ʱ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)��
//ջ
//��������Խṹ��ջ������
//ջ�������Ŀռ�-------->ֻ�������Ա��һ�˲��������롢ɾ��&ȡԪ�أ��Ƚ���������Ա�ջ�������Խ�һ�����ݵ�һ�����и�Ϊ��һ�����С�
//˳��ջ����˳�������ݳ�Ա��ͬ�����ǲ�����ͬ��ջֻ������ջ��������
//���У�
//Stack.h
//#pragma once
////�˴�Ϊ��̬ջ
//#include<assert.h>
//Typedef int SDataType;
//#define MAXSIZE 10
//Struct Stack
//{
//	SDataType _array[MAXSIZE];
//	Int top;//���ջ����ջ��Ԫ�ظ�����
//}Stack��
//Void StackInit(Stack *ps);
//Void StackPush(Stack *ps, SDataType data);
//Void StackPop(Stack *ps);
//SDataType StackTop(Stack *ps);//��ȡջ��Ԫ��
//Int StackSize(Stack *ps);//��ȡջ��Ԫ�ظ�����
//Int StackEmpty(Stack *ps);//�ж�ջ�Ƿ�Ϊ��
//Stack.c
//#include��Stack.h��
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
//SDataType StackTop(Stack *ps)//����ջ��Ԫ��
//{
//	Assert(ps);
//	Return ps->array[ps->top - 1];
//}
//test.c
//#include��Stack.h��
//Void test()
//{
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	Printf(��%d ��, StackSize(&s));
//	Printf(��%d��, StackTop(&s));
//}
//Int main()
//{
//	Test()��
//		System(��pause��);
//	Return 0;
//}
//��ջ��
//ջ��Ӧ�� :
//����ƥ������
//ȡһ���ַ���
//0.�ж�һ���ַ��Ƿ������ţ��Ǽ���1������ȡ��һ�����ţ�
//1.����������ţ���ջ
//2.����������ţ����������Ƿ���ջ��ƥ��
//ջ�Ƿ�Ϊ�գ���------->�ұ����ű���߶࣬��ƥ�䡣
//�ǣ���ջ��Ԫ�س�ջ
//������ƥ��������
//ջ�Ƿ�Ϊ��
//�ǣ�ƥ��
//����߱��ұ����Ŷ�
//Int IsBrackets(char ch)
//{
//	If(��(�� == ch || ��)�� == ch || (��(�� == ch || ��)�� == ch) || (��(�� == ch || ��)�� == ch))
//		Return 1;
//}
//Void MatchBrackets(const shar *str)//���ַ�����ջ�в����в���
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
//			If(str[i] == ��(�� || str[i] == ��[�� || str[i] == ��{ ��)
//				StackPush(&s, str[i]);
//		}
//			Else
//			{
//				//������
//				If(StackEmpty(&s))
//				{
//					printf(���ұ߱���߶���\n��);
//					Return;
//				}
//				//��⵱ǰ�����Ƿ���ջ��Ԫ��ƥ��
//				Ch = StackTop(&s);
//				If(!((��(�� == ch&&��)�� == str[i]) || (��[�� == ch&&��]�� == str[i]) || (��{ �� == ch&&�� }�� == str[i])))
//				{
//					printf(��ƥ�����\n��); return;
//				}
//				StackPop(&s);//��ƥ������Ŵ�ջ����ɾ����
//			}
//		}
//		If(StackEmpty(&s))
//		{
//			printf(��ƥ��ɹ�\n��);
//		}
//		Else
//			Printf(�������ұ߱���߶�\n��);
//	}
//	Int main()
//	{
//		Test();
//		Char  a[] = ���� ����
//	}
//
//	�沨�����ʽ
//		1 + 2����׺���ʽ
//		Rpn����׺���ʽ