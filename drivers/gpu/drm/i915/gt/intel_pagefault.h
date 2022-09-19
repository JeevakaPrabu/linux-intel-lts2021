// SPDX-License-Identifier: MIT
/*
 * Copyright © 2022 Intel Corporation
 */

#ifndef _GT_INTEL_PAGEFAULT_H
#define _GT_INTEL_PAGEFAULT_H

#include <linux/types.h>

struct intel_gt;

void intel_gt_pagefault_process_cat_error_msg(struct intel_gt *gt, u32 guc_ctx_id);
int intel_gt_pagefault_process_page_fault_msg(struct intel_gt *gt, const u32 *msg, u32 len);

#endif /* _GT_INTEL_PAGEFAULT_H */

