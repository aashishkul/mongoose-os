/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#include "smartjs/src/sj_debug.h"

int sj_debug_redirect(enum debug_mode mode) {
  (void) mode;
  return -1;
}

