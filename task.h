#ifndef __TASK_H__
#define __TASK_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>


typedef uint8_t	task_id_t;
typedef int32_t (*tk_cmd_func)();

typedef struct {
	task_id_t id;
	tk_cmd_func tk_func;
} task_t;

extern void task_parser(task_t* task_table, uint8_t command);
extern void task_menu();
#ifdef __cplusplus
}
#endif

#endif //__TASK_H__
