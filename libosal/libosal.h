/******************************************************************************
 * Copyright (C) 2014-2015
 * file:    libosal.h
 * author:  gozfree <gozfree@163.com>
 * created: 2015-11-28 17:59:24
 * updated: 2015-11-28 17:59:24
 *****************************************************************************/
#ifndef LIBOSAL_H
#define LIBOSAL_H

#ifdef __cplusplus
extern "C" {
#endif

int is_little_endian(void);
int system_noblock(char **argv);
ssize_t system_with_result(const char *cmd, void *buf, size_t count);
ssize_t system_noblock_with_result(char **argv, void *buf, size_t count);



#ifdef __cplusplus
}
#endif
#endif
