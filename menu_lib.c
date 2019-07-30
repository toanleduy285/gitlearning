#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "menu_lib.h"
#include "task.h"

static int32_t task_hello();
static int32_t task_name();
static int32_t task_love();
static int32_t task_parents();
static int32_t task_son();
static int32_t task_hello_cn();
static int32_t task_name_cn();
static int32_t task_love_cn();
static int32_t task_parents_cn();
static int32_t task_son_cn();
static int32_t task_hello_kr();
static int32_t task_name_kr();
static int32_t task_love_kr();
static int32_t task_parents_kr();
static int32_t task_son_kr();
task_t app_task_table[] = {
	{helloworld	,		task_hello},
	{name		,		task_name},
	{love		,		task_love},
	{parents	,		task_parents},
	{son		,		task_son},
	/* End Of Table */
	{end		,		(tk_cmd_func)0}

};

task_t app_task_table_China[] = {
	{helloworld	,		task_hello_cn},
	{name		,		task_name_cn},
	{love		,		task_love_cn},
	{parents	,		task_parents_cn},
	{son		,		task_son_cn},
	/* End Of Table */
	{end		,		(tk_cmd_func)0}
};

task_t app_task_table_Korea[] = {
	{helloworld	,		task_hello_kr},
	{name		,		task_name_kr},
	{love		,		task_love_kr},
	{parents	,		task_parents_kr},
	{son		,		task_son_kr},
	/* End Of Table */
	{end		,		(tk_cmd_func)0}
};

int32_t task_hello() {
	printf("xin chao\n");
	return 0;
}

int32_t task_name() {
	printf("ten\n");
	return 0;
}

int32_t task_love() {
	printf("tinh yeu\n");
	return 0;
}

int32_t task_parents() {
	printf("ba me\n");
	return 0;
}

int32_t task_son() {
	printf("con trai\n");
	return 0;
}

int32_t task_hello_cn() {
	printf("你好\n");
	return 0;
}

int32_t task_name_cn() {
	printf("名称\n");
	return 0;
}

int32_t task_love_cn() {
	printf("爱\n");
	return 0;
}

int32_t task_parents_cn() {
	printf("父母\n");
	return 0;
}

int32_t task_son_cn() {
	printf("儿子\n");
	return 0;
}

int32_t task_hello_kr() {
	printf("여보세요\n");
	return 0;
}

int32_t task_name_kr() {
	printf("이름\n");
	return 0;
}

int32_t task_love_kr() {
	printf("애정\n");
	return 0;
}

int32_t task_parents_kr() {
	printf("부모님\n");
	return 0;
}

int32_t task_son_kr() {
	printf("아들\n");
	return 0;
}
