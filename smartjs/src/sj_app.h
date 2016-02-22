#ifndef _SJ_APP_H_
#define _SJ_APP_H_

struct v7;

/* The user app init function. A weak stub is provided in sj_app_init.c,
 * which can be overridden by the user. */
int sj_app_init(struct v7 *v7);

#endif /* _SJ_APP_H_ */
