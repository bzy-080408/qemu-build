/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_ISA_GENERATED_TRACERS_H
#define TRACE_HW_ISA_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_SUPERIO_CREATE_PARALLEL_EVENT;
extern TraceEvent _TRACE_SUPERIO_CREATE_SERIAL_EVENT;
extern TraceEvent _TRACE_SUPERIO_CREATE_FLOPPY_EVENT;
extern TraceEvent _TRACE_SUPERIO_CREATE_IDE_EVENT;
extern TraceEvent _TRACE_PC87312_IO_READ_EVENT;
extern TraceEvent _TRACE_PC87312_IO_WRITE_EVENT;
extern TraceEvent _TRACE_APM_IO_READ_EVENT;
extern TraceEvent _TRACE_APM_IO_WRITE_EVENT;
extern TraceEvent _TRACE_VIA_ISA_WRITE_EVENT;
extern TraceEvent _TRACE_VIA_PM_WRITE_EVENT;
extern TraceEvent _TRACE_VIA_PM_IO_READ_EVENT;
extern TraceEvent _TRACE_VIA_PM_IO_WRITE_EVENT;
extern TraceEvent _TRACE_VIA_SUPERIO_READ_EVENT;
extern TraceEvent _TRACE_VIA_SUPERIO_WRITE_EVENT;
extern TraceEvent _TRACE_ICH9_CC_WRITE_EVENT;
extern TraceEvent _TRACE_ICH9_CC_READ_EVENT;
extern uint16_t _TRACE_SUPERIO_CREATE_PARALLEL_DSTATE;
extern uint16_t _TRACE_SUPERIO_CREATE_SERIAL_DSTATE;
extern uint16_t _TRACE_SUPERIO_CREATE_FLOPPY_DSTATE;
extern uint16_t _TRACE_SUPERIO_CREATE_IDE_DSTATE;
extern uint16_t _TRACE_PC87312_IO_READ_DSTATE;
extern uint16_t _TRACE_PC87312_IO_WRITE_DSTATE;
extern uint16_t _TRACE_APM_IO_READ_DSTATE;
extern uint16_t _TRACE_APM_IO_WRITE_DSTATE;
extern uint16_t _TRACE_VIA_ISA_WRITE_DSTATE;
extern uint16_t _TRACE_VIA_PM_WRITE_DSTATE;
extern uint16_t _TRACE_VIA_PM_IO_READ_DSTATE;
extern uint16_t _TRACE_VIA_PM_IO_WRITE_DSTATE;
extern uint16_t _TRACE_VIA_SUPERIO_READ_DSTATE;
extern uint16_t _TRACE_VIA_SUPERIO_WRITE_DSTATE;
extern uint16_t _TRACE_ICH9_CC_WRITE_DSTATE;
extern uint16_t _TRACE_ICH9_CC_READ_DSTATE;
#define TRACE_SUPERIO_CREATE_PARALLEL_ENABLED 1
#define TRACE_SUPERIO_CREATE_SERIAL_ENABLED 1
#define TRACE_SUPERIO_CREATE_FLOPPY_ENABLED 1
#define TRACE_SUPERIO_CREATE_IDE_ENABLED 1
#define TRACE_PC87312_IO_READ_ENABLED 1
#define TRACE_PC87312_IO_WRITE_ENABLED 1
#define TRACE_APM_IO_READ_ENABLED 1
#define TRACE_APM_IO_WRITE_ENABLED 1
#define TRACE_VIA_ISA_WRITE_ENABLED 1
#define TRACE_VIA_PM_WRITE_ENABLED 1
#define TRACE_VIA_PM_IO_READ_ENABLED 1
#define TRACE_VIA_PM_IO_WRITE_ENABLED 1
#define TRACE_VIA_SUPERIO_READ_ENABLED 1
#define TRACE_VIA_SUPERIO_WRITE_ENABLED 1
#define TRACE_ICH9_CC_WRITE_ENABLED 1
#define TRACE_ICH9_CC_READ_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_SUPERIO_CREATE_PARALLEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUPERIO_CREATE_PARALLEL) || \
    false)

static inline void _nocheck__trace_superio_create_parallel(int id, uint16_t base, unsigned int irq)
{
    if (trace_event_get_state(TRACE_SUPERIO_CREATE_PARALLEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:superio_create_parallel " "id=%d, base 0x%03x, irq %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, base, irq);
#line 76 "trace/trace-hw_isa.h"
        } else {
#line 4 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("superio_create_parallel " "id=%d, base 0x%03x, irq %u" "\n", id, base, irq);
#line 80 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_superio_create_parallel(int id, uint16_t base, unsigned int irq)
{
    if (true) {
        _nocheck__trace_superio_create_parallel(id, base, irq);
    }
}

#define TRACE_SUPERIO_CREATE_SERIAL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUPERIO_CREATE_SERIAL) || \
    false)

static inline void _nocheck__trace_superio_create_serial(int id, uint16_t base, unsigned int irq)
{
    if (trace_event_get_state(TRACE_SUPERIO_CREATE_SERIAL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:superio_create_serial " "id=%d, base 0x%03x, irq %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, base, irq);
#line 107 "trace/trace-hw_isa.h"
        } else {
#line 5 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("superio_create_serial " "id=%d, base 0x%03x, irq %u" "\n", id, base, irq);
#line 111 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_superio_create_serial(int id, uint16_t base, unsigned int irq)
{
    if (true) {
        _nocheck__trace_superio_create_serial(id, base, irq);
    }
}

#define TRACE_SUPERIO_CREATE_FLOPPY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUPERIO_CREATE_FLOPPY) || \
    false)

static inline void _nocheck__trace_superio_create_floppy(int id, uint16_t base, unsigned int irq)
{
    if (trace_event_get_state(TRACE_SUPERIO_CREATE_FLOPPY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:superio_create_floppy " "id=%d, base 0x%03x, irq %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, base, irq);
#line 138 "trace/trace-hw_isa.h"
        } else {
#line 6 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("superio_create_floppy " "id=%d, base 0x%03x, irq %u" "\n", id, base, irq);
#line 142 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_superio_create_floppy(int id, uint16_t base, unsigned int irq)
{
    if (true) {
        _nocheck__trace_superio_create_floppy(id, base, irq);
    }
}

#define TRACE_SUPERIO_CREATE_IDE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUPERIO_CREATE_IDE) || \
    false)

static inline void _nocheck__trace_superio_create_ide(int id, uint16_t base, unsigned int irq)
{
    if (trace_event_get_state(TRACE_SUPERIO_CREATE_IDE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:superio_create_ide " "id=%d, base 0x%03x, irq %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, base, irq);
#line 169 "trace/trace-hw_isa.h"
        } else {
#line 7 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("superio_create_ide " "id=%d, base 0x%03x, irq %u" "\n", id, base, irq);
#line 173 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_superio_create_ide(int id, uint16_t base, unsigned int irq)
{
    if (true) {
        _nocheck__trace_superio_create_ide(id, base, irq);
    }
}

#define TRACE_PC87312_IO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PC87312_IO_READ) || \
    false)

static inline void _nocheck__trace_pc87312_io_read(uint32_t addr, uint32_t val)
{
    if (trace_event_get_state(TRACE_PC87312_IO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:pc87312_io_read " "read addr=0x%x val=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 200 "trace/trace-hw_isa.h"
        } else {
#line 10 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("pc87312_io_read " "read addr=0x%x val=0x%x" "\n", addr, val);
#line 204 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_pc87312_io_read(uint32_t addr, uint32_t val)
{
    if (true) {
        _nocheck__trace_pc87312_io_read(addr, val);
    }
}

#define TRACE_PC87312_IO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PC87312_IO_WRITE) || \
    false)

static inline void _nocheck__trace_pc87312_io_write(uint32_t addr, uint32_t val)
{
    if (trace_event_get_state(TRACE_PC87312_IO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:pc87312_io_write " "write addr=0x%x val=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 231 "trace/trace-hw_isa.h"
        } else {
#line 11 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("pc87312_io_write " "write addr=0x%x val=0x%x" "\n", addr, val);
#line 235 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_pc87312_io_write(uint32_t addr, uint32_t val)
{
    if (true) {
        _nocheck__trace_pc87312_io_write(addr, val);
    }
}

#define TRACE_APM_IO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_APM_IO_READ) || \
    false)

static inline void _nocheck__trace_apm_io_read(uint8_t addr, uint8_t val)
{
    if (trace_event_get_state(TRACE_APM_IO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:apm_io_read " "read addr=0x%x val=0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 262 "trace/trace-hw_isa.h"
        } else {
#line 14 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("apm_io_read " "read addr=0x%x val=0x%02x" "\n", addr, val);
#line 266 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_apm_io_read(uint8_t addr, uint8_t val)
{
    if (true) {
        _nocheck__trace_apm_io_read(addr, val);
    }
}

#define TRACE_APM_IO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_APM_IO_WRITE) || \
    false)

static inline void _nocheck__trace_apm_io_write(uint8_t addr, uint8_t val)
{
    if (trace_event_get_state(TRACE_APM_IO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:apm_io_write " "write addr=0x%x val=0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 293 "trace/trace-hw_isa.h"
        } else {
#line 15 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("apm_io_write " "write addr=0x%x val=0x%02x" "\n", addr, val);
#line 297 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_apm_io_write(uint8_t addr, uint8_t val)
{
    if (true) {
        _nocheck__trace_apm_io_write(addr, val);
    }
}

#define TRACE_VIA_ISA_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_ISA_WRITE) || \
    false)

static inline void _nocheck__trace_via_isa_write(uint32_t addr, uint32_t val, int len)
{
    if (trace_event_get_state(TRACE_VIA_ISA_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_isa_write " "addr 0x%x val 0x%x len 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 324 "trace/trace-hw_isa.h"
        } else {
#line 18 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_isa_write " "addr 0x%x val 0x%x len 0x%x" "\n", addr, val, len);
#line 328 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_isa_write(uint32_t addr, uint32_t val, int len)
{
    if (true) {
        _nocheck__trace_via_isa_write(addr, val, len);
    }
}

#define TRACE_VIA_PM_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_PM_WRITE) || \
    false)

static inline void _nocheck__trace_via_pm_write(uint32_t addr, uint32_t val, int len)
{
    if (trace_event_get_state(TRACE_VIA_PM_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_pm_write " "addr 0x%x val 0x%x len 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 355 "trace/trace-hw_isa.h"
        } else {
#line 19 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_pm_write " "addr 0x%x val 0x%x len 0x%x" "\n", addr, val, len);
#line 359 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_pm_write(uint32_t addr, uint32_t val, int len)
{
    if (true) {
        _nocheck__trace_via_pm_write(addr, val, len);
    }
}

#define TRACE_VIA_PM_IO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_PM_IO_READ) || \
    false)

static inline void _nocheck__trace_via_pm_io_read(uint32_t addr, uint32_t val, int len)
{
    if (trace_event_get_state(TRACE_VIA_PM_IO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_pm_io_read " "addr 0x%x val 0x%x len 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 386 "trace/trace-hw_isa.h"
        } else {
#line 20 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_pm_io_read " "addr 0x%x val 0x%x len 0x%x" "\n", addr, val, len);
#line 390 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_pm_io_read(uint32_t addr, uint32_t val, int len)
{
    if (true) {
        _nocheck__trace_via_pm_io_read(addr, val, len);
    }
}

#define TRACE_VIA_PM_IO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_PM_IO_WRITE) || \
    false)

static inline void _nocheck__trace_via_pm_io_write(uint32_t addr, uint32_t val, int len)
{
    if (trace_event_get_state(TRACE_VIA_PM_IO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_pm_io_write " "addr 0x%x val 0x%x len 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 417 "trace/trace-hw_isa.h"
        } else {
#line 21 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_pm_io_write " "addr 0x%x val 0x%x len 0x%x" "\n", addr, val, len);
#line 421 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_pm_io_write(uint32_t addr, uint32_t val, int len)
{
    if (true) {
        _nocheck__trace_via_pm_io_write(addr, val, len);
    }
}

#define TRACE_VIA_SUPERIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_SUPERIO_READ) || \
    false)

static inline void _nocheck__trace_via_superio_read(uint8_t addr, uint8_t val)
{
    if (trace_event_get_state(TRACE_VIA_SUPERIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_superio_read " "addr 0x%x val 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 448 "trace/trace-hw_isa.h"
        } else {
#line 22 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_superio_read " "addr 0x%x val 0x%x" "\n", addr, val);
#line 452 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_superio_read(uint8_t addr, uint8_t val)
{
    if (true) {
        _nocheck__trace_via_superio_read(addr, val);
    }
}

#define TRACE_VIA_SUPERIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIA_SUPERIO_WRITE) || \
    false)

static inline void _nocheck__trace_via_superio_write(uint8_t addr, uint32_t val)
{
    if (trace_event_get_state(TRACE_VIA_SUPERIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:via_superio_write " "addr 0x%x val 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val);
#line 479 "trace/trace-hw_isa.h"
        } else {
#line 23 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("via_superio_write " "addr 0x%x val 0x%x" "\n", addr, val);
#line 483 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_via_superio_write(uint8_t addr, uint32_t val)
{
    if (true) {
        _nocheck__trace_via_superio_write(addr, val);
    }
}

#define TRACE_ICH9_CC_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ICH9_CC_WRITE) || \
    false)

static inline void _nocheck__trace_ich9_cc_write(uint64_t addr, uint64_t val, unsigned len)
{
    if (trace_event_get_state(TRACE_ICH9_CC_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:ich9_cc_write " "addr=0x%"PRIx64 " val=0x%"PRIx64 " len=%u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 510 "trace/trace-hw_isa.h"
        } else {
#line 26 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("ich9_cc_write " "addr=0x%"PRIx64 " val=0x%"PRIx64 " len=%u" "\n", addr, val, len);
#line 514 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_ich9_cc_write(uint64_t addr, uint64_t val, unsigned len)
{
    if (true) {
        _nocheck__trace_ich9_cc_write(addr, val, len);
    }
}

#define TRACE_ICH9_CC_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ICH9_CC_READ) || \
    false)

static inline void _nocheck__trace_ich9_cc_read(uint64_t addr, uint64_t val, unsigned len)
{
    if (trace_event_get_state(TRACE_ICH9_CC_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("%d@%zu.%06zu:ich9_cc_read " "addr=0x%"PRIx64 " val=0x%"PRIx64 " len=%u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, val, len);
#line 541 "trace/trace-hw_isa.h"
        } else {
#line 27 "/home/bzy/qemu/qemu/hw/isa/trace-events"
            qemu_log("ich9_cc_read " "addr=0x%"PRIx64 " val=0x%"PRIx64 " len=%u" "\n", addr, val, len);
#line 545 "trace/trace-hw_isa.h"
        }
    }
}

static inline void trace_ich9_cc_read(uint64_t addr, uint64_t val, unsigned len)
{
    if (true) {
        _nocheck__trace_ich9_cc_read(addr, val, len);
    }
}
#endif /* TRACE_HW_ISA_GENERATED_TRACERS_H */
