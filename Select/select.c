#include <stdio.h>

int main()
{
	int a[] = { 20,40,50,10,30 };
	int n = 5;
	int min;
	int temp;
	int i, j;
	int flag;
	printf("Before arry: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		//�ּڰ��� ã�´�.
		for (j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
				flag = 1;
			}
		}

		if(flag == 1){
			//���� ��ġ�� �ٲ��� ���ҵ��� ����غ���
			printf("\nSwap: %d %d\n", a[i], a[min]);
			//�ڸ��� �ٲ��ش�.
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		flag = 0;
		
	}
	printf("\nAfter arry: \n");
	for (int i = 0; i < n; i++)
	printf("%d\n", a[i]);
	return 1;
}