#
# Makefile for libscheme
#

#
# This must be an ANSI C compiler.
#
CC=cc

#
# Optimization and debugging flags go here.
#
CFLAGS=-O

#
# The math library is needed for the numeric functions
# in scheme_number.c.
#
LIBS=-lm

#
# If your system needs ranlib, put it here.  Otherwise,
# use a colon.
#
RANLIB=:

OBJS =  scheme_alloc.o \
	scheme_bool.o \
	scheme_char.o \
	scheme_env.o \
	scheme_error.o \
	scheme_eval.o \
	scheme_fun.o \
	scheme_hash.o \
	scheme_list.o \
	scheme_number.o \
	scheme_port.o \
	scheme_print.o \
	scheme_promise.o \
	scheme_read.o \
	scheme_string.o \
	scheme_struct.o \
	scheme_symbol.o \
	scheme_syntax.o \
	scheme_type.o \
	scheme_vector.o

SRCS =  scheme_alloc.c \
	scheme_bool.c \
	scheme_char.c \
	scheme_env.c \
	scheme_error.c \
	scheme_eval.c \
	scheme_fun.c \
	scheme_hash.c \
	scheme_list.c \
	scheme_number.c \
	scheme_port.c \
	scheme_print.c \
	scheme_promise.c \
	scheme_read.c \
	scheme_string.c \
	scheme_struct.c \
	scheme_symbol.c \
	scheme_syntax.c \
	scheme_type.c \
	scheme_vector.c

libscheme.a: $(OBJS) gc/gc.a
	$(AR) rv libscheme.a $(OBJS) gc/*.o
	$(RANLIB) libscheme.a

gc/gc.a:
	cd gc; $(MAKE)

test: libscheme.a main.o 
	$(CC) $(CFLAGS) -o test main.o libscheme.a -lm

depend:
	makedepend -- $(CFLAGS) -- $(SRCS)

clean:
	/bin/rm -f $(OBJS) main.o libscheme.a test *~ \
	libscheme.aux libscheme.dvi libscheme.log tmp1 tmp2 tmp3
	cd gc; $(MAKE) clean

# DO NOT DELETE THIS LINE -- make depend depends on it.

scheme_alloc.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_alloc.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_alloc.o: /usr/include/sys/_posix_availability.h
scheme_alloc.o: /usr/include/Availability.h
scheme_alloc.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_alloc.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_alloc.o: /usr/include/i386/_types.h
scheme_alloc.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_alloc.o: /usr/include/sys/_types/_va_list.h
scheme_alloc.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_alloc.o: /usr/include/sys/_types/_int8_t.h
scheme_alloc.o: /usr/include/sys/_types/_int16_t.h
scheme_alloc.o: /usr/include/sys/_types/_int32_t.h
scheme_alloc.o: /usr/include/sys/_types/_int64_t.h
scheme_alloc.o: /usr/include/sys/_types/_u_int8_t.h
scheme_alloc.o: /usr/include/sys/_types/_u_int16_t.h
scheme_alloc.o: /usr/include/sys/_types/_u_int32_t.h
scheme_alloc.o: /usr/include/sys/_types/_u_int64_t.h
scheme_alloc.o: /usr/include/sys/_types/_intptr_t.h
scheme_alloc.o: /usr/include/sys/_types/_uintptr_t.h
scheme_alloc.o: /usr/include/sys/_types/_size_t.h
scheme_alloc.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_alloc.o: /usr/include/sys/_types/_off_t.h
scheme_alloc.o: /usr/include/sys/_types/_ssize_t.h
scheme_alloc.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_alloc.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_alloc.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_alloc.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_alloc.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_alloc.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_alloc.o: /usr/include/i386/_mcontext.h
scheme_alloc.o: /usr/include/mach/machine/_structs.h
scheme_alloc.o: /usr/include/mach/i386/_structs.h
scheme_alloc.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_alloc.o: /usr/include/sys/_types/_sigaltstack.h
scheme_alloc.o: /usr/include/sys/_types/_ucontext.h
scheme_alloc.o: /usr/include/sys/_types/_sigset_t.h
scheme_alloc.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_alloc.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_alloc.o: /usr/include/_types/_uint16_t.h
scheme_alloc.o: /usr/include/_types/_uint32_t.h
scheme_alloc.o: /usr/include/_types/_uint64_t.h
scheme_alloc.o: /usr/include/_types/_intmax_t.h
scheme_alloc.o: /usr/include/_types/_uintmax_t.h
scheme_alloc.o: /usr/include/sys/_types/_timeval.h
scheme_alloc.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_alloc.o: /usr/include/sys/_endian.h
scheme_alloc.o: /usr/include/libkern/_OSByteOrder.h
scheme_alloc.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_alloc.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_alloc.o: /usr/include/sys/_types/_rune_t.h
scheme_alloc.o: /usr/include/sys/_types/_wchar_t.h
scheme_alloc.o: /usr/include/sys/_types/_dev_t.h
scheme_alloc.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_alloc.o: /usr/include/sys/_types/_rsize_t.h
scheme_alloc.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_alloc.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_bool.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_bool.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_bool.o: /usr/include/sys/_posix_availability.h
scheme_bool.o: /usr/include/Availability.h
scheme_bool.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_bool.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_bool.o: /usr/include/i386/_types.h
scheme_bool.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_bool.o: /usr/include/sys/_types/_va_list.h
scheme_bool.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_bool.o: /usr/include/sys/_types/_int8_t.h
scheme_bool.o: /usr/include/sys/_types/_int16_t.h
scheme_bool.o: /usr/include/sys/_types/_int32_t.h
scheme_bool.o: /usr/include/sys/_types/_int64_t.h
scheme_bool.o: /usr/include/sys/_types/_u_int8_t.h
scheme_bool.o: /usr/include/sys/_types/_u_int16_t.h
scheme_bool.o: /usr/include/sys/_types/_u_int32_t.h
scheme_bool.o: /usr/include/sys/_types/_u_int64_t.h
scheme_bool.o: /usr/include/sys/_types/_intptr_t.h
scheme_bool.o: /usr/include/sys/_types/_uintptr_t.h
scheme_bool.o: /usr/include/sys/_types/_size_t.h
scheme_bool.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_bool.o: /usr/include/sys/_types/_off_t.h
scheme_bool.o: /usr/include/sys/_types/_ssize_t.h
scheme_bool.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_bool.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_bool.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_bool.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_bool.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_bool.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_bool.o: /usr/include/i386/_mcontext.h
scheme_bool.o: /usr/include/mach/machine/_structs.h
scheme_bool.o: /usr/include/mach/i386/_structs.h
scheme_bool.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_bool.o: /usr/include/sys/_types/_sigaltstack.h
scheme_bool.o: /usr/include/sys/_types/_ucontext.h
scheme_bool.o: /usr/include/sys/_types/_sigset_t.h
scheme_bool.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_bool.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_bool.o: /usr/include/_types/_uint16_t.h
scheme_bool.o: /usr/include/_types/_uint32_t.h
scheme_bool.o: /usr/include/_types/_uint64_t.h
scheme_bool.o: /usr/include/_types/_intmax_t.h
scheme_bool.o: /usr/include/_types/_uintmax_t.h
scheme_bool.o: /usr/include/sys/_types/_timeval.h
scheme_bool.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_bool.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_bool.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_bool.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_bool.o: /usr/include/sys/_types/_rune_t.h
scheme_bool.o: /usr/include/sys/_types/_wchar_t.h
scheme_bool.o: /usr/include/sys/_types/_dev_t.h
scheme_bool.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_bool.o: /usr/include/sys/_types/_rsize_t.h
scheme_bool.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_bool.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_char.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_char.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_char.o: /usr/include/sys/_posix_availability.h
scheme_char.o: /usr/include/Availability.h
scheme_char.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_char.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_char.o: /usr/include/i386/_types.h
scheme_char.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_char.o: /usr/include/sys/_types/_va_list.h
scheme_char.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_char.o: /usr/include/sys/_types/_int8_t.h
scheme_char.o: /usr/include/sys/_types/_int16_t.h
scheme_char.o: /usr/include/sys/_types/_int32_t.h
scheme_char.o: /usr/include/sys/_types/_int64_t.h
scheme_char.o: /usr/include/sys/_types/_u_int8_t.h
scheme_char.o: /usr/include/sys/_types/_u_int16_t.h
scheme_char.o: /usr/include/sys/_types/_u_int32_t.h
scheme_char.o: /usr/include/sys/_types/_u_int64_t.h
scheme_char.o: /usr/include/sys/_types/_intptr_t.h
scheme_char.o: /usr/include/sys/_types/_uintptr_t.h
scheme_char.o: /usr/include/sys/_types/_size_t.h
scheme_char.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_char.o: /usr/include/sys/_types/_off_t.h
scheme_char.o: /usr/include/sys/_types/_ssize_t.h
scheme_char.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_char.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_char.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_char.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_char.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_char.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_char.o: /usr/include/i386/_mcontext.h
scheme_char.o: /usr/include/mach/machine/_structs.h
scheme_char.o: /usr/include/mach/i386/_structs.h
scheme_char.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_char.o: /usr/include/sys/_types/_sigaltstack.h
scheme_char.o: /usr/include/sys/_types/_ucontext.h
scheme_char.o: /usr/include/sys/_types/_sigset_t.h
scheme_char.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_char.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_char.o: /usr/include/_types/_uint16_t.h
scheme_char.o: /usr/include/_types/_uint32_t.h
scheme_char.o: /usr/include/_types/_uint64_t.h
scheme_char.o: /usr/include/_types/_intmax_t.h
scheme_char.o: /usr/include/_types/_uintmax_t.h
scheme_char.o: /usr/include/sys/_types/_timeval.h
scheme_char.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_char.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_char.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_char.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_char.o: /usr/include/sys/_types/_rune_t.h
scheme_char.o: /usr/include/sys/_types/_wchar_t.h
scheme_char.o: /usr/include/sys/_types/_dev_t.h
scheme_char.o: /usr/include/sys/_types/_mode_t.h /usr/include/ctype.h
scheme_char.o: /usr/include/_ctype.h /usr/include/runetype.h
scheme_char.o: /usr/include/sys/_types/_wint_t.h
scheme_env.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_env.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_env.o: /usr/include/sys/_posix_availability.h
scheme_env.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
scheme_env.o: /usr/include/_types.h /usr/include/sys/_types.h
scheme_env.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
scheme_env.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_env.o: /usr/include/sys/_types/_va_list.h /usr/include/machine/types.h
scheme_env.o: /usr/include/i386/types.h /usr/include/sys/_types/_int8_t.h
scheme_env.o: /usr/include/sys/_types/_int16_t.h
scheme_env.o: /usr/include/sys/_types/_int32_t.h
scheme_env.o: /usr/include/sys/_types/_int64_t.h
scheme_env.o: /usr/include/sys/_types/_u_int8_t.h
scheme_env.o: /usr/include/sys/_types/_u_int16_t.h
scheme_env.o: /usr/include/sys/_types/_u_int32_t.h
scheme_env.o: /usr/include/sys/_types/_u_int64_t.h
scheme_env.o: /usr/include/sys/_types/_intptr_t.h
scheme_env.o: /usr/include/sys/_types/_uintptr_t.h
scheme_env.o: /usr/include/sys/_types/_size_t.h
scheme_env.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_env.o: /usr/include/sys/_types/_off_t.h
scheme_env.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
scheme_env.o: /usr/include/secure/_common.h /usr/include/setjmp.h
scheme_env.o: /usr/include/stdlib.h /usr/include/sys/wait.h
scheme_env.o: /usr/include/sys/_types/_pid_t.h
scheme_env.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_env.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_env.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_env.o: /usr/include/i386/_mcontext.h
scheme_env.o: /usr/include/mach/machine/_structs.h
scheme_env.o: /usr/include/mach/i386/_structs.h
scheme_env.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_env.o: /usr/include/sys/_types/_sigaltstack.h
scheme_env.o: /usr/include/sys/_types/_ucontext.h
scheme_env.o: /usr/include/sys/_types/_sigset_t.h
scheme_env.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_env.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_env.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
scheme_env.o: /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h
scheme_env.o: /usr/include/_types/_uintmax_t.h
scheme_env.o: /usr/include/sys/_types/_timeval.h
scheme_env.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_env.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_env.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_env.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_env.o: /usr/include/sys/_types/_rune_t.h
scheme_env.o: /usr/include/sys/_types/_wchar_t.h
scheme_env.o: /usr/include/sys/_types/_dev_t.h
scheme_env.o: /usr/include/sys/_types/_mode_t.h
scheme_error.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_error.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_error.o: /usr/include/sys/_posix_availability.h
scheme_error.o: /usr/include/Availability.h
scheme_error.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_error.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_error.o: /usr/include/i386/_types.h
scheme_error.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_error.o: /usr/include/sys/_types/_va_list.h
scheme_error.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_error.o: /usr/include/sys/_types/_int8_t.h
scheme_error.o: /usr/include/sys/_types/_int16_t.h
scheme_error.o: /usr/include/sys/_types/_int32_t.h
scheme_error.o: /usr/include/sys/_types/_int64_t.h
scheme_error.o: /usr/include/sys/_types/_u_int8_t.h
scheme_error.o: /usr/include/sys/_types/_u_int16_t.h
scheme_error.o: /usr/include/sys/_types/_u_int32_t.h
scheme_error.o: /usr/include/sys/_types/_u_int64_t.h
scheme_error.o: /usr/include/sys/_types/_intptr_t.h
scheme_error.o: /usr/include/sys/_types/_uintptr_t.h
scheme_error.o: /usr/include/sys/_types/_size_t.h
scheme_error.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_error.o: /usr/include/sys/_types/_off_t.h
scheme_error.o: /usr/include/sys/_types/_ssize_t.h
scheme_error.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_error.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_error.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_error.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_error.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_error.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_error.o: /usr/include/i386/_mcontext.h
scheme_error.o: /usr/include/mach/machine/_structs.h
scheme_error.o: /usr/include/mach/i386/_structs.h
scheme_error.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_error.o: /usr/include/sys/_types/_sigaltstack.h
scheme_error.o: /usr/include/sys/_types/_ucontext.h
scheme_error.o: /usr/include/sys/_types/_sigset_t.h
scheme_error.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_error.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_error.o: /usr/include/_types/_uint16_t.h
scheme_error.o: /usr/include/_types/_uint32_t.h
scheme_error.o: /usr/include/_types/_uint64_t.h
scheme_error.o: /usr/include/_types/_intmax_t.h
scheme_error.o: /usr/include/_types/_uintmax_t.h
scheme_error.o: /usr/include/sys/_types/_timeval.h
scheme_error.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_error.o: /usr/include/sys/_endian.h
scheme_error.o: /usr/include/libkern/_OSByteOrder.h
scheme_error.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_error.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_error.o: /usr/include/sys/_types/_rune_t.h
scheme_error.o: /usr/include/sys/_types/_wchar_t.h
scheme_error.o: /usr/include/sys/_types/_dev_t.h
scheme_error.o: /usr/include/sys/_types/_mode_t.h
scheme_eval.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_eval.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_eval.o: /usr/include/sys/_posix_availability.h
scheme_eval.o: /usr/include/Availability.h
scheme_eval.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_eval.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_eval.o: /usr/include/i386/_types.h
scheme_eval.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_eval.o: /usr/include/sys/_types/_va_list.h
scheme_eval.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_eval.o: /usr/include/sys/_types/_int8_t.h
scheme_eval.o: /usr/include/sys/_types/_int16_t.h
scheme_eval.o: /usr/include/sys/_types/_int32_t.h
scheme_eval.o: /usr/include/sys/_types/_int64_t.h
scheme_eval.o: /usr/include/sys/_types/_u_int8_t.h
scheme_eval.o: /usr/include/sys/_types/_u_int16_t.h
scheme_eval.o: /usr/include/sys/_types/_u_int32_t.h
scheme_eval.o: /usr/include/sys/_types/_u_int64_t.h
scheme_eval.o: /usr/include/sys/_types/_intptr_t.h
scheme_eval.o: /usr/include/sys/_types/_uintptr_t.h
scheme_eval.o: /usr/include/sys/_types/_size_t.h
scheme_eval.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_eval.o: /usr/include/sys/_types/_off_t.h
scheme_eval.o: /usr/include/sys/_types/_ssize_t.h
scheme_eval.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_eval.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_eval.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_eval.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_eval.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_eval.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_eval.o: /usr/include/i386/_mcontext.h
scheme_eval.o: /usr/include/mach/machine/_structs.h
scheme_eval.o: /usr/include/mach/i386/_structs.h
scheme_eval.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_eval.o: /usr/include/sys/_types/_sigaltstack.h
scheme_eval.o: /usr/include/sys/_types/_ucontext.h
scheme_eval.o: /usr/include/sys/_types/_sigset_t.h
scheme_eval.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_eval.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_eval.o: /usr/include/_types/_uint16_t.h
scheme_eval.o: /usr/include/_types/_uint32_t.h
scheme_eval.o: /usr/include/_types/_uint64_t.h
scheme_eval.o: /usr/include/_types/_intmax_t.h
scheme_eval.o: /usr/include/_types/_uintmax_t.h
scheme_eval.o: /usr/include/sys/_types/_timeval.h
scheme_eval.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_eval.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_eval.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_eval.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_eval.o: /usr/include/sys/_types/_rune_t.h
scheme_eval.o: /usr/include/sys/_types/_wchar_t.h
scheme_eval.o: /usr/include/sys/_types/_dev_t.h
scheme_eval.o: /usr/include/sys/_types/_mode_t.h
scheme_fun.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_fun.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_fun.o: /usr/include/sys/_posix_availability.h
scheme_fun.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
scheme_fun.o: /usr/include/_types.h /usr/include/sys/_types.h
scheme_fun.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
scheme_fun.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_fun.o: /usr/include/sys/_types/_va_list.h /usr/include/machine/types.h
scheme_fun.o: /usr/include/i386/types.h /usr/include/sys/_types/_int8_t.h
scheme_fun.o: /usr/include/sys/_types/_int16_t.h
scheme_fun.o: /usr/include/sys/_types/_int32_t.h
scheme_fun.o: /usr/include/sys/_types/_int64_t.h
scheme_fun.o: /usr/include/sys/_types/_u_int8_t.h
scheme_fun.o: /usr/include/sys/_types/_u_int16_t.h
scheme_fun.o: /usr/include/sys/_types/_u_int32_t.h
scheme_fun.o: /usr/include/sys/_types/_u_int64_t.h
scheme_fun.o: /usr/include/sys/_types/_intptr_t.h
scheme_fun.o: /usr/include/sys/_types/_uintptr_t.h
scheme_fun.o: /usr/include/sys/_types/_size_t.h
scheme_fun.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_fun.o: /usr/include/sys/_types/_off_t.h
scheme_fun.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
scheme_fun.o: /usr/include/secure/_common.h /usr/include/setjmp.h
scheme_fun.o: /usr/include/stdlib.h /usr/include/sys/wait.h
scheme_fun.o: /usr/include/sys/_types/_pid_t.h
scheme_fun.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_fun.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_fun.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_fun.o: /usr/include/i386/_mcontext.h
scheme_fun.o: /usr/include/mach/machine/_structs.h
scheme_fun.o: /usr/include/mach/i386/_structs.h
scheme_fun.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_fun.o: /usr/include/sys/_types/_sigaltstack.h
scheme_fun.o: /usr/include/sys/_types/_ucontext.h
scheme_fun.o: /usr/include/sys/_types/_sigset_t.h
scheme_fun.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_fun.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_fun.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
scheme_fun.o: /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h
scheme_fun.o: /usr/include/_types/_uintmax_t.h
scheme_fun.o: /usr/include/sys/_types/_timeval.h
scheme_fun.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_fun.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_fun.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_fun.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_fun.o: /usr/include/sys/_types/_rune_t.h
scheme_fun.o: /usr/include/sys/_types/_wchar_t.h
scheme_fun.o: /usr/include/sys/_types/_dev_t.h
scheme_fun.o: /usr/include/sys/_types/_mode_t.h
scheme_hash.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_hash.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_hash.o: /usr/include/sys/_posix_availability.h
scheme_hash.o: /usr/include/Availability.h
scheme_hash.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_hash.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_hash.o: /usr/include/i386/_types.h
scheme_hash.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_hash.o: /usr/include/sys/_types/_va_list.h
scheme_hash.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_hash.o: /usr/include/sys/_types/_int8_t.h
scheme_hash.o: /usr/include/sys/_types/_int16_t.h
scheme_hash.o: /usr/include/sys/_types/_int32_t.h
scheme_hash.o: /usr/include/sys/_types/_int64_t.h
scheme_hash.o: /usr/include/sys/_types/_u_int8_t.h
scheme_hash.o: /usr/include/sys/_types/_u_int16_t.h
scheme_hash.o: /usr/include/sys/_types/_u_int32_t.h
scheme_hash.o: /usr/include/sys/_types/_u_int64_t.h
scheme_hash.o: /usr/include/sys/_types/_intptr_t.h
scheme_hash.o: /usr/include/sys/_types/_uintptr_t.h
scheme_hash.o: /usr/include/sys/_types/_size_t.h
scheme_hash.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_hash.o: /usr/include/sys/_types/_off_t.h
scheme_hash.o: /usr/include/sys/_types/_ssize_t.h
scheme_hash.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_hash.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_hash.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_hash.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_hash.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_hash.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_hash.o: /usr/include/i386/_mcontext.h
scheme_hash.o: /usr/include/mach/machine/_structs.h
scheme_hash.o: /usr/include/mach/i386/_structs.h
scheme_hash.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_hash.o: /usr/include/sys/_types/_sigaltstack.h
scheme_hash.o: /usr/include/sys/_types/_ucontext.h
scheme_hash.o: /usr/include/sys/_types/_sigset_t.h
scheme_hash.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_hash.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_hash.o: /usr/include/_types/_uint16_t.h
scheme_hash.o: /usr/include/_types/_uint32_t.h
scheme_hash.o: /usr/include/_types/_uint64_t.h
scheme_hash.o: /usr/include/_types/_intmax_t.h
scheme_hash.o: /usr/include/_types/_uintmax_t.h
scheme_hash.o: /usr/include/sys/_types/_timeval.h
scheme_hash.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_hash.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_hash.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_hash.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_hash.o: /usr/include/sys/_types/_rune_t.h
scheme_hash.o: /usr/include/sys/_types/_wchar_t.h
scheme_hash.o: /usr/include/sys/_types/_dev_t.h
scheme_hash.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_hash.o: /usr/include/sys/_types/_rsize_t.h
scheme_hash.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_hash.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_list.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_list.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_list.o: /usr/include/sys/_posix_availability.h
scheme_list.o: /usr/include/Availability.h
scheme_list.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_list.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_list.o: /usr/include/i386/_types.h
scheme_list.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_list.o: /usr/include/sys/_types/_va_list.h
scheme_list.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_list.o: /usr/include/sys/_types/_int8_t.h
scheme_list.o: /usr/include/sys/_types/_int16_t.h
scheme_list.o: /usr/include/sys/_types/_int32_t.h
scheme_list.o: /usr/include/sys/_types/_int64_t.h
scheme_list.o: /usr/include/sys/_types/_u_int8_t.h
scheme_list.o: /usr/include/sys/_types/_u_int16_t.h
scheme_list.o: /usr/include/sys/_types/_u_int32_t.h
scheme_list.o: /usr/include/sys/_types/_u_int64_t.h
scheme_list.o: /usr/include/sys/_types/_intptr_t.h
scheme_list.o: /usr/include/sys/_types/_uintptr_t.h
scheme_list.o: /usr/include/sys/_types/_size_t.h
scheme_list.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_list.o: /usr/include/sys/_types/_off_t.h
scheme_list.o: /usr/include/sys/_types/_ssize_t.h
scheme_list.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_list.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_list.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_list.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_list.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_list.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_list.o: /usr/include/i386/_mcontext.h
scheme_list.o: /usr/include/mach/machine/_structs.h
scheme_list.o: /usr/include/mach/i386/_structs.h
scheme_list.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_list.o: /usr/include/sys/_types/_sigaltstack.h
scheme_list.o: /usr/include/sys/_types/_ucontext.h
scheme_list.o: /usr/include/sys/_types/_sigset_t.h
scheme_list.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_list.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_list.o: /usr/include/_types/_uint16_t.h
scheme_list.o: /usr/include/_types/_uint32_t.h
scheme_list.o: /usr/include/_types/_uint64_t.h
scheme_list.o: /usr/include/_types/_intmax_t.h
scheme_list.o: /usr/include/_types/_uintmax_t.h
scheme_list.o: /usr/include/sys/_types/_timeval.h
scheme_list.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_list.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_list.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_list.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_list.o: /usr/include/sys/_types/_rune_t.h
scheme_list.o: /usr/include/sys/_types/_wchar_t.h
scheme_list.o: /usr/include/sys/_types/_dev_t.h
scheme_list.o: /usr/include/sys/_types/_mode_t.h
scheme_number.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_number.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_number.o: /usr/include/sys/_posix_availability.h
scheme_number.o: /usr/include/Availability.h
scheme_number.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_number.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_number.o: /usr/include/i386/_types.h
scheme_number.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_number.o: /usr/include/sys/_types/_va_list.h
scheme_number.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_number.o: /usr/include/sys/_types/_int8_t.h
scheme_number.o: /usr/include/sys/_types/_int16_t.h
scheme_number.o: /usr/include/sys/_types/_int32_t.h
scheme_number.o: /usr/include/sys/_types/_int64_t.h
scheme_number.o: /usr/include/sys/_types/_u_int8_t.h
scheme_number.o: /usr/include/sys/_types/_u_int16_t.h
scheme_number.o: /usr/include/sys/_types/_u_int32_t.h
scheme_number.o: /usr/include/sys/_types/_u_int64_t.h
scheme_number.o: /usr/include/sys/_types/_intptr_t.h
scheme_number.o: /usr/include/sys/_types/_uintptr_t.h
scheme_number.o: /usr/include/sys/_types/_size_t.h
scheme_number.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_number.o: /usr/include/sys/_types/_off_t.h
scheme_number.o: /usr/include/sys/_types/_ssize_t.h
scheme_number.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_number.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_number.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_number.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_number.o: /usr/include/sys/appleapiopts.h
scheme_number.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_number.o: /usr/include/machine/_mcontext.h
scheme_number.o: /usr/include/i386/_mcontext.h
scheme_number.o: /usr/include/mach/machine/_structs.h
scheme_number.o: /usr/include/mach/i386/_structs.h
scheme_number.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_number.o: /usr/include/sys/_types/_sigaltstack.h
scheme_number.o: /usr/include/sys/_types/_ucontext.h
scheme_number.o: /usr/include/sys/_types/_sigset_t.h
scheme_number.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_number.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_number.o: /usr/include/_types/_uint16_t.h
scheme_number.o: /usr/include/_types/_uint32_t.h
scheme_number.o: /usr/include/_types/_uint64_t.h
scheme_number.o: /usr/include/_types/_intmax_t.h
scheme_number.o: /usr/include/_types/_uintmax_t.h
scheme_number.o: /usr/include/sys/_types/_timeval.h
scheme_number.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_number.o: /usr/include/sys/_endian.h
scheme_number.o: /usr/include/libkern/_OSByteOrder.h
scheme_number.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_number.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_number.o: /usr/include/sys/_types/_rune_t.h
scheme_number.o: /usr/include/sys/_types/_wchar_t.h
scheme_number.o: /usr/include/sys/_types/_dev_t.h
scheme_number.o: /usr/include/sys/_types/_mode_t.h scheme_nummacs.h
scheme_number.o: /usr/include/math.h /usr/include/string.h
scheme_number.o: /usr/include/sys/_types/_rsize_t.h
scheme_number.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_number.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_port.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_port.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_port.o: /usr/include/sys/_posix_availability.h
scheme_port.o: /usr/include/Availability.h
scheme_port.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_port.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_port.o: /usr/include/i386/_types.h
scheme_port.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_port.o: /usr/include/sys/_types/_va_list.h
scheme_port.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_port.o: /usr/include/sys/_types/_int8_t.h
scheme_port.o: /usr/include/sys/_types/_int16_t.h
scheme_port.o: /usr/include/sys/_types/_int32_t.h
scheme_port.o: /usr/include/sys/_types/_int64_t.h
scheme_port.o: /usr/include/sys/_types/_u_int8_t.h
scheme_port.o: /usr/include/sys/_types/_u_int16_t.h
scheme_port.o: /usr/include/sys/_types/_u_int32_t.h
scheme_port.o: /usr/include/sys/_types/_u_int64_t.h
scheme_port.o: /usr/include/sys/_types/_intptr_t.h
scheme_port.o: /usr/include/sys/_types/_uintptr_t.h
scheme_port.o: /usr/include/sys/_types/_size_t.h
scheme_port.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_port.o: /usr/include/sys/_types/_off_t.h
scheme_port.o: /usr/include/sys/_types/_ssize_t.h
scheme_port.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_port.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_port.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_port.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_port.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_port.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_port.o: /usr/include/i386/_mcontext.h
scheme_port.o: /usr/include/mach/machine/_structs.h
scheme_port.o: /usr/include/mach/i386/_structs.h
scheme_port.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_port.o: /usr/include/sys/_types/_sigaltstack.h
scheme_port.o: /usr/include/sys/_types/_ucontext.h
scheme_port.o: /usr/include/sys/_types/_sigset_t.h
scheme_port.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_port.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_port.o: /usr/include/_types/_uint16_t.h
scheme_port.o: /usr/include/_types/_uint32_t.h
scheme_port.o: /usr/include/_types/_uint64_t.h
scheme_port.o: /usr/include/_types/_intmax_t.h
scheme_port.o: /usr/include/_types/_uintmax_t.h
scheme_port.o: /usr/include/sys/_types/_timeval.h
scheme_port.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_port.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_port.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_port.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_port.o: /usr/include/sys/_types/_rune_t.h
scheme_port.o: /usr/include/sys/_types/_wchar_t.h
scheme_port.o: /usr/include/sys/_types/_dev_t.h
scheme_port.o: /usr/include/sys/_types/_mode_t.h
scheme_print.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_print.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_print.o: /usr/include/sys/_posix_availability.h
scheme_print.o: /usr/include/Availability.h
scheme_print.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_print.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_print.o: /usr/include/i386/_types.h
scheme_print.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_print.o: /usr/include/sys/_types/_va_list.h
scheme_print.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_print.o: /usr/include/sys/_types/_int8_t.h
scheme_print.o: /usr/include/sys/_types/_int16_t.h
scheme_print.o: /usr/include/sys/_types/_int32_t.h
scheme_print.o: /usr/include/sys/_types/_int64_t.h
scheme_print.o: /usr/include/sys/_types/_u_int8_t.h
scheme_print.o: /usr/include/sys/_types/_u_int16_t.h
scheme_print.o: /usr/include/sys/_types/_u_int32_t.h
scheme_print.o: /usr/include/sys/_types/_u_int64_t.h
scheme_print.o: /usr/include/sys/_types/_intptr_t.h
scheme_print.o: /usr/include/sys/_types/_uintptr_t.h
scheme_print.o: /usr/include/sys/_types/_size_t.h
scheme_print.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_print.o: /usr/include/sys/_types/_off_t.h
scheme_print.o: /usr/include/sys/_types/_ssize_t.h
scheme_print.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_print.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_print.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_print.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_print.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_print.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_print.o: /usr/include/i386/_mcontext.h
scheme_print.o: /usr/include/mach/machine/_structs.h
scheme_print.o: /usr/include/mach/i386/_structs.h
scheme_print.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_print.o: /usr/include/sys/_types/_sigaltstack.h
scheme_print.o: /usr/include/sys/_types/_ucontext.h
scheme_print.o: /usr/include/sys/_types/_sigset_t.h
scheme_print.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_print.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_print.o: /usr/include/_types/_uint16_t.h
scheme_print.o: /usr/include/_types/_uint32_t.h
scheme_print.o: /usr/include/_types/_uint64_t.h
scheme_print.o: /usr/include/_types/_intmax_t.h
scheme_print.o: /usr/include/_types/_uintmax_t.h
scheme_print.o: /usr/include/sys/_types/_timeval.h
scheme_print.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_print.o: /usr/include/sys/_endian.h
scheme_print.o: /usr/include/libkern/_OSByteOrder.h
scheme_print.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_print.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_print.o: /usr/include/sys/_types/_rune_t.h
scheme_print.o: /usr/include/sys/_types/_wchar_t.h
scheme_print.o: /usr/include/sys/_types/_dev_t.h
scheme_print.o: /usr/include/sys/_types/_mode_t.h
scheme_promise.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_promise.o: /usr/include/sys/cdefs.h
scheme_promise.o: /usr/include/sys/_symbol_aliasing.h
scheme_promise.o: /usr/include/sys/_posix_availability.h
scheme_promise.o: /usr/include/Availability.h
scheme_promise.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_promise.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_promise.o: /usr/include/i386/_types.h
scheme_promise.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_promise.o: /usr/include/sys/_types/_va_list.h
scheme_promise.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_promise.o: /usr/include/sys/_types/_int8_t.h
scheme_promise.o: /usr/include/sys/_types/_int16_t.h
scheme_promise.o: /usr/include/sys/_types/_int32_t.h
scheme_promise.o: /usr/include/sys/_types/_int64_t.h
scheme_promise.o: /usr/include/sys/_types/_u_int8_t.h
scheme_promise.o: /usr/include/sys/_types/_u_int16_t.h
scheme_promise.o: /usr/include/sys/_types/_u_int32_t.h
scheme_promise.o: /usr/include/sys/_types/_u_int64_t.h
scheme_promise.o: /usr/include/sys/_types/_intptr_t.h
scheme_promise.o: /usr/include/sys/_types/_uintptr_t.h
scheme_promise.o: /usr/include/sys/_types/_size_t.h
scheme_promise.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_promise.o: /usr/include/sys/_types/_off_t.h
scheme_promise.o: /usr/include/sys/_types/_ssize_t.h
scheme_promise.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_promise.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_promise.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_promise.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_promise.o: /usr/include/sys/appleapiopts.h
scheme_promise.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_promise.o: /usr/include/machine/_mcontext.h
scheme_promise.o: /usr/include/i386/_mcontext.h
scheme_promise.o: /usr/include/mach/machine/_structs.h
scheme_promise.o: /usr/include/mach/i386/_structs.h
scheme_promise.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_promise.o: /usr/include/sys/_types/_sigaltstack.h
scheme_promise.o: /usr/include/sys/_types/_ucontext.h
scheme_promise.o: /usr/include/sys/_types/_sigset_t.h
scheme_promise.o: /usr/include/sys/_types/_uid_t.h
scheme_promise.o: /usr/include/sys/resource.h /usr/include/stdint.h
scheme_promise.o: /usr/include/_types/_uint8_t.h
scheme_promise.o: /usr/include/_types/_uint16_t.h
scheme_promise.o: /usr/include/_types/_uint32_t.h
scheme_promise.o: /usr/include/_types/_uint64_t.h
scheme_promise.o: /usr/include/_types/_intmax_t.h
scheme_promise.o: /usr/include/_types/_uintmax_t.h
scheme_promise.o: /usr/include/sys/_types/_timeval.h
scheme_promise.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_promise.o: /usr/include/sys/_endian.h
scheme_promise.o: /usr/include/libkern/_OSByteOrder.h
scheme_promise.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_promise.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_promise.o: /usr/include/sys/_types/_rune_t.h
scheme_promise.o: /usr/include/sys/_types/_wchar_t.h
scheme_promise.o: /usr/include/sys/_types/_dev_t.h
scheme_promise.o: /usr/include/sys/_types/_mode_t.h
scheme_read.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_read.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_read.o: /usr/include/sys/_posix_availability.h
scheme_read.o: /usr/include/Availability.h
scheme_read.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_read.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_read.o: /usr/include/i386/_types.h
scheme_read.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_read.o: /usr/include/sys/_types/_va_list.h
scheme_read.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_read.o: /usr/include/sys/_types/_int8_t.h
scheme_read.o: /usr/include/sys/_types/_int16_t.h
scheme_read.o: /usr/include/sys/_types/_int32_t.h
scheme_read.o: /usr/include/sys/_types/_int64_t.h
scheme_read.o: /usr/include/sys/_types/_u_int8_t.h
scheme_read.o: /usr/include/sys/_types/_u_int16_t.h
scheme_read.o: /usr/include/sys/_types/_u_int32_t.h
scheme_read.o: /usr/include/sys/_types/_u_int64_t.h
scheme_read.o: /usr/include/sys/_types/_intptr_t.h
scheme_read.o: /usr/include/sys/_types/_uintptr_t.h
scheme_read.o: /usr/include/sys/_types/_size_t.h
scheme_read.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_read.o: /usr/include/sys/_types/_off_t.h
scheme_read.o: /usr/include/sys/_types/_ssize_t.h
scheme_read.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_read.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_read.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_read.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_read.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_read.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_read.o: /usr/include/i386/_mcontext.h
scheme_read.o: /usr/include/mach/machine/_structs.h
scheme_read.o: /usr/include/mach/i386/_structs.h
scheme_read.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_read.o: /usr/include/sys/_types/_sigaltstack.h
scheme_read.o: /usr/include/sys/_types/_ucontext.h
scheme_read.o: /usr/include/sys/_types/_sigset_t.h
scheme_read.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_read.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_read.o: /usr/include/_types/_uint16_t.h
scheme_read.o: /usr/include/_types/_uint32_t.h
scheme_read.o: /usr/include/_types/_uint64_t.h
scheme_read.o: /usr/include/_types/_intmax_t.h
scheme_read.o: /usr/include/_types/_uintmax_t.h
scheme_read.o: /usr/include/sys/_types/_timeval.h
scheme_read.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_read.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_read.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_read.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_read.o: /usr/include/sys/_types/_rune_t.h
scheme_read.o: /usr/include/sys/_types/_wchar_t.h
scheme_read.o: /usr/include/sys/_types/_dev_t.h
scheme_read.o: /usr/include/sys/_types/_mode_t.h /usr/include/ctype.h
scheme_read.o: /usr/include/_ctype.h /usr/include/runetype.h
scheme_read.o: /usr/include/sys/_types/_wint_t.h
scheme_string.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_string.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_string.o: /usr/include/sys/_posix_availability.h
scheme_string.o: /usr/include/Availability.h
scheme_string.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_string.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_string.o: /usr/include/i386/_types.h
scheme_string.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_string.o: /usr/include/sys/_types/_va_list.h
scheme_string.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_string.o: /usr/include/sys/_types/_int8_t.h
scheme_string.o: /usr/include/sys/_types/_int16_t.h
scheme_string.o: /usr/include/sys/_types/_int32_t.h
scheme_string.o: /usr/include/sys/_types/_int64_t.h
scheme_string.o: /usr/include/sys/_types/_u_int8_t.h
scheme_string.o: /usr/include/sys/_types/_u_int16_t.h
scheme_string.o: /usr/include/sys/_types/_u_int32_t.h
scheme_string.o: /usr/include/sys/_types/_u_int64_t.h
scheme_string.o: /usr/include/sys/_types/_intptr_t.h
scheme_string.o: /usr/include/sys/_types/_uintptr_t.h
scheme_string.o: /usr/include/sys/_types/_size_t.h
scheme_string.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_string.o: /usr/include/sys/_types/_off_t.h
scheme_string.o: /usr/include/sys/_types/_ssize_t.h
scheme_string.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_string.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_string.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_string.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_string.o: /usr/include/sys/appleapiopts.h
scheme_string.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_string.o: /usr/include/machine/_mcontext.h
scheme_string.o: /usr/include/i386/_mcontext.h
scheme_string.o: /usr/include/mach/machine/_structs.h
scheme_string.o: /usr/include/mach/i386/_structs.h
scheme_string.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_string.o: /usr/include/sys/_types/_sigaltstack.h
scheme_string.o: /usr/include/sys/_types/_ucontext.h
scheme_string.o: /usr/include/sys/_types/_sigset_t.h
scheme_string.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_string.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_string.o: /usr/include/_types/_uint16_t.h
scheme_string.o: /usr/include/_types/_uint32_t.h
scheme_string.o: /usr/include/_types/_uint64_t.h
scheme_string.o: /usr/include/_types/_intmax_t.h
scheme_string.o: /usr/include/_types/_uintmax_t.h
scheme_string.o: /usr/include/sys/_types/_timeval.h
scheme_string.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_string.o: /usr/include/sys/_endian.h
scheme_string.o: /usr/include/libkern/_OSByteOrder.h
scheme_string.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_string.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_string.o: /usr/include/sys/_types/_rune_t.h
scheme_string.o: /usr/include/sys/_types/_wchar_t.h
scheme_string.o: /usr/include/sys/_types/_dev_t.h
scheme_string.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_string.o: /usr/include/sys/_types/_rsize_t.h
scheme_string.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_string.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_struct.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_struct.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_struct.o: /usr/include/sys/_posix_availability.h
scheme_struct.o: /usr/include/Availability.h
scheme_struct.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_struct.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_struct.o: /usr/include/i386/_types.h
scheme_struct.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_struct.o: /usr/include/sys/_types/_va_list.h
scheme_struct.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_struct.o: /usr/include/sys/_types/_int8_t.h
scheme_struct.o: /usr/include/sys/_types/_int16_t.h
scheme_struct.o: /usr/include/sys/_types/_int32_t.h
scheme_struct.o: /usr/include/sys/_types/_int64_t.h
scheme_struct.o: /usr/include/sys/_types/_u_int8_t.h
scheme_struct.o: /usr/include/sys/_types/_u_int16_t.h
scheme_struct.o: /usr/include/sys/_types/_u_int32_t.h
scheme_struct.o: /usr/include/sys/_types/_u_int64_t.h
scheme_struct.o: /usr/include/sys/_types/_intptr_t.h
scheme_struct.o: /usr/include/sys/_types/_uintptr_t.h
scheme_struct.o: /usr/include/sys/_types/_size_t.h
scheme_struct.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_struct.o: /usr/include/sys/_types/_off_t.h
scheme_struct.o: /usr/include/sys/_types/_ssize_t.h
scheme_struct.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_struct.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_struct.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_struct.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_struct.o: /usr/include/sys/appleapiopts.h
scheme_struct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_struct.o: /usr/include/machine/_mcontext.h
scheme_struct.o: /usr/include/i386/_mcontext.h
scheme_struct.o: /usr/include/mach/machine/_structs.h
scheme_struct.o: /usr/include/mach/i386/_structs.h
scheme_struct.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_struct.o: /usr/include/sys/_types/_sigaltstack.h
scheme_struct.o: /usr/include/sys/_types/_ucontext.h
scheme_struct.o: /usr/include/sys/_types/_sigset_t.h
scheme_struct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_struct.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_struct.o: /usr/include/_types/_uint16_t.h
scheme_struct.o: /usr/include/_types/_uint32_t.h
scheme_struct.o: /usr/include/_types/_uint64_t.h
scheme_struct.o: /usr/include/_types/_intmax_t.h
scheme_struct.o: /usr/include/_types/_uintmax_t.h
scheme_struct.o: /usr/include/sys/_types/_timeval.h
scheme_struct.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_struct.o: /usr/include/sys/_endian.h
scheme_struct.o: /usr/include/libkern/_OSByteOrder.h
scheme_struct.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_struct.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_struct.o: /usr/include/sys/_types/_rune_t.h
scheme_struct.o: /usr/include/sys/_types/_wchar_t.h
scheme_struct.o: /usr/include/sys/_types/_dev_t.h
scheme_struct.o: /usr/include/sys/_types/_mode_t.h
scheme_symbol.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_symbol.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_symbol.o: /usr/include/sys/_posix_availability.h
scheme_symbol.o: /usr/include/Availability.h
scheme_symbol.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_symbol.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_symbol.o: /usr/include/i386/_types.h
scheme_symbol.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_symbol.o: /usr/include/sys/_types/_va_list.h
scheme_symbol.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_symbol.o: /usr/include/sys/_types/_int8_t.h
scheme_symbol.o: /usr/include/sys/_types/_int16_t.h
scheme_symbol.o: /usr/include/sys/_types/_int32_t.h
scheme_symbol.o: /usr/include/sys/_types/_int64_t.h
scheme_symbol.o: /usr/include/sys/_types/_u_int8_t.h
scheme_symbol.o: /usr/include/sys/_types/_u_int16_t.h
scheme_symbol.o: /usr/include/sys/_types/_u_int32_t.h
scheme_symbol.o: /usr/include/sys/_types/_u_int64_t.h
scheme_symbol.o: /usr/include/sys/_types/_intptr_t.h
scheme_symbol.o: /usr/include/sys/_types/_uintptr_t.h
scheme_symbol.o: /usr/include/sys/_types/_size_t.h
scheme_symbol.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_symbol.o: /usr/include/sys/_types/_off_t.h
scheme_symbol.o: /usr/include/sys/_types/_ssize_t.h
scheme_symbol.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_symbol.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_symbol.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_symbol.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_symbol.o: /usr/include/sys/appleapiopts.h
scheme_symbol.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_symbol.o: /usr/include/machine/_mcontext.h
scheme_symbol.o: /usr/include/i386/_mcontext.h
scheme_symbol.o: /usr/include/mach/machine/_structs.h
scheme_symbol.o: /usr/include/mach/i386/_structs.h
scheme_symbol.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_symbol.o: /usr/include/sys/_types/_sigaltstack.h
scheme_symbol.o: /usr/include/sys/_types/_ucontext.h
scheme_symbol.o: /usr/include/sys/_types/_sigset_t.h
scheme_symbol.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_symbol.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_symbol.o: /usr/include/_types/_uint16_t.h
scheme_symbol.o: /usr/include/_types/_uint32_t.h
scheme_symbol.o: /usr/include/_types/_uint64_t.h
scheme_symbol.o: /usr/include/_types/_intmax_t.h
scheme_symbol.o: /usr/include/_types/_uintmax_t.h
scheme_symbol.o: /usr/include/sys/_types/_timeval.h
scheme_symbol.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_symbol.o: /usr/include/sys/_endian.h
scheme_symbol.o: /usr/include/libkern/_OSByteOrder.h
scheme_symbol.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_symbol.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_symbol.o: /usr/include/sys/_types/_rune_t.h
scheme_symbol.o: /usr/include/sys/_types/_wchar_t.h
scheme_symbol.o: /usr/include/sys/_types/_dev_t.h
scheme_symbol.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_symbol.o: /usr/include/sys/_types/_rsize_t.h
scheme_symbol.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_symbol.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_syntax.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_syntax.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_syntax.o: /usr/include/sys/_posix_availability.h
scheme_syntax.o: /usr/include/Availability.h
scheme_syntax.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_syntax.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_syntax.o: /usr/include/i386/_types.h
scheme_syntax.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_syntax.o: /usr/include/sys/_types/_va_list.h
scheme_syntax.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_syntax.o: /usr/include/sys/_types/_int8_t.h
scheme_syntax.o: /usr/include/sys/_types/_int16_t.h
scheme_syntax.o: /usr/include/sys/_types/_int32_t.h
scheme_syntax.o: /usr/include/sys/_types/_int64_t.h
scheme_syntax.o: /usr/include/sys/_types/_u_int8_t.h
scheme_syntax.o: /usr/include/sys/_types/_u_int16_t.h
scheme_syntax.o: /usr/include/sys/_types/_u_int32_t.h
scheme_syntax.o: /usr/include/sys/_types/_u_int64_t.h
scheme_syntax.o: /usr/include/sys/_types/_intptr_t.h
scheme_syntax.o: /usr/include/sys/_types/_uintptr_t.h
scheme_syntax.o: /usr/include/sys/_types/_size_t.h
scheme_syntax.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_syntax.o: /usr/include/sys/_types/_off_t.h
scheme_syntax.o: /usr/include/sys/_types/_ssize_t.h
scheme_syntax.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_syntax.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_syntax.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_syntax.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_syntax.o: /usr/include/sys/appleapiopts.h
scheme_syntax.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_syntax.o: /usr/include/machine/_mcontext.h
scheme_syntax.o: /usr/include/i386/_mcontext.h
scheme_syntax.o: /usr/include/mach/machine/_structs.h
scheme_syntax.o: /usr/include/mach/i386/_structs.h
scheme_syntax.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_syntax.o: /usr/include/sys/_types/_sigaltstack.h
scheme_syntax.o: /usr/include/sys/_types/_ucontext.h
scheme_syntax.o: /usr/include/sys/_types/_sigset_t.h
scheme_syntax.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_syntax.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_syntax.o: /usr/include/_types/_uint16_t.h
scheme_syntax.o: /usr/include/_types/_uint32_t.h
scheme_syntax.o: /usr/include/_types/_uint64_t.h
scheme_syntax.o: /usr/include/_types/_intmax_t.h
scheme_syntax.o: /usr/include/_types/_uintmax_t.h
scheme_syntax.o: /usr/include/sys/_types/_timeval.h
scheme_syntax.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_syntax.o: /usr/include/sys/_endian.h
scheme_syntax.o: /usr/include/libkern/_OSByteOrder.h
scheme_syntax.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_syntax.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_syntax.o: /usr/include/sys/_types/_rune_t.h
scheme_syntax.o: /usr/include/sys/_types/_wchar_t.h
scheme_syntax.o: /usr/include/sys/_types/_dev_t.h
scheme_syntax.o: /usr/include/sys/_types/_mode_t.h
scheme_type.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_type.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_type.o: /usr/include/sys/_posix_availability.h
scheme_type.o: /usr/include/Availability.h
scheme_type.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_type.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_type.o: /usr/include/i386/_types.h
scheme_type.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_type.o: /usr/include/sys/_types/_va_list.h
scheme_type.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_type.o: /usr/include/sys/_types/_int8_t.h
scheme_type.o: /usr/include/sys/_types/_int16_t.h
scheme_type.o: /usr/include/sys/_types/_int32_t.h
scheme_type.o: /usr/include/sys/_types/_int64_t.h
scheme_type.o: /usr/include/sys/_types/_u_int8_t.h
scheme_type.o: /usr/include/sys/_types/_u_int16_t.h
scheme_type.o: /usr/include/sys/_types/_u_int32_t.h
scheme_type.o: /usr/include/sys/_types/_u_int64_t.h
scheme_type.o: /usr/include/sys/_types/_intptr_t.h
scheme_type.o: /usr/include/sys/_types/_uintptr_t.h
scheme_type.o: /usr/include/sys/_types/_size_t.h
scheme_type.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_type.o: /usr/include/sys/_types/_off_t.h
scheme_type.o: /usr/include/sys/_types/_ssize_t.h
scheme_type.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_type.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_type.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_type.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_type.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
scheme_type.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
scheme_type.o: /usr/include/i386/_mcontext.h
scheme_type.o: /usr/include/mach/machine/_structs.h
scheme_type.o: /usr/include/mach/i386/_structs.h
scheme_type.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_type.o: /usr/include/sys/_types/_sigaltstack.h
scheme_type.o: /usr/include/sys/_types/_ucontext.h
scheme_type.o: /usr/include/sys/_types/_sigset_t.h
scheme_type.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_type.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_type.o: /usr/include/_types/_uint16_t.h
scheme_type.o: /usr/include/_types/_uint32_t.h
scheme_type.o: /usr/include/_types/_uint64_t.h
scheme_type.o: /usr/include/_types/_intmax_t.h
scheme_type.o: /usr/include/_types/_uintmax_t.h
scheme_type.o: /usr/include/sys/_types/_timeval.h
scheme_type.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_type.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
scheme_type.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
scheme_type.o: /usr/include/sys/_types/_ct_rune_t.h
scheme_type.o: /usr/include/sys/_types/_rune_t.h
scheme_type.o: /usr/include/sys/_types/_wchar_t.h
scheme_type.o: /usr/include/sys/_types/_dev_t.h
scheme_type.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
scheme_type.o: /usr/include/sys/_types/_rsize_t.h
scheme_type.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
scheme_type.o: /usr/include/secure/_strings.h /usr/include/secure/_string.h
scheme_vector.o: scheme.h /usr/include/stdio.h /usr/include/_stdio.h
scheme_vector.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
scheme_vector.o: /usr/include/sys/_posix_availability.h
scheme_vector.o: /usr/include/Availability.h
scheme_vector.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
scheme_vector.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
scheme_vector.o: /usr/include/i386/_types.h
scheme_vector.o: /usr/include/sys/_pthread/_pthread_types.h
scheme_vector.o: /usr/include/sys/_types/_va_list.h
scheme_vector.o: /usr/include/machine/types.h /usr/include/i386/types.h
scheme_vector.o: /usr/include/sys/_types/_int8_t.h
scheme_vector.o: /usr/include/sys/_types/_int16_t.h
scheme_vector.o: /usr/include/sys/_types/_int32_t.h
scheme_vector.o: /usr/include/sys/_types/_int64_t.h
scheme_vector.o: /usr/include/sys/_types/_u_int8_t.h
scheme_vector.o: /usr/include/sys/_types/_u_int16_t.h
scheme_vector.o: /usr/include/sys/_types/_u_int32_t.h
scheme_vector.o: /usr/include/sys/_types/_u_int64_t.h
scheme_vector.o: /usr/include/sys/_types/_intptr_t.h
scheme_vector.o: /usr/include/sys/_types/_uintptr_t.h
scheme_vector.o: /usr/include/sys/_types/_size_t.h
scheme_vector.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
scheme_vector.o: /usr/include/sys/_types/_off_t.h
scheme_vector.o: /usr/include/sys/_types/_ssize_t.h
scheme_vector.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
scheme_vector.o: /usr/include/setjmp.h /usr/include/stdlib.h
scheme_vector.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
scheme_vector.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
scheme_vector.o: /usr/include/sys/appleapiopts.h
scheme_vector.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
scheme_vector.o: /usr/include/machine/_mcontext.h
scheme_vector.o: /usr/include/i386/_mcontext.h
scheme_vector.o: /usr/include/mach/machine/_structs.h
scheme_vector.o: /usr/include/mach/i386/_structs.h
scheme_vector.o: /usr/include/sys/_pthread/_pthread_attr_t.h
scheme_vector.o: /usr/include/sys/_types/_sigaltstack.h
scheme_vector.o: /usr/include/sys/_types/_ucontext.h
scheme_vector.o: /usr/include/sys/_types/_sigset_t.h
scheme_vector.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
scheme_vector.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
scheme_vector.o: /usr/include/_types/_uint16_t.h
scheme_vector.o: /usr/include/_types/_uint32_t.h
scheme_vector.o: /usr/include/_types/_uint64_t.h
scheme_vector.o: /usr/include/_types/_intmax_t.h
scheme_vector.o: /usr/include/_types/_uintmax_t.h
scheme_vector.o: /usr/include/sys/_types/_timeval.h
scheme_vector.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
scheme_vector.o: /usr/include/sys/_endian.h
scheme_vector.o: /usr/include/libkern/_OSByteOrder.h
scheme_vector.o: /usr/include/libkern/i386/_OSByteOrder.h
scheme_vector.o: /usr/include/alloca.h /usr/include/sys/_types/_ct_rune_t.h
scheme_vector.o: /usr/include/sys/_types/_rune_t.h
scheme_vector.o: /usr/include/sys/_types/_wchar_t.h
scheme_vector.o: /usr/include/sys/_types/_dev_t.h
scheme_vector.o: /usr/include/sys/_types/_mode_t.h
