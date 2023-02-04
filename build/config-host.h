/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

#define CONFIG_ACCEPT4

#undef CONFIG_AF_ALG

#define CONFIG_AF_VSOCK

#undef CONFIG_ALIGNED_MALLOC

#undef CONFIG_ATOMIC128

#define CONFIG_ATOMIC64

#define CONFIG_ATTR

#undef CONFIG_AUDIO_ALSA

#undef CONFIG_AUDIO_COREAUDIO

#define CONFIG_AUDIO_DRIVERS "oss", 

#undef CONFIG_AUDIO_DSOUND

#undef CONFIG_AUDIO_JACK

#define CONFIG_AUDIO_OSS

#undef CONFIG_AUDIO_PA

#undef CONFIG_AUDIO_SDL

#undef CONFIG_AUDIO_SNDIO

#define CONFIG_AVX2_OPT

#undef CONFIG_AVX512F_OPT

#define CONFIG_BDRV_RO_WHITELIST 

#define CONFIG_BDRV_RW_WHITELIST 

#undef CONFIG_BDRV_WHITELIST_TOOLS

#define CONFIG_BINDIR "/usr/bin"

#undef CONFIG_BLKIO

#undef CONFIG_BRLAPI

#undef CONFIG_CAPSTONE

#undef CONFIG_CFI

#define CONFIG_CLOCK_ADJTIME

#define CONFIG_CLOSE_RANGE

#define CONFIG_CMPXCHG128

#undef CONFIG_COCOA

#define CONFIG_COROUTINE_BACKEND ucontext

#define CONFIG_COROUTINE_POOL 1

#define CONFIG_CPUID_H

#undef CONFIG_CURL

#define CONFIG_CURSES

#undef CONFIG_DBUS_DISPLAY

#undef CONFIG_DEBUG_MUTEX

#undef CONFIG_DEBUG_STACK_USAGE

#define CONFIG_DUP3

#undef CONFIG_EBPF

#define CONFIG_EPOLL

#define CONFIG_EPOLL_CREATE1

#define CONFIG_EVENTFD

#define CONFIG_FALLOCATE

#define CONFIG_FALLOCATE_PUNCH_HOLE

#define CONFIG_FALLOCATE_ZERO_RANGE

#define CONFIG_FDATASYNC

#define CONFIG_FDT

#define CONFIG_FIEMAP

#undef CONFIG_FUSE

#undef CONFIG_FUSE_LSEEK

#undef CONFIG_FUZZ

#undef CONFIG_GBM

#undef CONFIG_GCOV

#undef CONFIG_GCRYPT

#define CONFIG_GETAUXVAL

#define CONFIG_GETRANDOM

#define CONFIG_GETTID

#define CONFIG_GIO

#undef CONFIG_GLUSTERFS

#undef CONFIG_GNUTLS

#undef CONFIG_GNUTLS_CRYPTO

#undef CONFIG_GPROF

#undef CONFIG_GTK

#undef CONFIG_GTK_CLIPBOARD

#undef CONFIG_HOGWEED

#define CONFIG_HOST_DSOSUF ".so"

#define CONFIG_INOTIFY

#define CONFIG_INOTIFY1

#define CONFIG_INT128

#define CONFIG_IOVEC

#undef CONFIG_KEYUTILS

#define CONFIG_KVM_TARGETS "i386-softmmu" ,"x86_64-softmmu"

#define CONFIG_L2TPV3

#undef CONFIG_LIBATTR

#undef CONFIG_LIBCAP_NG

#undef CONFIG_LIBDAXCTL

#undef CONFIG_LIBDW

#undef CONFIG_LIBISCSI

#undef CONFIG_LIBNFS

#undef CONFIG_LIBPMEM

#undef CONFIG_LIBSSH

#undef CONFIG_LIBUDEV

#define CONFIG_LINUX 1

#undef CONFIG_LINUX_AIO

#undef CONFIG_LINUX_IO_URING

#define CONFIG_LINUX_MAGIC_H

#define CONFIG_LIVE_BLOCK_MIGRATION

#undef CONFIG_LZO

#define CONFIG_MADVISE

#define CONFIG_MALLOC_TRIM

#define CONFIG_MEMALIGN

#undef CONFIG_MEMBARRIER

#define CONFIG_MEMFD

#undef CONFIG_MODULE_UPGRADES

#undef CONFIG_MPATH

#undef CONFIG_MPATH_NEW_API

#undef CONFIG_NETMAP

#undef CONFIG_NETTLE

#undef CONFIG_NUMA

#undef CONFIG_OPENGL

#define CONFIG_OPEN_BY_HANDLE

#define CONFIG_PLUGIN 1

#undef CONFIG_PNG

#define CONFIG_POSIX 1

#define CONFIG_POSIX_FALLOCATE

#define CONFIG_POSIX_MADVISE

#define CONFIG_POSIX_MEMALIGN

#define CONFIG_PPOLL

#define CONFIG_PRCTL_PR_SET_TIMERSLACK

#define CONFIG_PREADV

#define CONFIG_PREFIX "/usr"

#undef CONFIG_PROFILER

#define CONFIG_PTHREAD_AFFINITY_NP

#undef CONFIG_PTHREAD_CONDATTR_SETCLOCK

#undef CONFIG_PTHREAD_FCHDIR_NP

#undef CONFIG_PTHREAD_SETNAME_NP_WO_TID

#define CONFIG_PTHREAD_SETNAME_NP_W_TID

#define CONFIG_QEMU_CONFDIR "/etc/qemu"

#define CONFIG_QEMU_DATADIR "/usr/share/qemu"

#define CONFIG_QEMU_DESKTOPDIR "/usr/share/applications"

#define CONFIG_QEMU_FIRMWAREPATH "/usr/share/qemu-firmware", 

#define CONFIG_QEMU_HELPERDIR "/usr/libexec"

#define CONFIG_QEMU_ICONDIR "/usr/share/icons"

#define CONFIG_QEMU_LOCALEDIR "/usr/share/locale"

#define CONFIG_QEMU_LOCALSTATEDIR "/var"

#define CONFIG_QEMU_MODDIR "/usr/lib/x86_64-linux-gnu/qemu"

#undef CONFIG_QEMU_PRIVATE_XTS

#undef CONFIG_QOM_CAST_DEBUG

#undef CONFIG_RBD

#undef CONFIG_RDMA

#define CONFIG_REPLICATION

#define CONFIG_RTNETLINK

#undef CONFIG_SDL

#undef CONFIG_SDL_IMAGE

#undef CONFIG_SECCOMP

#define CONFIG_SECRET_KEYRING

#define CONFIG_SELINUX

#define CONFIG_SENDFILE

#define CONFIG_SETNS

#define CONFIG_SIGNALFD

#undef CONFIG_SLIRP

#define CONFIG_SMBD_COMMAND "/usr/sbin/smbd"

#undef CONFIG_SNAPPY

#undef CONFIG_SPICE

#undef CONFIG_SPICE_PROTOCOL

#define CONFIG_SPLICE

#define CONFIG_STATX

#define CONFIG_STATX_MNT_ID

#define CONFIG_SYNCFS

#define CONFIG_SYNC_FILE_RANGE

#define CONFIG_SYSCONFDIR "/etc"

#define CONFIG_SYSMACROS

#undef CONFIG_TASN1

#define CONFIG_TCG 1

#define CONFIG_TIMERFD

#define CONFIG_TLS_PRIORITY "NORMAL"

#define CONFIG_TPM

#define CONFIG_TRACE_FILE "trace"

#define CONFIG_TRACE_LOG

#undef CONFIG_USBFS

#undef CONFIG_USB_LIBUSB

#undef CONFIG_VALGRIND_H

#define CONFIG_VALLOC

#undef CONFIG_VDE

#define CONFIG_VDUSE_BLK_EXPORT

#define CONFIG_VHOST_CRYPTO

#define CONFIG_VHOST_KERNEL

#define CONFIG_VHOST_NET

#define CONFIG_VHOST_NET_USER

#define CONFIG_VHOST_NET_VDPA

#define CONFIG_VHOST_USER

#define CONFIG_VHOST_USER_BLK_SERVER

#define CONFIG_VHOST_VDPA

#undef CONFIG_VIRTFS

#undef CONFIG_VMNET

#define CONFIG_VNC

#undef CONFIG_VNC_JPEG

#undef CONFIG_VNC_SASL

#undef CONFIG_VTE

#undef CONFIG_X11

#undef CONFIG_XEN_BACKEND

#undef CONFIG_XKBCOMMON

#undef CONFIG_ZSTD

#undef HAVE_BROKEN_SIZE_MAX

#define HAVE_BTRFS_H

#define HAVE_COPY_FILE_RANGE

#undef HAVE_DRM_H

#define HAVE_FSXATTR

#define HAVE_GETIFADDRS

#define HAVE_HOST_BLOCK_DEVICE

#define HAVE_IPPROTO_MPTCP

#undef HAVE_MADVISE_WITHOUT_PROTOTYPE

#define HAVE_MLOCKALL

#define HAVE_OPENPTY

#undef HAVE_OPTRESET

#define HAVE_PTY_H

#undef HAVE_SIGEV_NOTIFY_THREAD_ID

#define HAVE_STRCHRNUL

#define HAVE_STRUCT_STAT_ST_ATIM

#define HAVE_SYSTEM_FUNCTION

#undef HAVE_SYS_DISK_H

#undef HAVE_SYS_IOCCOM_H

#undef HAVE_SYS_KCOV_H

#undef HAVE_SYS_MOUNT_FSCONFIG

#define HAVE_UTMPX

#undef HAVE_VSS_SDK

#define HOST_X86_64 1

#define QEMU_VERSION "7.2.50"

#define QEMU_VERSION_MAJOR 7

#define QEMU_VERSION_MICRO 50

#define QEMU_VERSION_MINOR 2

