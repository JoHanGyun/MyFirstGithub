#include <stdio.h>

main(){
	//30���� 10������ ¦��	
	int i=30;
	while(i >= 10){	
		printf("%d ", i);
		i-=2;
		
		
	} 
	printf("\n�ݺ��������� i=%d", i);
	
	//���� 10����(i)�� ��(sum)
	printf("\n���� 10����(i)�� ��(sum) ���ϱ�");
	i=1; 
	int sum=0;
	while(i<=10)
	{
		sum = sum + i;
		i++;
	
	}
	printf("\n1���� 10������ �� : %d", sum);
}














