#include <stdio.h> // ������������ 1, ������� 15, ������� ��������� � (���������� �������)
#include <locale.h>
#define N 100
#define U 100
void main()
{
	setlocale(LC_ALL, "RUS");
	int M[N], i, n, B[U], j = 0, sum = 0;
	printf("\n������� ���������� ��������� �������:\n");
	scanf("%d", &n);
	printf("\n������� %d ����� ����� ����� ������:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &M[i]);

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			B[j] = M[i];
			j++;
			sum += M[i] * M[i];
		}

	}
	for (i = 0; i < j; i++)
		printf("\n%d", sum);
}