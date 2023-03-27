#include<stdio.h>
void main() {
	int score[80] = {0}, select, i, j, k = 0, score1, a, b, box, score2, box1;
	char ch;
	printf("欢迎光临！\n");
	while (1) {
		printf("\n录入成绩请按1，删除成绩请按2，查找成绩请按3，对成绩排序请按4，插入成绩请按5，退出请按0: ");
		scanf_s("%d", &select);
		if (select == 1) {
			printf("\n请输入您要录入的10个成绩，按回车键结束：");
			for (i = 0; i < 10; i++) {
				scanf_s("%d", &score[i]);
			}
			
			printf("您的成绩录入成功！\n录入的成绩为：");
			for (a = 0; a < 10; a++) {
				printf("%d %d\n", a + 1, score[a]);
			}
			continue;
		}

		else if (select == 2) {
			printf("请输入您要删除的成绩：");
			scanf_s("%d", &score1);
			for(i = 0; i < 11 ; i++){
				if (score1 == score[i]) {
					score[i] = 0;
					printf("删除成功！");
					break;
				}
				else {
					if (i < 10)
						continue;
					else if (i = 10) {
						printf("您输入的分数不在本成绩单中！");
						break;
					}
						
				}	
			}
		}
		else if (select == 3) {
			printf("请输入您要查找的分数：");
			scanf_s("%d", &score1);
			for(i = 0 ; i < 11 ; i++){
				if (score1 == score[i]) {
					printf("您查找的分数序号为%d", i + 1);
				}
				else {
					if (i < 10)
						continue;
					else if (i = 10) {
						printf("您输入的分数不在本成绩单中！");
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
			printf("排序后的分数为：");
			for (a = 0; a < 10 + k; a++) {
				printf("%d %d\n",a + 1,score[a]);
			}
		}
		else if (select == 5) {
			printf("请输入您要插入的成绩：");
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
			printf("插入后的成绩排名为：");
			for (a = 0; a < 10 + k; a++) {
				printf("%d %d\n", a + 1, score[a]);
			}
		}
		else if (select == 0) {
			printf("谢谢您的使用，再见！");
			break;
		}
		else {
			printf("您输入有误请重新输入！");
			continue;
		}
	}
}