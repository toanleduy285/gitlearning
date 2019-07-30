#include "hellofunc.h"
#include "cmd_line.h"
#include "shell.h"
#include "fifo.h"
#include "linked_list.h"
#include "dynamic_allocation.h"
#include "menu_lib.h"
#include "task.h"
#include <stdio.h>
#include <iostream>
using namespace std;
//static uint32_t id_buf[5];
//static fifo_t id_fifo;

int main()
{
	/*****************************************************************************
	 *Test_fifo
	******************************************************************************/
	//	uint32_t st_nwk_pdu_id = 12;
	//	uint8_t* A;
	//	fifo_t* fifo;

	//	fifo_init(&id_fifo, id_buf, 5, sizeof(uint32_t));
	//	if(fifo_is_full(&id_fifo)) {
	//		cout << "QUEUE IS FULL\n";
	//	}
	//	else
	//		cout << "QUEUE IS EMPTY\n";
	//	fifo_put(&id_fifo, (uint8_t*)&st_nwk_pdu_id);

	/*****************************************************************************
	 *Test_linked_list
	******************************************************************************/
	//	node_t * test_list = (struct node*)malloc(sizeof(struct node));
	//	test_list->val = 1;
	//	test_list->next = (struct node*)malloc(sizeof(struct node));
	//	test_list->next->val = 2;
	//	test_list->next->next = (struct node*)malloc(sizeof(struct node));
	//	test_list->next->next->val = 3;
	//	test_list->next->next->next = (struct node*)malloc(sizeof(struct node));
	//	test_list->next->next->next->val = 4;
	//	test_list->next->next->next->next = NULL;
	//	push_head(&test_list, 9);
	//	push_head(&test_list, 6);
	//	push_tail(test_list, 10);
	//	remove_by_index(&test_list, 3);
	//	pop_tail(test_list);
	//	print_list(test_list);

	/*****************************************************************************
	 *Test_dynamic_allocation
	******************************************************************************/
	//	person_t * test_person = (struct person*)malloc(sizeof(struct person));
	//	test_person->name = "Le Duy Toan";
	//	push(test_person, 20, &test_person->name);

	//task_parser(app_task_table, 0);
//	task_parser(app_task_table, 3);
//	printf("id: %d\n", app_task_table[1].id);
//	app_task_table[3].tk_func();
//	printf("parser: %d\n", son);
	task_menu();

	return 0;

}
