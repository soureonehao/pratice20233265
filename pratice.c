#include<stdio.h>
void main() {
	int score[80] = {0}, select, i, j, k = 0, score1, a, b, box, score2, box1;
	char ch;
	printf("��ӭ���٣�\n");
	while (1) {
		printf("\n¼��ɼ��밴1��ɾ���ɼ��밴2�����ҳɼ��밴3���Գɼ������밴4������ɼ��밴5���˳��밴0: ");
		scanf_s("%d", &select);
		if (select == 1) {
			printf("\n��������Ҫ¼���10���ɼ������س���������");
			for (i = 0; i < 10; i++) {
				scanf_s("%d", &score[i]);
			}
			
			printf("���ĳɼ�¼��ɹ���\n¼��ĳɼ�Ϊ��");
			for (a = 0; a < 10; a++) {
				printf("%d %d\n", a + 1, score[a]);
			}
			continue;
		}

		else if (select == 2) {
			printf("��������Ҫɾ���ĳɼ���");
			scanf_s("%d", &score1);
			for(i = 0; i < 11 ; i++){
				if (score1 == score[i]) {
					score[i] = 0;
					printf("ɾ���ɹ���");
					break;
				}
				else {
					if (i < 10)
						continue;
					else if (i = 10) {
						printf("������ķ������ڱ��ɼ����У�");
						break;
					}
						
				}	
			}
		}
		else if (select == 3) {
			printf("��������Ҫ���ҵķ�����");
			scanf_s("%d", &score1);
			for(i = 0 ; i < 11 ; i++){
				if (score1 == score[i]) {
					printf("�����ҵķ������Ϊ%d", i + 1);
				}
				else {
					if (i < 10)
						continue;
					else if (i = 10) {
						printf("������ķ������ڱ��ɼ����У�");
						break;
					}
						
				}			
			}
		}
		else if (select == 4) {
			for (a = 0; a < 10 + k; a++) {
				for (b = 0; b < 9 + k; b++) {
					if (score[b] < score[b + 1]) {
						box = score[b];
						score[b] = score[b + 1];
						score[b + 1] = box;
					}
				}
			}
			printf("�����ķ���Ϊ��");
			for (a = 0; a < 10 + k; a++) {
				printf("%d %d\n",a + 1,score[a]);
			}
		}
		else if (select == 5) {
			printf("��������Ҫ����ĳɼ���");
			scanf_s("%d", &score2);
			for (a = 0; a < 10 + k; a++) {
				if (score2 < score[a])
					box1 = a;
			
			}
			for (a = 10 + k; a > box1 ; a--) {
				score[a] = score[a - 1];
			}
			score[box1] = score2;
			k++;
			printf("�����ĳɼ�����Ϊ��");
			for (a = 0; a < 10 + k; a++) {
				printf("%d %d\n", a + 1, score[a]);
			}
		}
		else if (select == 0) {
			printf("лл����ʹ�ã��ټ���");
			break;
		}
		else {
			printf("�������������������룡");
			continue;
		}
	}
}