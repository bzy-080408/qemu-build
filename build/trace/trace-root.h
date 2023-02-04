/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_ROOT_GENERATED_TRACERS_H
#define TRACE_ROOT_GENERATED_TRACERS_H

#include "trace/control-vcpu.h"

extern TraceEvent _TRACE_BREAKPOINT_INSERT_EVENT;
extern TraceEvent _TRACE_BREAKPOINT_REMOVE_EVENT;
extern TraceEvent _TRACE_BREAKPOINT_SINGLESTEP_EVENT;
extern TraceEvent _TRACE_DMA_BLK_IO_EVENT;
extern TraceEvent _TRACE_DMA_AIO_CANCEL_EVENT;
extern TraceEvent _TRACE_DMA_COMPLETE_EVENT;
extern TraceEvent _TRACE_DMA_BLK_CB_EVENT;
extern TraceEvent _TRACE_DMA_MAP_WAIT_EVENT;
extern TraceEvent _TRACE_FIND_RAM_OFFSET_EVENT;
extern TraceEvent _TRACE_FIND_RAM_OFFSET_LOOP_EVENT;
extern TraceEvent _TRACE_RAM_BLOCK_DISCARD_RANGE_EVENT;
extern TraceEvent _TRACE_JOB_STATE_TRANSITION_EVENT;
extern TraceEvent _TRACE_JOB_APPLY_VERB_EVENT;
extern TraceEvent _TRACE_JOB_COMPLETED_EVENT;
extern TraceEvent _TRACE_QMP_JOB_CANCEL_EVENT;
extern TraceEvent _TRACE_QMP_JOB_PAUSE_EVENT;
extern TraceEvent _TRACE_QMP_JOB_RESUME_EVENT;
extern TraceEvent _TRACE_QMP_JOB_COMPLETE_EVENT;
extern TraceEvent _TRACE_QMP_JOB_FINALIZE_EVENT;
extern TraceEvent _TRACE_QMP_JOB_DISMISS_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_ENTER_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_EXIT_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_RESET_EVENT;
extern TraceEvent _TRACE_GUEST_USER_SYSCALL_EVENT;
extern TraceEvent _TRACE_GUEST_USER_SYSCALL_RET_EVENT;
extern uint16_t _TRACE_BREAKPOINT_INSERT_DSTATE;
extern uint16_t _TRACE_BREAKPOINT_REMOVE_DSTATE;
extern uint16_t _TRACE_BREAKPOINT_SINGLESTEP_DSTATE;
extern uint16_t _TRACE_DMA_BLK_IO_DSTATE;
extern uint16_t _TRACE_DMA_AIO_CANCEL_DSTATE;
extern uint16_t _TRACE_DMA_COMPLETE_DSTATE;
extern uint16_t _TRACE_DMA_BLK_CB_DSTATE;
extern uint16_t _TRACE_DMA_MAP_WAIT_DSTATE;
extern uint16_t _TRACE_FIND_RAM_OFFSET_DSTATE;
extern uint16_t _TRACE_FIND_RAM_OFFSET_LOOP_DSTATE;
extern uint16_t _TRACE_RAM_BLOCK_DISCARD_RANGE_DSTATE;
extern uint16_t _TRACE_JOB_STATE_TRANSITION_DSTATE;
extern uint16_t _TRACE_JOB_APPLY_VERB_DSTATE;
extern uint16_t _TRACE_JOB_COMPLETED_DSTATE;
extern uint16_t _TRACE_QMP_JOB_CANCEL_DSTATE;
extern uint16_t _TRACE_QMP_JOB_PAUSE_DSTATE;
extern uint16_t _TRACE_QMP_JOB_RESUME_DSTATE;
extern uint16_t _TRACE_QMP_JOB_COMPLETE_DSTATE;
extern uint16_t _TRACE_QMP_JOB_FINALIZE_DSTATE;
extern uint16_t _TRACE_QMP_JOB_DISMISS_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_ENTER_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_EXIT_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_RESET_DSTATE;
extern uint16_t _TRACE_GUEST_USER_SYSCALL_DSTATE;
extern uint16_t _TRACE_GUEST_USER_SYSCALL_RET_DSTATE;
#define TRACE_BREAKPOINT_INSERT_ENABLED 1
#define TRACE_BREAKPOINT_REMOVE_ENABLED 1
#define TRACE_BREAKPOINT_SINGLESTEP_ENABLED 1
#define TRACE_DMA_BLK_IO_ENABLED 1
#define TRACE_DMA_AIO_CANCEL_ENABLED 1
#define TRACE_DMA_COMPLETE_ENABLED 1
#define TRACE_DMA_BLK_CB_ENABLED 1
#define TRACE_DMA_MAP_WAIT_ENABLED 1
#define TRACE_FIND_RAM_OFFSET_ENABLED 1
#define TRACE_FIND_RAM_OFFSET_LOOP_ENABLED 1
#define TRACE_RAM_BLOCK_DISCARD_RANGE_ENABLED 1
#define TRACE_JOB_STATE_TRANSITION_ENABLED 1
#define TRACE_JOB_APPLY_VERB_ENABLED 1
#define TRACE_JOB_COMPLETED_ENABLED 1
#define TRACE_QMP_JOB_CANCEL_ENABLED 1
#define TRACE_QMP_JOB_PAUSE_ENABLED 1
#define TRACE_QMP_JOB_RESUME_ENABLED 1
#define TRACE_QMP_JOB_COMPLETE_ENABLED 1
#define TRACE_QMP_JOB_FINALIZE_ENABLED 1
#define TRACE_QMP_JOB_DISMISS_ENABLED 1
#define TRACE_GUEST_CPU_ENTER_ENABLED 1
#define TRACE_GUEST_CPU_EXIT_ENABLED 1
#define TRACE_GUEST_CPU_RESET_ENABLED 1
#define TRACE_GUEST_USER_SYSCALL_ENABLED 1
#define TRACE_GUEST_USER_SYSCALL_RET_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_BREAKPOINT_INSERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_BREAKPOINT_INSERT) || \
    false)

static inline void _nocheck__trace_breakpoint_insert(int cpu_index, uint64_t pc, int flags)
{
    if (trace_event_get_state(TRACE_BREAKPOINT_INSERT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:breakpoint_insert " "cpu=%d pc=0x%" PRIx64 " flags=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, pc, flags);
#line 103 "trace/trace-root.h"
        } else {
#line 29 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("breakpoint_insert " "cpu=%d pc=0x%" PRIx64 " flags=0x%x" "\n", cpu_index, pc, flags);
#line 107 "trace/trace-root.h"
        }
    }
}

static inline void trace_breakpoint_insert(int cpu_index, uint64_t pc, int flags)
{
    if (true) {
        _nocheck__trace_breakpoint_insert(cpu_index, pc, flags);
    }
}

#define TRACE_BREAKPOINT_REMOVE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_BREAKPOINT_REMOVE) || \
    false)

static inline void _nocheck__trace_breakpoint_remove(int cpu_index, uint64_t pc, int flags)
{
    if (trace_event_get_state(TRACE_BREAKPOINT_REMOVE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:breakpoint_remove " "cpu=%d pc=0x%" PRIx64 " flags=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, pc, flags);
#line 134 "trace/trace-root.h"
        } else {
#line 30 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("breakpoint_remove " "cpu=%d pc=0x%" PRIx64 " flags=0x%x" "\n", cpu_index, pc, flags);
#line 138 "trace/trace-root.h"
        }
    }
}

static inline void trace_breakpoint_remove(int cpu_index, uint64_t pc, int flags)
{
    if (true) {
        _nocheck__trace_breakpoint_remove(cpu_index, pc, flags);
    }
}

#define TRACE_BREAKPOINT_SINGLESTEP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_BREAKPOINT_SINGLESTEP) || \
    false)

static inline void _nocheck__trace_breakpoint_singlestep(int cpu_index, int enabled)
{
    if (trace_event_get_state(TRACE_BREAKPOINT_SINGLESTEP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:breakpoint_singlestep " "cpu=%d enable=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, enabled);
#line 165 "trace/trace-root.h"
        } else {
#line 31 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("breakpoint_singlestep " "cpu=%d enable=%d" "\n", cpu_index, enabled);
#line 169 "trace/trace-root.h"
        }
    }
}

static inline void trace_breakpoint_singlestep(int cpu_index, int enabled)
{
    if (true) {
        _nocheck__trace_breakpoint_singlestep(cpu_index, enabled);
    }
}

#define TRACE_DMA_BLK_IO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DMA_BLK_IO) || \
    false)

static inline void _nocheck__trace_dma_blk_io(void * dbs, void * bs, int64_t offset, bool to_dev)
{
    if (trace_event_get_state(TRACE_DMA_BLK_IO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 34 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:dma_blk_io " "dbs=%p bs=%p offset=%" PRId64 " to_dev=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , dbs, bs, offset, to_dev);
#line 196 "trace/trace-root.h"
        } else {
#line 34 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("dma_blk_io " "dbs=%p bs=%p offset=%" PRId64 " to_dev=%d" "\n", dbs, bs, offset, to_dev);
#line 200 "trace/trace-root.h"
        }
    }
}

static inline void trace_dma_blk_io(void * dbs, void * bs, int64_t offset, bool to_dev)
{
    if (true) {
        _nocheck__trace_dma_blk_io(dbs, bs, offset, to_dev);
    }
}

#define TRACE_DMA_AIO_CANCEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DMA_AIO_CANCEL) || \
    false)

static inline void _nocheck__trace_dma_aio_cancel(void * dbs)
{
    if (trace_event_get_state(TRACE_DMA_AIO_CANCEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 35 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:dma_aio_cancel " "dbs=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , dbs);
#line 227 "trace/trace-root.h"
        } else {
#line 35 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("dma_aio_cancel " "dbs=%p" "\n", dbs);
#line 231 "trace/trace-root.h"
        }
    }
}

static inline void trace_dma_aio_cancel(void * dbs)
{
    if (true) {
        _nocheck__trace_dma_aio_cancel(dbs);
    }
}

#define TRACE_DMA_COMPLETE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DMA_COMPLETE) || \
    false)

static inline void _nocheck__trace_dma_complete(void * dbs, int ret, void * cb)
{
    if (trace_event_get_state(TRACE_DMA_COMPLETE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 36 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:dma_complete " "dbs=%p ret=%d cb=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , dbs, ret, cb);
#line 258 "trace/trace-root.h"
        } else {
#line 36 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("dma_complete " "dbs=%p ret=%d cb=%p" "\n", dbs, ret, cb);
#line 262 "trace/trace-root.h"
        }
    }
}

static inline void trace_dma_complete(void * dbs, int ret, void * cb)
{
    if (true) {
        _nocheck__trace_dma_complete(dbs, ret, cb);
    }
}

#define TRACE_DMA_BLK_CB_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DMA_BLK_CB) || \
    false)

static inline void _nocheck__trace_dma_blk_cb(void * dbs, int ret)
{
    if (trace_event_get_state(TRACE_DMA_BLK_CB) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 37 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:dma_blk_cb " "dbs=%p ret=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , dbs, ret);
#line 289 "trace/trace-root.h"
        } else {
#line 37 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("dma_blk_cb " "dbs=%p ret=%d" "\n", dbs, ret);
#line 293 "trace/trace-root.h"
        }
    }
}

static inline void trace_dma_blk_cb(void * dbs, int ret)
{
    if (true) {
        _nocheck__trace_dma_blk_cb(dbs, ret);
    }
}

#define TRACE_DMA_MAP_WAIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DMA_MAP_WAIT) || \
    false)

static inline void _nocheck__trace_dma_map_wait(void * dbs)
{
    if (trace_event_get_state(TRACE_DMA_MAP_WAIT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 38 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:dma_map_wait " "dbs=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , dbs);
#line 320 "trace/trace-root.h"
        } else {
#line 38 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("dma_map_wait " "dbs=%p" "\n", dbs);
#line 324 "trace/trace-root.h"
        }
    }
}

static inline void trace_dma_map_wait(void * dbs)
{
    if (true) {
        _nocheck__trace_dma_map_wait(dbs);
    }
}

#define TRACE_FIND_RAM_OFFSET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_FIND_RAM_OFFSET) || \
    false)

static inline void _nocheck__trace_find_ram_offset(uint64_t size, uint64_t offset)
{
    if (trace_event_get_state(TRACE_FIND_RAM_OFFSET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 41 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:find_ram_offset " "size: 0x%" PRIx64 " @ 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , size, offset);
#line 351 "trace/trace-root.h"
        } else {
#line 41 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("find_ram_offset " "size: 0x%" PRIx64 " @ 0x%" PRIx64 "\n", size, offset);
#line 355 "trace/trace-root.h"
        }
    }
}

static inline void trace_find_ram_offset(uint64_t size, uint64_t offset)
{
    if (true) {
        _nocheck__trace_find_ram_offset(size, offset);
    }
}

#define TRACE_FIND_RAM_OFFSET_LOOP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_FIND_RAM_OFFSET_LOOP) || \
    false)

static inline void _nocheck__trace_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset, uint64_t next, uint64_t mingap)
{
    if (trace_event_get_state(TRACE_FIND_RAM_OFFSET_LOOP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 42 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:find_ram_offset_loop " "trying size: 0x%" PRIx64 " @ 0x%" PRIx64 ", offset: 0x%" PRIx64" next: 0x%" PRIx64 " mingap: 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , size, candidate, offset, next, mingap);
#line 382 "trace/trace-root.h"
        } else {
#line 42 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("find_ram_offset_loop " "trying size: 0x%" PRIx64 " @ 0x%" PRIx64 ", offset: 0x%" PRIx64" next: 0x%" PRIx64 " mingap: 0x%" PRIx64 "\n", size, candidate, offset, next, mingap);
#line 386 "trace/trace-root.h"
        }
    }
}

static inline void trace_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset, uint64_t next, uint64_t mingap)
{
    if (true) {
        _nocheck__trace_find_ram_offset_loop(size, candidate, offset, next, mingap);
    }
}

#define TRACE_RAM_BLOCK_DISCARD_RANGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RAM_BLOCK_DISCARD_RANGE) || \
    false)

static inline void _nocheck__trace_ram_block_discard_range(const char * rbname, void * hva, size_t length, bool need_madvise, bool need_fallocate, int ret)
{
    if (trace_event_get_state(TRACE_RAM_BLOCK_DISCARD_RANGE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 43 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:ram_block_discard_range " "%s@%p + 0x%zx: madvise: %d fallocate: %d ret: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , rbname, hva, length, need_madvise, need_fallocate, ret);
#line 413 "trace/trace-root.h"
        } else {
#line 43 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("ram_block_discard_range " "%s@%p + 0x%zx: madvise: %d fallocate: %d ret: %d" "\n", rbname, hva, length, need_madvise, need_fallocate, ret);
#line 417 "trace/trace-root.h"
        }
    }
}

static inline void trace_ram_block_discard_range(const char * rbname, void * hva, size_t length, bool need_madvise, bool need_fallocate, int ret)
{
    if (true) {
        _nocheck__trace_ram_block_discard_range(rbname, hva, length, need_madvise, need_fallocate, ret);
    }
}

#define TRACE_JOB_STATE_TRANSITION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_JOB_STATE_TRANSITION) || \
    false)

static inline void _nocheck__trace_job_state_transition(void * job, int ret, const char * legal, const char * s0, const char * s1)
{
    if (trace_event_get_state(TRACE_JOB_STATE_TRANSITION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 46 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:job_state_transition " "job %p (ret: %d) attempting %s transition (%s-->%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job, ret, legal, s0, s1);
#line 444 "trace/trace-root.h"
        } else {
#line 46 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("job_state_transition " "job %p (ret: %d) attempting %s transition (%s-->%s)" "\n", job, ret, legal, s0, s1);
#line 448 "trace/trace-root.h"
        }
    }
}

static inline void trace_job_state_transition(void * job, int ret, const char * legal, const char * s0, const char * s1)
{
    if (true) {
        _nocheck__trace_job_state_transition(job, ret, legal, s0, s1);
    }
}

#define TRACE_JOB_APPLY_VERB_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_JOB_APPLY_VERB) || \
    false)

static inline void _nocheck__trace_job_apply_verb(void * job, const char * state, const char * verb, const char * legal)
{
    if (trace_event_get_state(TRACE_JOB_APPLY_VERB) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 47 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:job_apply_verb " "job %p in state %s; applying verb %s (%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job, state, verb, legal);
#line 475 "trace/trace-root.h"
        } else {
#line 47 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("job_apply_verb " "job %p in state %s; applying verb %s (%s)" "\n", job, state, verb, legal);
#line 479 "trace/trace-root.h"
        }
    }
}

static inline void trace_job_apply_verb(void * job, const char * state, const char * verb, const char * legal)
{
    if (true) {
        _nocheck__trace_job_apply_verb(job, state, verb, legal);
    }
}

#define TRACE_JOB_COMPLETED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_JOB_COMPLETED) || \
    false)

static inline void _nocheck__trace_job_completed(void * job, int ret)
{
    if (trace_event_get_state(TRACE_JOB_COMPLETED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 48 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:job_completed " "job %p ret %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job, ret);
#line 506 "trace/trace-root.h"
        } else {
#line 48 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("job_completed " "job %p ret %d" "\n", job, ret);
#line 510 "trace/trace-root.h"
        }
    }
}

static inline void trace_job_completed(void * job, int ret)
{
    if (true) {
        _nocheck__trace_job_completed(job, ret);
    }
}

#define TRACE_QMP_JOB_CANCEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_CANCEL) || \
    false)

static inline void _nocheck__trace_qmp_job_cancel(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_CANCEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 51 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_cancel " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 537 "trace/trace-root.h"
        } else {
#line 51 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_cancel " "job %p" "\n", job);
#line 541 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_cancel(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_cancel(job);
    }
}

#define TRACE_QMP_JOB_PAUSE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_PAUSE) || \
    false)

static inline void _nocheck__trace_qmp_job_pause(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_PAUSE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 52 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_pause " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 568 "trace/trace-root.h"
        } else {
#line 52 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_pause " "job %p" "\n", job);
#line 572 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_pause(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_pause(job);
    }
}

#define TRACE_QMP_JOB_RESUME_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_RESUME) || \
    false)

static inline void _nocheck__trace_qmp_job_resume(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_RESUME) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 53 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_resume " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 599 "trace/trace-root.h"
        } else {
#line 53 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_resume " "job %p" "\n", job);
#line 603 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_resume(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_resume(job);
    }
}

#define TRACE_QMP_JOB_COMPLETE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_COMPLETE) || \
    false)

static inline void _nocheck__trace_qmp_job_complete(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_COMPLETE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 54 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_complete " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 630 "trace/trace-root.h"
        } else {
#line 54 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_complete " "job %p" "\n", job);
#line 634 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_complete(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_complete(job);
    }
}

#define TRACE_QMP_JOB_FINALIZE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_FINALIZE) || \
    false)

static inline void _nocheck__trace_qmp_job_finalize(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_FINALIZE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 55 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_finalize " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 661 "trace/trace-root.h"
        } else {
#line 55 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_finalize " "job %p" "\n", job);
#line 665 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_finalize(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_finalize(job);
    }
}

#define TRACE_QMP_JOB_DISMISS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_JOB_DISMISS) || \
    false)

static inline void _nocheck__trace_qmp_job_dismiss(void * job)
{
    if (trace_event_get_state(TRACE_QMP_JOB_DISMISS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 56 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:qmp_job_dismiss " "job %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , job);
#line 692 "trace/trace-root.h"
        } else {
#line 56 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("qmp_job_dismiss " "job %p" "\n", job);
#line 696 "trace/trace-root.h"
        }
    }
}

static inline void trace_qmp_job_dismiss(void * job)
{
    if (true) {
        _nocheck__trace_qmp_job_dismiss(job);
    }
}

#define TRACE_GUEST_CPU_ENTER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GUEST_CPU_ENTER) || \
    false)

static inline void _nocheck__trace_guest_cpu_enter(void * __cpu)
{
    if (true && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 70 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:guest_cpu_enter " "cpu=%p " "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , __cpu);
#line 723 "trace/trace-root.h"
        } else {
#line 70 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("guest_cpu_enter " "cpu=%p " "\n", __cpu);
#line 727 "trace/trace-root.h"
        }
    }
}

static inline void trace_guest_cpu_enter(void * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_ENTER)) {
        _nocheck__trace_guest_cpu_enter(__cpu);
    }
}

#define TRACE_GUEST_CPU_EXIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GUEST_CPU_EXIT) || \
    false)

static inline void _nocheck__trace_guest_cpu_exit(void * __cpu)
{
    if (true && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 78 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:guest_cpu_exit " "cpu=%p " "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , __cpu);
#line 754 "trace/trace-root.h"
        } else {
#line 78 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("guest_cpu_exit " "cpu=%p " "\n", __cpu);
#line 758 "trace/trace-root.h"
        }
    }
}

static inline void trace_guest_cpu_exit(void * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_EXIT)) {
        _nocheck__trace_guest_cpu_exit(__cpu);
    }
}

#define TRACE_GUEST_CPU_RESET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GUEST_CPU_RESET) || \
    false)

static inline void _nocheck__trace_guest_cpu_reset(void * __cpu)
{
    if (true && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 86 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:guest_cpu_reset " "cpu=%p " "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , __cpu);
#line 785 "trace/trace-root.h"
        } else {
#line 86 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("guest_cpu_reset " "cpu=%p " "\n", __cpu);
#line 789 "trace/trace-root.h"
        }
    }
}

static inline void trace_guest_cpu_reset(void * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_RESET)) {
        _nocheck__trace_guest_cpu_reset(__cpu);
    }
}

#define TRACE_GUEST_USER_SYSCALL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GUEST_USER_SYSCALL) || \
    false)

static inline void _nocheck__trace_guest_user_syscall(void * __cpu, uint64_t num, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8)
{
    if (true && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 97 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:guest_user_syscall " "cpu=%p ""num=0x%016"PRIx64" arg1=0x%016"PRIx64" arg2=0x%016"PRIx64" arg3=0x%016"PRIx64" arg4=0x%016"PRIx64" arg5=0x%016"PRIx64" arg6=0x%016"PRIx64" arg7=0x%016"PRIx64" arg8=0x%016"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , __cpu, num, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
#line 816 "trace/trace-root.h"
        } else {
#line 97 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("guest_user_syscall " "cpu=%p ""num=0x%016"PRIx64" arg1=0x%016"PRIx64" arg2=0x%016"PRIx64" arg3=0x%016"PRIx64" arg4=0x%016"PRIx64" arg5=0x%016"PRIx64" arg6=0x%016"PRIx64" arg7=0x%016"PRIx64" arg8=0x%016"PRIx64 "\n", __cpu, num, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
#line 820 "trace/trace-root.h"
        }
    }
}

static inline void trace_guest_user_syscall(void * __cpu, uint64_t num, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_USER_SYSCALL)) {
        _nocheck__trace_guest_user_syscall(__cpu, num, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
}

#define TRACE_GUEST_USER_SYSCALL_RET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GUEST_USER_SYSCALL_RET) || \
    false)

static inline void _nocheck__trace_guest_user_syscall_ret(void * __cpu, uint64_t num, uint64_t ret)
{
    if (true && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 106 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("%d@%zu.%06zu:guest_user_syscall_ret " "cpu=%p ""num=0x%016"PRIx64" ret=0x%016"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , __cpu, num, ret);
#line 847 "trace/trace-root.h"
        } else {
#line 106 "/home/bzy/qemu/qemu/./trace-events"
            qemu_log("guest_user_syscall_ret " "cpu=%p ""num=0x%016"PRIx64" ret=0x%016"PRIx64 "\n", __cpu, num, ret);
#line 851 "trace/trace-root.h"
        }
    }
}

static inline void trace_guest_user_syscall_ret(void * __cpu, uint64_t num, uint64_t ret)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_USER_SYSCALL_RET)) {
        _nocheck__trace_guest_user_syscall_ret(__cpu, num, ret);
    }
}
#endif /* TRACE_ROOT_GENERATED_TRACERS_H */
