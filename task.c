#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "task.h"
#include "menu_lib.h"

void task_parser(task_t* task_table, uint8_t command) {
	uint8_t index_check = 0;

	if(task_table == (task_t*)0) {
		printf("Task table not found!\n");
	}
	while(task_table[index_check].id < 5) {
		if(task_table[index_check].id == command) {
			task_table[index_check].tk_func();
		}
		index_check++;
	}
}

void task_menu() {
	int choice, choice_1, choice_2, choice_3, flag = 1, flag_1 = 1, flag_2 = 1, flag_3 = 1;
	while(flag == 1) {
		printf("1.Viet Nam - 2.China - 3.Korea - 4.exit\n");
		scanf("%d", &choice);
		switch(choice) {
		case 1:
			while(flag_1 == 1) {
				printf("\n0.hello - 1.name - 2.love - 3.parents - 4.son - 5.exit\n");
				scanf("%d", &choice_1);
				switch(choice_1) {
				case 0:
					task_parser(app_task_table, 0);
					break;
				case 1:
					task_parser(app_task_table, 1);
					break;
				case 2:
					task_parser(app_task_table, 2);
					break;
				case 3:
					task_parser(app_task_table, 3);
					break;
				case 4:
					task_parser(app_task_table, 4);
					break;
				case 5:
					flag_1 = 0;
					break;
				}
			}
			break;
		case 2:
			while(flag_2 == 1) {
				printf("\n0.hello - 1.name - 2.love - 3.parents - 4.son - 5.exit\n");
				scanf("%d", &choice_2);
				switch(choice_2) {
				case 0:
					task_parser(app_task_table_China, 0);
					break;
				case 1:
					task_parser(app_task_table_China, 1);
					break;
				case 2:
					task_parser(app_task_table_China, 2);
					break;
				case 3:
					task_parser(app_task_table_China, 3);
					break;
				case 4:
					task_parser(app_task_table_China, 4);
					break;
				case 5:
					flag_2 = 0;
					break;
				}
			}
			break;
		case 3:
			while(flag_3 == 1) {
				printf("\n0.hello - 1.name - 2.love - 3.parents - 4.son 5.exit\n");
				scanf("%d", &choice_3);
				switch(choice_3) {
				case 0:
					task_parser(app_task_table_Korea, 0);
					break;
				case 1:
					task_parser(app_task_table_Korea, 1);
					break;
				case 2:
					task_parser(app_task_table_Korea, 2);
					break;
				case 3:
					task_parser(app_task_table_Korea, 3);
					break;
				case 4:
					task_parser(app_task_table_Korea, 4);
					break;
				case 5:
					flag_3 = 0;
					break;
				}
			}
			break;
		case 4:
			flag = 0;
			break;
		}
	}
}
