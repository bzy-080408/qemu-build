/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_GPIO_GENERATED_TRACERS_H
#define TRACE_HW_GPIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_NPCM7XX_GPIO_READ_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_SET_INPUT_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_SET_OUTPUT_EVENT;
extern TraceEvent _TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_READ_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_SET_EVENT;
extern TraceEvent _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_EVENT;
extern TraceEvent _TRACE_PL061_UPDATE_EVENT;
extern TraceEvent _TRACE_PL061_SET_OUTPUT_EVENT;
extern TraceEvent _TRACE_PL061_INPUT_CHANGE_EVENT;
extern TraceEvent _TRACE_PL061_UPDATE_ISTATE_EVENT;
extern TraceEvent _TRACE_PL061_READ_EVENT;
extern TraceEvent _TRACE_PL061_WRITE_EVENT;
extern TraceEvent _TRACE_PL061_RESET_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_READ_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_WRITE_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_SET_EVENT;
extern TraceEvent _TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_EVENT;
extern TraceEvent _TRACE_ASPEED_GPIO_READ_EVENT;
extern TraceEvent _TRACE_ASPEED_GPIO_WRITE_EVENT;
extern uint16_t _TRACE_NPCM7XX_GPIO_READ_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_SET_INPUT_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_SET_OUTPUT_DSTATE;
extern uint16_t _TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_READ_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_SET_DSTATE;
extern uint16_t _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
extern uint16_t _TRACE_PL061_UPDATE_DSTATE;
extern uint16_t _TRACE_PL061_SET_OUTPUT_DSTATE;
extern uint16_t _TRACE_PL061_INPUT_CHANGE_DSTATE;
extern uint16_t _TRACE_PL061_UPDATE_ISTATE_DSTATE;
extern uint16_t _TRACE_PL061_READ_DSTATE;
extern uint16_t _TRACE_PL061_WRITE_DSTATE;
extern uint16_t _TRACE_PL061_RESET_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_READ_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_WRITE_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_SET_DSTATE;
extern uint16_t _TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
extern uint16_t _TRACE_ASPEED_GPIO_READ_DSTATE;
extern uint16_t _TRACE_ASPEED_GPIO_WRITE_DSTATE;
#define TRACE_NPCM7XX_GPIO_READ_ENABLED 1
#define TRACE_NPCM7XX_GPIO_WRITE_ENABLED 1
#define TRACE_NPCM7XX_GPIO_SET_INPUT_ENABLED 1
#define TRACE_NPCM7XX_GPIO_SET_OUTPUT_ENABLED 1
#define TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_ENABLED 1
#define TRACE_NRF51_GPIO_READ_ENABLED 1
#define TRACE_NRF51_GPIO_WRITE_ENABLED 1
#define TRACE_NRF51_GPIO_SET_ENABLED 1
#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_ENABLED 1
#define TRACE_PL061_UPDATE_ENABLED 1
#define TRACE_PL061_SET_OUTPUT_ENABLED 1
#define TRACE_PL061_INPUT_CHANGE_ENABLED 1
#define TRACE_PL061_UPDATE_ISTATE_ENABLED 1
#define TRACE_PL061_READ_ENABLED 1
#define TRACE_PL061_WRITE_ENABLED 1
#define TRACE_PL061_RESET_ENABLED 1
#define TRACE_SIFIVE_GPIO_READ_ENABLED 1
#define TRACE_SIFIVE_GPIO_WRITE_ENABLED 1
#define TRACE_SIFIVE_GPIO_SET_ENABLED 1
#define TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_ENABLED 1
#define TRACE_ASPEED_GPIO_READ_ENABLED 1
#define TRACE_ASPEED_GPIO_WRITE_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_NPCM7XX_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_READ) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_read(const char * id, uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_gpio_read " " %s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, value);
#line 94 "trace/trace-hw_gpio.h"
        } else {
#line 4 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("npcm7xx_gpio_read " " %s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n", id, offset, value);
#line 98 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_npcm7xx_gpio_read(const char * id, uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_read(id, offset, value);
    }
}

#define TRACE_NPCM7XX_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_write(const char * id, uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_gpio_write " "%s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, value);
#line 125 "trace/trace-hw_gpio.h"
        } else {
#line 5 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("npcm7xx_gpio_write " "%s offset: 0x%04" PRIx64 " value 0x%08" PRIx64 "\n", id, offset, value);
#line 129 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_npcm7xx_gpio_write(const char * id, uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_write(id, offset, value);
    }
}

#define TRACE_NPCM7XX_GPIO_SET_INPUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_SET_INPUT) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_set_input(const char * id, int32_t line, int32_t level)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_SET_INPUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_gpio_set_input " "%s line: %" PRIi32 " level: %" PRIi32 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, line, level);
#line 156 "trace/trace-hw_gpio.h"
        } else {
#line 6 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("npcm7xx_gpio_set_input " "%s line: %" PRIi32 " level: %" PRIi32 "\n", id, line, level);
#line 160 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_npcm7xx_gpio_set_input(const char * id, int32_t line, int32_t level)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_set_input(id, line, level);
    }
}

#define TRACE_NPCM7XX_GPIO_SET_OUTPUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_SET_OUTPUT) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_set_output(const char * id, int32_t line, int32_t level)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_SET_OUTPUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_gpio_set_output " "%s line: %" PRIi32 " level: %" PRIi32 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, line, level);
#line 187 "trace/trace-hw_gpio.h"
        } else {
#line 7 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("npcm7xx_gpio_set_output " "%s line: %" PRIi32 " level: %" PRIi32 "\n", id, line, level);
#line 191 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_npcm7xx_gpio_set_output(const char * id, int32_t line, int32_t level)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_set_output(id, line, level);
    }
}

#define TRACE_NPCM7XX_GPIO_UPDATE_EVENTS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_GPIO_UPDATE_EVENTS) || \
    false)

static inline void _nocheck__trace_npcm7xx_gpio_update_events(const char * id, uint32_t evst, uint32_t even)
{
    if (trace_event_get_state(TRACE_NPCM7XX_GPIO_UPDATE_EVENTS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_gpio_update_events " "%s evst: 0x%08" PRIx32 " even: 0x%08" PRIx32 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, evst, even);
#line 218 "trace/trace-hw_gpio.h"
        } else {
#line 8 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("npcm7xx_gpio_update_events " "%s evst: 0x%08" PRIx32 " even: 0x%08" PRIx32 "\n", id, evst, even);
#line 222 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_npcm7xx_gpio_update_events(const char * id, uint32_t evst, uint32_t even)
{
    if (true) {
        _nocheck__trace_npcm7xx_gpio_update_events(id, evst, even);
    }
}

#define TRACE_NRF51_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_READ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:nrf51_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, r);
#line 249 "trace/trace-hw_gpio.h"
        } else {
#line 11 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("nrf51_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, r);
#line 253 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_nrf51_gpio_read(uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_read(offset, r);
    }
}

#define TRACE_NRF51_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:nrf51_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, value);
#line 280 "trace/trace-hw_gpio.h"
        } else {
#line 12 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("nrf51_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, value);
#line 284 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_nrf51_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_write(offset, value);
    }
}

#define TRACE_NRF51_GPIO_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_SET) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:nrf51_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , line, value);
#line 311 "trace/trace-hw_gpio.h"
        } else {
#line 13 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("nrf51_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n", line, value);
#line 315 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_nrf51_gpio_set(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_set(line, value);
    }
}

#define TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) || \
    false)

static inline void _nocheck__trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:nrf51_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , line, value);
#line 342 "trace/trace-hw_gpio.h"
        } else {
#line 14 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("nrf51_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n", line, value);
#line 346 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_nrf51_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_nrf51_gpio_update_output_irq(line, value);
    }
}

#define TRACE_PL061_UPDATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_UPDATE) || \
    false)

static inline void _nocheck__trace_pl061_update(const char * id, uint32_t dir, uint32_t data, uint32_t pullups, uint32_t floating)
{
    if (trace_event_get_state(TRACE_PL061_UPDATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_update " "%s GPIODIR 0x%x GPIODATA 0x%x pullups 0x%x floating 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, dir, data, pullups, floating);
#line 373 "trace/trace-hw_gpio.h"
        } else {
#line 17 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_update " "%s GPIODIR 0x%x GPIODATA 0x%x pullups 0x%x floating 0x%x" "\n", id, dir, data, pullups, floating);
#line 377 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_update(const char * id, uint32_t dir, uint32_t data, uint32_t pullups, uint32_t floating)
{
    if (true) {
        _nocheck__trace_pl061_update(id, dir, data, pullups, floating);
    }
}

#define TRACE_PL061_SET_OUTPUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_SET_OUTPUT) || \
    false)

static inline void _nocheck__trace_pl061_set_output(const char * id, int gpio, int level)
{
    if (trace_event_get_state(TRACE_PL061_SET_OUTPUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_set_output " "%s setting output %d to %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, gpio, level);
#line 404 "trace/trace-hw_gpio.h"
        } else {
#line 18 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_set_output " "%s setting output %d to %d" "\n", id, gpio, level);
#line 408 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_set_output(const char * id, int gpio, int level)
{
    if (true) {
        _nocheck__trace_pl061_set_output(id, gpio, level);
    }
}

#define TRACE_PL061_INPUT_CHANGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_INPUT_CHANGE) || \
    false)

static inline void _nocheck__trace_pl061_input_change(const char * id, int gpio, int level)
{
    if (trace_event_get_state(TRACE_PL061_INPUT_CHANGE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_input_change " "%s input %d changed to %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, gpio, level);
#line 435 "trace/trace-hw_gpio.h"
        } else {
#line 19 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_input_change " "%s input %d changed to %d" "\n", id, gpio, level);
#line 439 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_input_change(const char * id, int gpio, int level)
{
    if (true) {
        _nocheck__trace_pl061_input_change(id, gpio, level);
    }
}

#define TRACE_PL061_UPDATE_ISTATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_UPDATE_ISTATE) || \
    false)

static inline void _nocheck__trace_pl061_update_istate(const char * id, uint32_t istate, uint32_t im, int level)
{
    if (trace_event_get_state(TRACE_PL061_UPDATE_ISTATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_update_istate " "%s GPIORIS 0x%x GPIOIE 0x%x interrupt level %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, istate, im, level);
#line 466 "trace/trace-hw_gpio.h"
        } else {
#line 20 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_update_istate " "%s GPIORIS 0x%x GPIOIE 0x%x interrupt level %d" "\n", id, istate, im, level);
#line 470 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_update_istate(const char * id, uint32_t istate, uint32_t im, int level)
{
    if (true) {
        _nocheck__trace_pl061_update_istate(id, istate, im, level);
    }
}

#define TRACE_PL061_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_READ) || \
    false)

static inline void _nocheck__trace_pl061_read(const char * id, uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_PL061_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_read " "%s offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, r);
#line 497 "trace/trace-hw_gpio.h"
        } else {
#line 21 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_read " "%s offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", id, offset, r);
#line 501 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_read(const char * id, uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_pl061_read(id, offset, r);
    }
}

#define TRACE_PL061_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_WRITE) || \
    false)

static inline void _nocheck__trace_pl061_write(const char * id, uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_PL061_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_write " "%s offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, value);
#line 528 "trace/trace-hw_gpio.h"
        } else {
#line 22 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_write " "%s offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", id, offset, value);
#line 532 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_write(const char * id, uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_pl061_write(id, offset, value);
    }
}

#define TRACE_PL061_RESET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL061_RESET) || \
    false)

static inline void _nocheck__trace_pl061_reset(const char * id)
{
    if (trace_event_get_state(TRACE_PL061_RESET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:pl061_reset " "%s reset" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 559 "trace/trace-hw_gpio.h"
        } else {
#line 23 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("pl061_reset " "%s reset" "\n", id);
#line 563 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_pl061_reset(const char * id)
{
    if (true) {
        _nocheck__trace_pl061_reset(id);
    }
}

#define TRACE_SIFIVE_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_READ) || \
    false)

static inline void _nocheck__trace_sifive_gpio_read(uint64_t offset, uint64_t r)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:sifive_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, r);
#line 590 "trace/trace-hw_gpio.h"
        } else {
#line 26 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("sifive_gpio_read " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, r);
#line 594 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_sifive_gpio_read(uint64_t offset, uint64_t r)
{
    if (true) {
        _nocheck__trace_sifive_gpio_read(offset, r);
    }
}

#define TRACE_SIFIVE_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_sifive_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:sifive_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, value);
#line 621 "trace/trace-hw_gpio.h"
        } else {
#line 27 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("sifive_gpio_write " "offset 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, value);
#line 625 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_sifive_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_write(offset, value);
    }
}

#define TRACE_SIFIVE_GPIO_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_SET) || \
    false)

static inline void _nocheck__trace_sifive_gpio_set(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:sifive_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , line, value);
#line 652 "trace/trace-hw_gpio.h"
        } else {
#line 28 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("sifive_gpio_set " "line %" PRIi64 " value %" PRIi64 "\n", line, value);
#line 656 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_sifive_gpio_set(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_set(line, value);
    }
}

#define TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ) || \
    false)

static inline void _nocheck__trace_sifive_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (trace_event_get_state(TRACE_SIFIVE_GPIO_UPDATE_OUTPUT_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:sifive_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , line, value);
#line 683 "trace/trace-hw_gpio.h"
        } else {
#line 29 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("sifive_gpio_update_output_irq " "line %" PRIi64 " value %" PRIi64 "\n", line, value);
#line 687 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_sifive_gpio_update_output_irq(int64_t line, int64_t value)
{
    if (true) {
        _nocheck__trace_sifive_gpio_update_output_irq(line, value);
    }
}

#define TRACE_ASPEED_GPIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_GPIO_READ) || \
    false)

static inline void _nocheck__trace_aspeed_gpio_read(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_GPIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_gpio_read " "offset: 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, value);
#line 714 "trace/trace-hw_gpio.h"
        } else {
#line 32 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("aspeed_gpio_read " "offset: 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, value);
#line 718 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_aspeed_gpio_read(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_gpio_read(offset, value);
    }
}

#define TRACE_ASPEED_GPIO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_GPIO_WRITE) || \
    false)

static inline void _nocheck__trace_aspeed_gpio_write(uint64_t offset, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_GPIO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 33 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_gpio_write " "offset: 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset, value);
#line 745 "trace/trace-hw_gpio.h"
        } else {
#line 33 "/home/bzy/qemu/qemu/hw/gpio/trace-events"
            qemu_log("aspeed_gpio_write " "offset: 0x%" PRIx64 " value 0x%" PRIx64 "\n", offset, value);
#line 749 "trace/trace-hw_gpio.h"
        }
    }
}

static inline void trace_aspeed_gpio_write(uint64_t offset, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_gpio_write(offset, value);
    }
}
#endif /* TRACE_HW_GPIO_GENERATED_TRACERS_H */