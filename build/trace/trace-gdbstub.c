/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-gdbstub.h"

uint16_t _TRACE_GDBSTUB_OP_START_DSTATE;
uint16_t _TRACE_GDBSTUB_OP_EXITING_DSTATE;
uint16_t _TRACE_GDBSTUB_OP_CONTINUE_DSTATE;
uint16_t _TRACE_GDBSTUB_OP_CONTINUE_CPU_DSTATE;
uint16_t _TRACE_GDBSTUB_OP_STEPPING_DSTATE;
uint16_t _TRACE_GDBSTUB_OP_EXTRA_INFO_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_WATCHPOINT_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_INTERNAL_ERROR_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_BREAK_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_PAUSED_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_SHUTDOWN_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_IO_ERROR_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_WATCHDOG_DSTATE;
uint16_t _TRACE_GDBSTUB_HIT_UNKNOWN_DSTATE;
uint16_t _TRACE_GDBSTUB_IO_REPLY_DSTATE;
uint16_t _TRACE_GDBSTUB_IO_BINARYREPLY_DSTATE;
uint16_t _TRACE_GDBSTUB_IO_COMMAND_DSTATE;
uint16_t _TRACE_GDBSTUB_IO_GOT_ACK_DSTATE;
uint16_t _TRACE_GDBSTUB_IO_GOT_UNEXPECTED_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_GOT_NACK_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_GARBAGE_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_OVERRUN_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_INVALID_REPEAT_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_INVALID_RLE_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_DSTATE;
uint16_t _TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_DSTATE;
TraceEvent _TRACE_GDBSTUB_OP_START_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_start",
    .sstate = TRACE_GDBSTUB_OP_START_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_START_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_OP_EXITING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_exiting",
    .sstate = TRACE_GDBSTUB_OP_EXITING_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_EXITING_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_OP_CONTINUE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_continue",
    .sstate = TRACE_GDBSTUB_OP_CONTINUE_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_CONTINUE_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_OP_CONTINUE_CPU_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_continue_cpu",
    .sstate = TRACE_GDBSTUB_OP_CONTINUE_CPU_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_CONTINUE_CPU_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_OP_STEPPING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_stepping",
    .sstate = TRACE_GDBSTUB_OP_STEPPING_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_STEPPING_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_OP_EXTRA_INFO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_op_extra_info",
    .sstate = TRACE_GDBSTUB_OP_EXTRA_INFO_ENABLED,
    .dstate = &_TRACE_GDBSTUB_OP_EXTRA_INFO_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_WATCHPOINT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_watchpoint",
    .sstate = TRACE_GDBSTUB_HIT_WATCHPOINT_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_WATCHPOINT_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_INTERNAL_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_internal_error",
    .sstate = TRACE_GDBSTUB_HIT_INTERNAL_ERROR_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_INTERNAL_ERROR_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_BREAK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_break",
    .sstate = TRACE_GDBSTUB_HIT_BREAK_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_BREAK_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_PAUSED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_paused",
    .sstate = TRACE_GDBSTUB_HIT_PAUSED_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_PAUSED_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_SHUTDOWN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_shutdown",
    .sstate = TRACE_GDBSTUB_HIT_SHUTDOWN_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_SHUTDOWN_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_IO_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_io_error",
    .sstate = TRACE_GDBSTUB_HIT_IO_ERROR_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_IO_ERROR_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_WATCHDOG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_watchdog",
    .sstate = TRACE_GDBSTUB_HIT_WATCHDOG_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_WATCHDOG_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_HIT_UNKNOWN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_hit_unknown",
    .sstate = TRACE_GDBSTUB_HIT_UNKNOWN_ENABLED,
    .dstate = &_TRACE_GDBSTUB_HIT_UNKNOWN_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_IO_REPLY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_io_reply",
    .sstate = TRACE_GDBSTUB_IO_REPLY_ENABLED,
    .dstate = &_TRACE_GDBSTUB_IO_REPLY_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_IO_BINARYREPLY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_io_binaryreply",
    .sstate = TRACE_GDBSTUB_IO_BINARYREPLY_ENABLED,
    .dstate = &_TRACE_GDBSTUB_IO_BINARYREPLY_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_IO_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_io_command",
    .sstate = TRACE_GDBSTUB_IO_COMMAND_ENABLED,
    .dstate = &_TRACE_GDBSTUB_IO_COMMAND_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_IO_GOT_ACK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_io_got_ack",
    .sstate = TRACE_GDBSTUB_IO_GOT_ACK_ENABLED,
    .dstate = &_TRACE_GDBSTUB_IO_GOT_ACK_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_IO_GOT_UNEXPECTED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_io_got_unexpected",
    .sstate = TRACE_GDBSTUB_IO_GOT_UNEXPECTED_ENABLED,
    .dstate = &_TRACE_GDBSTUB_IO_GOT_UNEXPECTED_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_GOT_NACK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_got_nack",
    .sstate = TRACE_GDBSTUB_ERR_GOT_NACK_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_GOT_NACK_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_GARBAGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_garbage",
    .sstate = TRACE_GDBSTUB_ERR_GARBAGE_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_GARBAGE_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_OVERRUN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_overrun",
    .sstate = TRACE_GDBSTUB_ERR_OVERRUN_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_OVERRUN_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_INVALID_REPEAT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_invalid_repeat",
    .sstate = TRACE_GDBSTUB_ERR_INVALID_REPEAT_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_INVALID_REPEAT_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_INVALID_RLE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_invalid_rle",
    .sstate = TRACE_GDBSTUB_ERR_INVALID_RLE_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_INVALID_RLE_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_checksum_invalid",
    .sstate = TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_DSTATE 
};
TraceEvent _TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gdbstub_err_checksum_incorrect",
    .sstate = TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_ENABLED,
    .dstate = &_TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_DSTATE 
};
TraceEvent *gdbstub_trace_events[] = {
    &_TRACE_GDBSTUB_OP_START_EVENT,
    &_TRACE_GDBSTUB_OP_EXITING_EVENT,
    &_TRACE_GDBSTUB_OP_CONTINUE_EVENT,
    &_TRACE_GDBSTUB_OP_CONTINUE_CPU_EVENT,
    &_TRACE_GDBSTUB_OP_STEPPING_EVENT,
    &_TRACE_GDBSTUB_OP_EXTRA_INFO_EVENT,
    &_TRACE_GDBSTUB_HIT_WATCHPOINT_EVENT,
    &_TRACE_GDBSTUB_HIT_INTERNAL_ERROR_EVENT,
    &_TRACE_GDBSTUB_HIT_BREAK_EVENT,
    &_TRACE_GDBSTUB_HIT_PAUSED_EVENT,
    &_TRACE_GDBSTUB_HIT_SHUTDOWN_EVENT,
    &_TRACE_GDBSTUB_HIT_IO_ERROR_EVENT,
    &_TRACE_GDBSTUB_HIT_WATCHDOG_EVENT,
    &_TRACE_GDBSTUB_HIT_UNKNOWN_EVENT,
    &_TRACE_GDBSTUB_IO_REPLY_EVENT,
    &_TRACE_GDBSTUB_IO_BINARYREPLY_EVENT,
    &_TRACE_GDBSTUB_IO_COMMAND_EVENT,
    &_TRACE_GDBSTUB_IO_GOT_ACK_EVENT,
    &_TRACE_GDBSTUB_IO_GOT_UNEXPECTED_EVENT,
    &_TRACE_GDBSTUB_ERR_GOT_NACK_EVENT,
    &_TRACE_GDBSTUB_ERR_GARBAGE_EVENT,
    &_TRACE_GDBSTUB_ERR_OVERRUN_EVENT,
    &_TRACE_GDBSTUB_ERR_INVALID_REPEAT_EVENT,
    &_TRACE_GDBSTUB_ERR_INVALID_RLE_EVENT,
    &_TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_EVENT,
    &_TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_EVENT,
  NULL,
};

static void trace_gdbstub_register_events(void)
{
    trace_event_register_group(gdbstub_trace_events);
}
trace_init(trace_gdbstub_register_events)
