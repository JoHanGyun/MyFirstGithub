#include <stdio.h>

main(){
	//5, 3 : 12�� ������ ����  
	int i , n, sum =0;
	
	printf("ū�� �Է�:");
	scanf("%d", &i);
	int large = i;
	
	printf("���� �� �Է�:");
	scanf("%d", &n);
	
	while(i >= n){
		sum = sum + i;
		i--;
		
	} 
	printf("%d���� %d������ ���� %d�Դϴ�\n",large , n, sum);
}
