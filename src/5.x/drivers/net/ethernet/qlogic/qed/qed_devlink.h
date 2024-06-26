/* QLogic (R)NIC Driver/Library
 * Copyright (c) 2010-2017  Cavium, Inc.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _QED_DEVLINK_H
#define _QED_DEVLINK_H

#ifdef _HAS_DEVLINK
struct devlink *qed_devlink_register(struct qed_dev *cdev, void *drv_ctx);
void qed_devlink_unregister(struct devlink *devlink);
void qed_fw_reporters_create(struct devlink *devlink);
void qed_fw_reporters_destroy(struct devlink *devlink);
int qed_report_fatal_error(struct devlink *dl, enum qed_hw_err_type err_type);
#else
static inline struct devlink *qed_devlink_register(struct qed_dev *cdev,
						   void *drv_ctx)
{
	return NULL;
}

static inline void qed_devlink_unregister(struct devlink *devlink)
{

}

static inline void qed_fw_reporters_create(struct devlink *devlink)
{

}

static inline void qed_fw_reporters_destroy(struct devlink *devlink)
{

}

static inline int qed_report_fatal_error(struct devlink *dl, enum qed_hw_err_type err_type)
{
	return 0;
}
#endif

#endif
