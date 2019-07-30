#ifndef __TASK_LIST_H__
#define __TASK_LIST_H__

#include "task.h"

extern task_t app_task_table[];
extern task_t app_task_table_China[];
extern task_t app_task_table_Korea[];
/*****************************************************************************/
/*  DECLARE: Internal Task ID
 *  Note: Task id MUST be increasing order.
 */
/*****************************************************************************/
enum {
	helloworld,
	name,
	love,
	parents,
	son,
	end,
};

/* APP TASKS */

#endif //__TASK_LIST_H__
