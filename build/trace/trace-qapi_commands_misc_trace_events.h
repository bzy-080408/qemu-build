/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_MISC_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_MISC_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_ADD_CLIENT_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_ADD_CLIENT_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_NAME_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_NAME_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_IOTHREADS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_IOTHREADS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_STOP_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_STOP_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_CONT_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_CONT_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_X_EXIT_PRECONFIG_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_X_EXIT_PRECONFIG_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_GETFD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_GETFD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_CLOSEFD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_CLOSEFD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_ADD_FD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_ADD_FD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_REMOVE_FD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_REMOVE_FD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_FDSETS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_FDSETS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS_EVENT;
extern uint16_t _TRACE_QMP_ENTER_ADD_CLIENT_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_ADD_CLIENT_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_NAME_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_NAME_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_IOTHREADS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_IOTHREADS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_STOP_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_STOP_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_CONT_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_CONT_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_X_EXIT_PRECONFIG_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_X_EXIT_PRECONFIG_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_GETFD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_GETFD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_CLOSEFD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_CLOSEFD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_ADD_FD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_ADD_FD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_REMOVE_FD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_REMOVE_FD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_FDSETS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_FDSETS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS_DSTATE;
#define TRACE_QMP_ENTER_ADD_CLIENT_ENABLED 1
#define TRACE_QMP_EXIT_ADD_CLIENT_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_NAME_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_NAME_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_IOTHREADS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_IOTHREADS_ENABLED 1
#define TRACE_QMP_ENTER_STOP_ENABLED 1
#define TRACE_QMP_EXIT_STOP_ENABLED 1
#define TRACE_QMP_ENTER_CONT_ENABLED 1
#define TRACE_QMP_EXIT_CONT_ENABLED 1
#define TRACE_QMP_ENTER_X_EXIT_PRECONFIG_ENABLED 1
#define TRACE_QMP_EXIT_X_EXIT_PRECONFIG_ENABLED 1
#define TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND_ENABLED 1
#define TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND_ENABLED 1
#define TRACE_QMP_ENTER_GETFD_ENABLED 1
#define TRACE_QMP_EXIT_GETFD_ENABLED 1
#define TRACE_QMP_ENTER_CLOSEFD_ENABLED 1
#define TRACE_QMP_EXIT_CLOSEFD_ENABLED 1
#define TRACE_QMP_ENTER_ADD_FD_ENABLED 1
#define TRACE_QMP_EXIT_ADD_FD_ENABLED 1
#define TRACE_QMP_ENTER_REMOVE_FD_ENABLED 1
#define TRACE_QMP_EXIT_REMOVE_FD_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_FDSETS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_FDSETS_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_ADD_CLIENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_ADD_CLIENT) || \
    false)

static inline void _nocheck__trace_qmp_enter_add_client(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_ADD_CLIENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_add_client " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 106 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_add_client " "%s" "\n", json);
#line 110 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_add_client(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_add_client(json);
    }
}

#define TRACE_QMP_EXIT_ADD_CLIENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_ADD_CLIENT) || \
    false)

static inline void _nocheck__trace_qmp_exit_add_client(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_ADD_CLIENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_add_client " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 137 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_add_client " "%s %d" "\n", result, succeeded);
#line 141 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_add_client(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_add_client(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_NAME_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_NAME) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_name(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_NAME) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_name " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 168 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_query_name " "%s" "\n", json);
#line 172 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_name(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_name(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_NAME_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_NAME) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_name(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_NAME) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_name " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 199 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_query_name " "%s %d" "\n", result, succeeded);
#line 203 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_name(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_name(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_IOTHREADS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_IOTHREADS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_iothreads(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_IOTHREADS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_iothreads " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 230 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_query_iothreads " "%s" "\n", json);
#line 234 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_iothreads(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_iothreads(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_IOTHREADS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_IOTHREADS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_iothreads(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_IOTHREADS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_iothreads " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 261 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_query_iothreads " "%s %d" "\n", result, succeeded);
#line 265 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_iothreads(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_iothreads(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_STOP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_STOP) || \
    false)

static inline void _nocheck__trace_qmp_enter_stop(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_STOP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_stop " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 292 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 9 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_stop " "%s" "\n", json);
#line 296 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_stop(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_stop(json);
    }
}

#define TRACE_QMP_EXIT_STOP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_STOP) || \
    false)

static inline void _nocheck__trace_qmp_exit_stop(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_STOP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_stop " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 323 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 10 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_stop " "%s %d" "\n", result, succeeded);
#line 327 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_stop(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_stop(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_CONT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_CONT) || \
    false)

static inline void _nocheck__trace_qmp_enter_cont(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_CONT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_cont " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 354 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 11 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_cont " "%s" "\n", json);
#line 358 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_cont(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_cont(json);
    }
}

#define TRACE_QMP_EXIT_CONT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_CONT) || \
    false)

static inline void _nocheck__trace_qmp_exit_cont(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_CONT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_cont " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 385 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 12 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_cont " "%s %d" "\n", result, succeeded);
#line 389 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_cont(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_cont(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_X_EXIT_PRECONFIG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_X_EXIT_PRECONFIG) || \
    false)

static inline void _nocheck__trace_qmp_enter_x_exit_preconfig(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_X_EXIT_PRECONFIG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_x_exit_preconfig " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 416 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 13 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_x_exit_preconfig " "%s" "\n", json);
#line 420 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_x_exit_preconfig(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_x_exit_preconfig(json);
    }
}

#define TRACE_QMP_EXIT_X_EXIT_PRECONFIG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_X_EXIT_PRECONFIG) || \
    false)

static inline void _nocheck__trace_qmp_exit_x_exit_preconfig(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_X_EXIT_PRECONFIG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_x_exit_preconfig " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 447 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 14 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_x_exit_preconfig " "%s %d" "\n", result, succeeded);
#line 451 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_x_exit_preconfig(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_x_exit_preconfig(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND) || \
    false)

static inline void _nocheck__trace_qmp_enter_human_monitor_command(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_human_monitor_command " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 478 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 15 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_human_monitor_command " "%s" "\n", json);
#line 482 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_human_monitor_command(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_human_monitor_command(json);
    }
}

#define TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND) || \
    false)

static inline void _nocheck__trace_qmp_exit_human_monitor_command(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_human_monitor_command " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 509 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 16 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_human_monitor_command " "%s %d" "\n", result, succeeded);
#line 513 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_human_monitor_command(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_human_monitor_command(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_GETFD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_GETFD) || \
    false)

static inline void _nocheck__trace_qmp_enter_getfd(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_GETFD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_getfd " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 540 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 17 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_getfd " "%s" "\n", json);
#line 544 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_getfd(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_getfd(json);
    }
}

#define TRACE_QMP_EXIT_GETFD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_GETFD) || \
    false)

static inline void _nocheck__trace_qmp_exit_getfd(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_GETFD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_getfd " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 571 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 18 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_getfd " "%s %d" "\n", result, succeeded);
#line 575 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_getfd(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_getfd(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_CLOSEFD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_CLOSEFD) || \
    false)

static inline void _nocheck__trace_qmp_enter_closefd(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_CLOSEFD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_closefd " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 602 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 19 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_closefd " "%s" "\n", json);
#line 606 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_closefd(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_closefd(json);
    }
}

#define TRACE_QMP_EXIT_CLOSEFD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_CLOSEFD) || \
    false)

static inline void _nocheck__trace_qmp_exit_closefd(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_CLOSEFD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_closefd " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 633 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 20 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_closefd " "%s %d" "\n", result, succeeded);
#line 637 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_closefd(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_closefd(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_ADD_FD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_ADD_FD) || \
    false)

static inline void _nocheck__trace_qmp_enter_add_fd(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_ADD_FD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_add_fd " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 664 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 21 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_add_fd " "%s" "\n", json);
#line 668 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_add_fd(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_add_fd(json);
    }
}

#define TRACE_QMP_EXIT_ADD_FD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_ADD_FD) || \
    false)

static inline void _nocheck__trace_qmp_exit_add_fd(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_ADD_FD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_add_fd " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 695 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 22 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_add_fd " "%s %d" "\n", result, succeeded);
#line 699 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_add_fd(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_add_fd(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_REMOVE_FD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_REMOVE_FD) || \
    false)

static inline void _nocheck__trace_qmp_enter_remove_fd(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_REMOVE_FD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_remove_fd " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 726 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 23 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_remove_fd " "%s" "\n", json);
#line 730 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_remove_fd(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_remove_fd(json);
    }
}

#define TRACE_QMP_EXIT_REMOVE_FD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_REMOVE_FD) || \
    false)

static inline void _nocheck__trace_qmp_exit_remove_fd(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_REMOVE_FD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_remove_fd " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 757 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 24 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_remove_fd " "%s %d" "\n", result, succeeded);
#line 761 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_remove_fd(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_remove_fd(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_FDSETS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_FDSETS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_fdsets(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_FDSETS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_fdsets " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 788 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 25 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_query_fdsets " "%s" "\n", json);
#line 792 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_fdsets(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_fdsets(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_FDSETS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_FDSETS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_fdsets(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_FDSETS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_fdsets " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 819 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 26 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_query_fdsets " "%s %d" "\n", result, succeeded);
#line 823 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_fdsets(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_fdsets(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_command_line_options(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_command_line_options " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 850 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 27 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_enter_query_command_line_options " "%s" "\n", json);
#line 854 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_command_line_options(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_command_line_options(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_command_line_options(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "qapi/qapi-commands-misc.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_command_line_options " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 881 "trace/trace-qapi_commands_misc_trace_events.h"
        } else {
#line 28 "qapi/qapi-commands-misc.trace-events"
            qemu_log("qmp_exit_query_command_line_options " "%s %d" "\n", result, succeeded);
#line 885 "trace/trace-qapi_commands_misc_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_command_line_options(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_command_line_options(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_MISC_TRACE_EVENTS_GENERATED_TRACERS_H */
