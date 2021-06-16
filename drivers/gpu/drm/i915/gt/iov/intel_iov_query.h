/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2022 Intel Corporation
 */

#ifndef __INTEL_IOV_QUERY_H__
#define __INTEL_IOV_QUERY_H__

struct drm_printer;
struct intel_iov;

int intel_iov_query_bootstrap(struct intel_iov *iov);
int intel_iov_query_config(struct intel_iov *iov);

void intel_iov_query_print_config(struct intel_iov *iov, struct drm_printer *p);

#endif /* __INTEL_IOV_QUERY_H__ */
