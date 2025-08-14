/* SPDX-License-Identifier: BSD-2-Clause */

#ifndef GWLOG_H
#define GWLOG_H

#include <stdio.h>
#include <stdlib.h>

#define panic(_, ...) (fprintf(stderr, __VA_ARGS__), exit(1))

#endif
