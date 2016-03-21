# 1 "input.cpp"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "input.cpp"
# 32 "input.cpp"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 1 3
# 48 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3
       
# 49 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3

# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h" 1 3


# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 4 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h" 2 3
# 1202 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h" 3
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h" 1 3
# 39 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/os_defines.h" 2 3
# 1203 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h" 2 3


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/cpu_defines.h" 1 3
# 1206 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/x86_64-redhat-linux/bits/c++config.h" 2 3




namespace __gnu_debug_def { }

namespace __gnu_debug
{
  using namespace __gnu_debug_def;
}
# 51 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 2 3
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef" 1 3
# 48 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef" 3
       
# 49 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef" 3

# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 51 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 52 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 2 3
# 71 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

# 236 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;
# 237 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;






extern double __strtod_internal (__const char *__restrict __nptr,
     char **__restrict __endptr, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
    char **__restrict __endptr, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
          char **__restrict __endptr,
          int __base, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **__restrict __endptr,
         int __base, int __group)
     throw () __attribute__ ((__nonnull__ (1))) ;








extern __inline double
strtod (__const char *__restrict __nptr, char **__restrict __endptr) throw ()
{
  return __strtod_internal (__nptr, __endptr, 0);
}
extern __inline long int
strtol (__const char *__restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtol_internal (__nptr, __endptr, __base, 0);
}
extern __inline unsigned long int
strtoul (__const char *__restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtoul_internal (__nptr, __endptr, __base, 0);
}




extern __inline float
strtof (__const char *__restrict __nptr, char **__restrict __endptr) throw ()
{
  return __strtof_internal (__nptr, __endptr, 0);
}

extern __inline long double
strtold (__const char *__restrict __nptr, char **__restrict __endptr) throw ()
{
  return __strtold_internal (__nptr, __endptr, 0);
}





__extension__ extern __inline long long int
strtoq (__const char *__restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtoll_internal (__nptr, __endptr, __base, 0);
}
__extension__ extern __inline unsigned long long int
strtouq (__const char *__restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtoull_internal (__nptr, __endptr, __base, 0);
}




__extension__ extern __inline long long int
strtoll (__const char *__restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtoll_internal (__nptr, __endptr, __base, 0);
}
__extension__ extern __inline unsigned long long int
strtoull (__const char * __restrict __nptr, char **__restrict __endptr, int __base) throw ()

{
  return __strtoull_internal (__nptr, __endptr, __base, 0);
}




extern __inline double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}

# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4
extern "C" {

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 32 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
       unsigned int __minor)
     throw ();


__extension__ extern __inline unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4




typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4


}
# 439 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));






extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw ();






extern int clearenv (void) throw ();
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 719 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;







extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 756 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;






extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 821 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 909 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 977 "/usr/include/stdlib.h" 3 4
}
# 72 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 2 3
# 103 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3
namespace std
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;


  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
}
# 159 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3
namespace __gnu_cxx
{

  using ::lldiv_t;





  using ::_Exit;


  inline long long
  abs(long long __x) { return __x >= 0 ? __x : -__x; }


  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 192 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;
}

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::abs;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}
# 33 "input.cpp" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 1 3
# 48 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 3
       
# 49 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 3




# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4


typedef struct _IO_FILE FILE;





# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
       __const unsigned char **, __const unsigned char *,
       unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
      struct __gconv_step_data *, void *,
      __const unsigned char *,
      __const unsigned char **,
      __const unsigned char *, unsigned char **,
      size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
       __const unsigned char *,
       unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
     size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 543 "/usr/include/libio.h" 3 4
}
# 73 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 86 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();








extern FILE *tmpfile (void);
# 181 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void);



extern char *tmpnam (char *__s) throw ();





extern char *tmpnam_r (char *__s) throw ();
# 203 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 228 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 238 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes);




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream);
# 269 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes);
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream);




extern FILE *fdopen (int __fd, __const char *__modes) throw ();





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw ();


extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes) throw ();




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw ();






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));







extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 460 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 471 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 504 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 550 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 566 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 627 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 638 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 674 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 693 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 716 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 755 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 774 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 835 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 33 "/usr/include/bits/stdio.h" 3 4
inline int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}


inline int
getchar (void)
{
  return _IO_getc (stdin);
}




inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





inline __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





inline int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


inline int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 836 "/usr/include/stdio.h" 2 3 4
# 844 "/usr/include/stdio.h" 3 4
}
# 54 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 2 3
# 98 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 154 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 3
namespace __gnu_cxx
{
# 169 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std
{
  using __gnu_cxx::snprintf;
  using __gnu_cxx::vfscanf;
  using __gnu_cxx::vscanf;
  using __gnu_cxx::vsnprintf;
  using __gnu_cxx::vsscanf;
}
# 34 "input.cpp" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring" 1 3
# 48 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring" 3
       
# 49 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring" 3



# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern void *rawmemchr (__const void *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 121 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strchrnul (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));




extern char *strcasestr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 281 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));






extern char *basename (__const char *__filename) throw () __attribute__ ((__nonnull__ (1)));
# 426 "/usr/include/string.h" 3 4
}
# 53 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring" 2 3
# 78 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/cstring" 3
namespace std
{
  using ::memcpy;
  using ::memmove;
  using ::strcpy;
  using ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  using ::strchr;

  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  using ::strpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::strstr;

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 35 "input.cpp" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 1
# 44 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
extern "C" {
# 64 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
typedef int MPI_Datatype;
# 118 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
typedef int MPI_Comm;




typedef int MPI_Group;



typedef int MPI_Op;
# 189 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
typedef int MPI_Errhandler;
# 203 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
typedef union MPIR_HANDLE *MPI_Request;


typedef void (MPI_User_function) ( void *, void *, int *, MPI_Datatype * );


typedef int (MPI_Copy_function) ( MPI_Comm, int, void *, void *, void *, int * );
typedef int (MPI_Delete_function) ( MPI_Comm, int, void *, void * );
# 230 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
typedef struct MPIR_Info *MPI_Info;
# 246 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpidefs.h" 1






# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi_fortdefs.h" 1




typedef int MPI_Fint;
# 8 "/usr/mpi/gcc/mvapich-1.2.0/include/mpidefs.h" 2



typedef long MPI_Aint;
# 21 "/usr/mpi/gcc/mvapich-1.2.0/include/mpidefs.h"
typedef struct {
    int count;
    int MPI_SOURCE;
    int MPI_TAG;
    int MPI_ERROR;



} MPI_Status;
# 49 "/usr/mpi/gcc/mvapich-1.2.0/include/mpidefs.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h" 1
# 14 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 1
# 15 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h" 2


extern "C" {







typedef struct ADIOI_FileD *MPI_File;




typedef struct ADIOI_RequestD *MPIO_Request;
# 43 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
typedef long long MPI_Offset;




typedef int (MPI_Datarep_conversion_function)(void *, MPI_Datatype, int,
             void *, MPI_Offset, void *);
typedef int (MPI_Datarep_extent_function)(MPI_Datatype datatype, MPI_Aint *,
       void *);
# 120 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
int MPI_File_open(MPI_Comm, char *, int, MPI_Info, MPI_File *);
int MPI_File_close(MPI_File *);
int MPI_File_delete(char *, MPI_Info);
int MPI_File_set_size(MPI_File, MPI_Offset);
int MPI_File_preallocate(MPI_File, MPI_Offset);
int MPI_File_get_size(MPI_File, MPI_Offset *);
int MPI_File_get_group(MPI_File, MPI_Group *);
int MPI_File_get_amode(MPI_File, int *);
int MPI_File_set_info(MPI_File, MPI_Info);
int MPI_File_get_info(MPI_File, MPI_Info *);


int MPI_File_set_view(MPI_File, MPI_Offset, MPI_Datatype,
          MPI_Datatype, char *, MPI_Info);
int MPI_File_get_view(MPI_File, MPI_Offset *,
                 MPI_Datatype *, MPI_Datatype *, char *);


int MPI_File_read_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_read_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_write_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int MPI_File_write_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);





int MPI_File_iread_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPIO_Request *);
int MPI_File_iwrite_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPIO_Request *);


int MPI_File_read(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_read_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);





int MPI_File_iread(MPI_File, void *, int, MPI_Datatype, MPIO_Request *);
int MPI_File_iwrite(MPI_File, void *, int, MPI_Datatype, MPIO_Request *);

int MPI_File_seek(MPI_File, MPI_Offset, int);
int MPI_File_get_position(MPI_File, MPI_Offset *);
int MPI_File_get_byte_offset(MPI_File, MPI_Offset, MPI_Offset *);


int MPI_File_read_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_write_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int MPI_File_iread_shared(MPI_File, void *, int, MPI_Datatype, MPIO_Request *);
int MPI_File_iwrite_shared(MPI_File, void *, int,
      MPI_Datatype, MPIO_Request *);
int MPI_File_read_ordered(MPI_File, void *, int,
                          MPI_Datatype, MPI_Status *);
int MPI_File_write_ordered(MPI_File, void *, int,
                           MPI_Datatype, MPI_Status *);
int MPI_File_seek_shared(MPI_File, MPI_Offset, int);
int MPI_File_get_position_shared(MPI_File, MPI_Offset *);


int MPI_File_read_at_all_begin(MPI_File, MPI_Offset, void *,
                               int, MPI_Datatype);
int MPI_File_read_at_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_at_all_begin(MPI_File, MPI_Offset, void *,
                                int, MPI_Datatype);
int MPI_File_write_at_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_read_all_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_read_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_all_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_write_all_end(MPI_File, void *, MPI_Status *);
int MPI_File_read_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_read_ordered_end(MPI_File, void *, MPI_Status *);
int MPI_File_write_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int MPI_File_write_ordered_end(MPI_File, void *, MPI_Status *);


int MPI_File_get_type_extent(MPI_File, MPI_Datatype, MPI_Aint *);


int MPI_Register_datarep(char *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_extent_function *,
    void *);


int MPI_File_set_atomicity(MPI_File, int);
int MPI_File_get_atomicity(MPI_File, int *);
int MPI_File_sync(MPI_File);




int MPI_File_set_errhandler( MPI_File, MPI_Errhandler );
int MPI_File_get_errhandler( MPI_File, MPI_Errhandler * );





int MPI_Type_create_subarray(int, int *, int *, int *, int,
                      MPI_Datatype, MPI_Datatype *);


int MPI_Type_create_darray(int, int, int,
                    int *, int *, int *, int *,
                    int, MPI_Datatype, MPI_Datatype *);
# 249 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
MPI_File MPI_File_f2c(MPI_Fint);
MPI_Fint MPI_File_c2f(MPI_File);





int MPIO_Test(MPIO_Request *, int *, MPI_Status *);
int MPIO_Wait(MPIO_Request *, MPI_Status *);
int MPIO_Testall(int, MPIO_Request *, int *, MPI_Status *);
int MPIO_Waitall(int, MPIO_Request *, MPI_Status *);
int MPIO_Testany(int, MPIO_Request *, int *, int *, MPI_Status *);
int MPIO_Waitany(int, MPIO_Request *, int *, MPI_Status *);
int MPIO_Waitsome(int, MPIO_Request *, int *, int *, MPI_Status *);
int MPIO_Testsome(int, MPIO_Request *, int *, int *, MPI_Status *);

MPI_Fint MPIO_Request_c2f(MPIO_Request);
MPIO_Request MPIO_Request_f2c(MPI_Fint);
# 305 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
int PMPI_File_open(MPI_Comm, char *, int, MPI_Info, MPI_File *);
int PMPI_File_close(MPI_File *);
int PMPI_File_delete(char *, MPI_Info);
int PMPI_File_set_size(MPI_File, MPI_Offset);
int PMPI_File_preallocate(MPI_File, MPI_Offset);
int PMPI_File_get_size(MPI_File, MPI_Offset *);
int PMPI_File_get_group(MPI_File, MPI_Group *);
int PMPI_File_get_amode(MPI_File, int *);
int PMPI_File_set_info(MPI_File, MPI_Info);
int PMPI_File_get_info(MPI_File, MPI_Info *);


int PMPI_File_set_view(MPI_File, MPI_Offset,
    MPI_Datatype, MPI_Datatype, char *, MPI_Info);
int PMPI_File_get_view(MPI_File, MPI_Offset *,
      MPI_Datatype *, MPI_Datatype *, char *);


int PMPI_File_read_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_read_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_at_all(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPI_Status *);





int PMPI_File_iread_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPIO_Request *);
int PMPI_File_iwrite_at(MPI_File, MPI_Offset, void *,
       int, MPI_Datatype, MPIO_Request *);


int PMPI_File_read(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_read_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_all(MPI_File, void *, int, MPI_Datatype, MPI_Status *);





int PMPI_File_iread(MPI_File, void *, int, MPI_Datatype, MPIO_Request *);
int PMPI_File_iwrite(MPI_File, void *, int, MPI_Datatype, MPIO_Request *);

int PMPI_File_seek(MPI_File, MPI_Offset, int);
int PMPI_File_get_position(MPI_File, MPI_Offset *);
int PMPI_File_get_byte_offset(MPI_File, MPI_Offset, MPI_Offset *);


int PMPI_File_read_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_shared(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_iread_shared(MPI_File, void *, int,
      MPI_Datatype, MPIO_Request *);
int PMPI_File_iwrite_shared(MPI_File, void *, int,
       MPI_Datatype, MPIO_Request *);
int PMPI_File_read_ordered(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_write_ordered(MPI_File, void *, int, MPI_Datatype, MPI_Status *);
int PMPI_File_seek_shared(MPI_File, MPI_Offset, int);
int PMPI_File_get_position_shared(MPI_File, MPI_Offset *);


int PMPI_File_read_at_all_begin(MPI_File, MPI_Offset, void *,
                               int, MPI_Datatype);
int PMPI_File_read_at_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_at_all_begin(MPI_File, MPI_Offset, void *,
                                int, MPI_Datatype);
int PMPI_File_write_at_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_read_all_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_read_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_all_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_write_all_end(MPI_File, void *, MPI_Status *);
int PMPI_File_read_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_read_ordered_end(MPI_File, void *, MPI_Status *);
int PMPI_File_write_ordered_begin(MPI_File, void *, int, MPI_Datatype);
int PMPI_File_write_ordered_end(MPI_File, void *, MPI_Status *);


int PMPI_File_get_type_extent(MPI_File, MPI_Datatype, MPI_Aint *);


int PMPI_Register_datarep(char *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_conversion_function *,
    MPI_Datarep_extent_function *,
    void *);


int PMPI_File_set_atomicity(MPI_File, int);
int PMPI_File_get_atomicity(MPI_File, int *);
int PMPI_File_sync(MPI_File);




int PMPI_File_set_errhandler( MPI_File, MPI_Errhandler );
int PMPI_File_get_errhandler( MPI_File, MPI_Errhandler * );




int PMPI_Type_create_subarray(int, int *, int *, int *, int,
                      MPI_Datatype, MPI_Datatype *);


int PMPI_Type_create_darray(int, int, int, int *, int *,
                    int *, int *, int, MPI_Datatype, MPI_Datatype *);



MPI_File PMPI_File_f2c(MPI_Fint);
MPI_Fint PMPI_File_c2f(MPI_File);




int PMPIO_Test(MPIO_Request *, int *, MPI_Status *);
int PMPIO_Wait(MPIO_Request *, MPI_Status *);
int PMPIO_Testall(int, MPIO_Request *, int *, MPI_Status *);
int PMPIO_Waitall(int, MPIO_Request *, MPI_Status *);
int PMPIO_Testany(int, MPIO_Request *, int *, int *, MPI_Status *);
int PMPIO_Waitany(int, MPIO_Request *, int *, MPI_Status *);
int PMPIO_Waitsome(int, MPIO_Request *, int *, int *, MPI_Status *);
int PMPIO_Testsome(int, MPIO_Request *, int *, int *, MPI_Status *);
MPI_Fint PMPIO_Request_c2f(MPIO_Request);
MPIO_Request PMPIO_Request_f2c(MPI_Fint);
# 455 "/usr/mpi/gcc/mvapich-1.2.0/include/mpio.h"
}
# 50 "/usr/mpi/gcc/mvapich-1.2.0/include/mpidefs.h" 2
# 247 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 2






typedef void (MPI_Handler_function) ( MPI_Comm *, int *, ... );
# 292 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
extern int MPICHX_QOS_BANDWIDTH;
extern int MPICHX_QOS_PARAMETERS;





extern int MPICHX_TOPOLOGY_DEPTHS;
extern int MPICHX_TOPOLOGY_COLORS;
# 311 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
extern int MPICHX_PARALLELSOCKETS_PARAMETERS;
struct gridftp_params
{
    int partner_rank;

    int nsocket_pairs;
    int max_outstanding_writes;
    int tcp_buffsize;
};





# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi_errno.h" 1
# 326 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 2
# 334 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
int MPI_Send(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Recv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int MPI_Get_count(MPI_Status *, MPI_Datatype, int *);
int MPI_Bsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Ssend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Rsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int MPI_Buffer_attach( void*, int);
int MPI_Buffer_detach( void*, int*);
int MPI_Isend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Ibsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Issend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Irsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Irecv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Wait(MPI_Request *, MPI_Status *);
int MPI_Test(MPI_Request *, int *, MPI_Status *);
int MPI_Request_free(MPI_Request *);
int MPI_Waitany(int, MPI_Request *, int *, MPI_Status *);
int MPI_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Waitall(int, MPI_Request *, MPI_Status *);
int MPI_Testall(int, MPI_Request *, int *, MPI_Status *);
int MPI_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);
int MPI_Iprobe(int, int, MPI_Comm, int *flag, MPI_Status *);
int MPI_Probe(int, int, MPI_Comm, MPI_Status *);
int MPI_Cancel(MPI_Request *);
int MPI_Test_cancelled(MPI_Status *, int *);
int MPI_Send_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int MPI_Bsend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Ssend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Rsend_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Recv_init(void*, int, MPI_Datatype, int,int, MPI_Comm, MPI_Request *);
int MPI_Start(MPI_Request *);
int MPI_Startall(int, MPI_Request *);
int MPI_Sendrecv(void *, int, MPI_Datatype,int, int, void *, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int MPI_Sendrecv_replace(void*, int, MPI_Datatype, int, int, int, int, MPI_Comm, MPI_Status *);
int MPI_Type_contiguous(int, MPI_Datatype, MPI_Datatype *);
int MPI_Type_vector(int, int, int, MPI_Datatype, MPI_Datatype *);
int MPI_Type_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int MPI_Type_indexed(int, int *, int *, MPI_Datatype, MPI_Datatype *);
int MPI_Type_hindexed(int, int *, MPI_Aint *, MPI_Datatype, MPI_Datatype *);
int MPI_Type_struct(int, int *, MPI_Aint *, MPI_Datatype *, MPI_Datatype *);
int MPI_Address(void*, MPI_Aint *);
int MPI_Type_extent(MPI_Datatype, MPI_Aint *);



int MPI_Type_size(MPI_Datatype, int *);

int MPI_Type_lb(MPI_Datatype, MPI_Aint*);
int MPI_Type_ub(MPI_Datatype, MPI_Aint*);
int MPI_Type_commit(MPI_Datatype *);
int MPI_Type_free(MPI_Datatype *);
int MPI_Get_elements(MPI_Status *, MPI_Datatype, int *);
int MPI_Pack(void*, int, MPI_Datatype, void *, int, int *, MPI_Comm);
int MPI_Unpack(void*, int, int *, void *, int, MPI_Datatype, MPI_Comm);
int MPI_Pack_size(int, MPI_Datatype, MPI_Comm, int *);
int MPI_Barrier(MPI_Comm );
int MPI_Bcast(void*, int, MPI_Datatype, int, MPI_Comm );
int MPI_Gather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Gatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, int, MPI_Comm);
int MPI_Scatter(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Scatterv(void* , int *, int *, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int MPI_Allgather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int MPI_Allgatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int MPI_Alltoall(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int MPI_Alltoallv(void* , int *, int *, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int MPI_Reduce(void* , void*, int, MPI_Datatype, MPI_Op, int, MPI_Comm);
int MPI_Op_create(MPI_User_function *, int, MPI_Op *);
int MPI_Op_free( MPI_Op *);
int MPI_Allreduce(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm);
int MPI_Reduce_scatter(void* , void*, int *, MPI_Datatype, MPI_Op, MPI_Comm);
int MPI_Scan(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm );
int MPI_Group_size(MPI_Group group, int *);
int MPI_Group_rank(MPI_Group group, int *);
int MPI_Group_translate_ranks (MPI_Group, int, int *, MPI_Group, int *);
int MPI_Group_compare(MPI_Group, MPI_Group, int *);
int MPI_Comm_group(MPI_Comm, MPI_Group *);
int MPI_Group_union(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_intersection(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_difference(MPI_Group, MPI_Group, MPI_Group *);
int MPI_Group_incl(MPI_Group group, int, int *, MPI_Group *);
int MPI_Group_excl(MPI_Group group, int, int *, MPI_Group *);
int MPI_Group_range_incl(MPI_Group group, int, int [][3], MPI_Group *);
int MPI_Group_range_excl(MPI_Group group, int, int [][3], MPI_Group *);
int MPI_Group_free(MPI_Group *);
int MPI_Comm_size(MPI_Comm, int *);
int MPI_Comm_rank(MPI_Comm, int *);
int MPI_Comm_compare(MPI_Comm, MPI_Comm, int *);
int MPI_Comm_dup(MPI_Comm, MPI_Comm *);
int MPI_Comm_create(MPI_Comm, MPI_Group, MPI_Comm *);
int MPI_Comm_split(MPI_Comm, int, int, MPI_Comm *);
int MPI_Comm_free(MPI_Comm *);
int MPI_Comm_test_inter(MPI_Comm, int *);
int MPI_Comm_remote_size(MPI_Comm, int *);
int MPI_Comm_remote_group(MPI_Comm, MPI_Group *);
int MPI_Intercomm_create(MPI_Comm, int, MPI_Comm, int, int, MPI_Comm * );
int MPI_Intercomm_merge(MPI_Comm, int, MPI_Comm *);
int MPI_Keyval_create(MPI_Copy_function *, MPI_Delete_function *, int *, void*);
int MPI_Keyval_free(int *);
int MPI_Attr_put(MPI_Comm, int, void*);
int MPI_Attr_get(MPI_Comm, int, void *, int *);
int MPI_Attr_delete(MPI_Comm, int);
int MPI_Topo_test(MPI_Comm, int *);
int MPI_Cart_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int MPI_Dims_create(int, int, int *);
int MPI_Graph_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int MPI_Graphdims_get(MPI_Comm, int *, int *);
int MPI_Graph_get(MPI_Comm, int, int, int *, int *);
int MPI_Cartdim_get(MPI_Comm, int *);
int MPI_Cart_get(MPI_Comm, int, int *, int *, int *);
int MPI_Cart_rank(MPI_Comm, int *, int *);
int MPI_Cart_coords(MPI_Comm, int, int, int *);
int MPI_Graph_neighbors_count(MPI_Comm, int, int *);
int MPI_Graph_neighbors(MPI_Comm, int, int, int *);
int MPI_Cart_shift(MPI_Comm, int, int, int *, int *);
int MPI_Cart_sub(MPI_Comm, int *, MPI_Comm *);
int MPI_Cart_map(MPI_Comm, int, int *, int *, int *);
int MPI_Graph_map(MPI_Comm, int, int *, int *, int *);
int MPI_Get_processor_name(char *, int *);
int MPI_Get_version(int *, int *);
int MPI_Errhandler_create(MPI_Handler_function *, MPI_Errhandler *);
int MPI_Errhandler_set(MPI_Comm, MPI_Errhandler);
int MPI_Errhandler_get(MPI_Comm, MPI_Errhandler *);
int MPI_Errhandler_free(MPI_Errhandler *);
int MPI_Error_string(int, char *, int *);
int MPI_Error_class(int, int *);
double MPI_Wtime(void);
double MPI_Wtick(void);

double PMPI_Wtime(void);
double PMPI_Wtick(void);

int MPI_Init(int *, char ***);
int MPI_Init_thread( int *, char ***, int, int * );
int MPI_Finalize(void);
int MPI_Initialized(int *);
int MPI_Abort(MPI_Comm, int);


int MPI_Comm_set_name(MPI_Comm, char *);
int MPI_Comm_get_name(MPI_Comm, char *, int *);
# 484 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
int MPI_Pcontrol(const int, ...);


int MPIR_null_copy_fn ( MPI_Comm, int, void *, void *, void *, int * );
int MPIR_null_delete_fn ( MPI_Comm, int, void *, void * );
int MPIR_dup_fn ( MPI_Comm, int, void *, void *, void *, int * );


int MPI_Status_f2c( MPI_Fint *, MPI_Status * );
int MPI_Status_c2f( MPI_Status *, MPI_Fint * );
int MPI_Finalized( int * );
int MPI_Type_create_indexed_block(int, int, int *, MPI_Datatype, MPI_Datatype *);
int MPI_Type_get_envelope(MPI_Datatype, int *, int *, int *, int *);
int MPI_Type_get_contents(MPI_Datatype, int, int, int, int *, MPI_Aint *, MPI_Datatype *);
int MPI_Type_create_subarray(int, int *, int *, int *, int, MPI_Datatype, MPI_Datatype *);
int MPI_Type_create_darray(int, int, int, int *, int *, int *, int *, int, MPI_Datatype, MPI_Datatype *);
int MPI_Info_create(MPI_Info *);
int MPI_Info_set(MPI_Info, char *, char *);
int MPI_Info_delete(MPI_Info, char *);
int MPI_Info_get(MPI_Info, char *, int, char *, int *);
int MPI_Info_get_valuelen(MPI_Info, char *, int *, int *);
int MPI_Info_get_nkeys(MPI_Info, int *);
int MPI_Info_get_nthkey(MPI_Info, int, char *);
int MPI_Info_dup(MPI_Info, MPI_Info *);
int MPI_Info_free(MPI_Info *info);

MPI_Fint MPI_Info_c2f(MPI_Info);
MPI_Info MPI_Info_f2c(MPI_Fint);
MPI_Fint MPI_Request_c2f( MPI_Request );


int MPI_Status_set_cancelled( MPI_Status *, int );
int MPI_Status_set_elements( MPI_Status *, MPI_Datatype, int );







int PMPI_Send(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Recv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int PMPI_Get_count(MPI_Status *, MPI_Datatype, int *);
int PMPI_Bsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Ssend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Rsend(void*, int, MPI_Datatype, int, int, MPI_Comm);
int PMPI_Buffer_attach( void* buffer, int);
int PMPI_Buffer_detach( void* buffer, int*);
int PMPI_Isend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Ibsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Issend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Irsend(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Irecv(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Wait(MPI_Request *, MPI_Status *);
int PMPI_Test(MPI_Request *, int *flag, MPI_Status *);
int PMPI_Request_free(MPI_Request *);
int PMPI_Waitany(int, MPI_Request *, int *, MPI_Status *);
int PMPI_Testany(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Waitall(int, MPI_Request *, MPI_Status *);
int PMPI_Testall(int, MPI_Request *, int *flag, MPI_Status *);
int PMPI_Waitsome(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Testsome(int, MPI_Request *, int *, int *, MPI_Status *);
int PMPI_Iprobe(int, int, MPI_Comm, int *flag, MPI_Status *);
int PMPI_Probe(int, int, MPI_Comm, MPI_Status *);
int PMPI_Cancel(MPI_Request *);
int PMPI_Test_cancelled(MPI_Status *, int *flag);
int PMPI_Send_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Bsend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Ssend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Rsend_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Recv_init(void*, int, MPI_Datatype, int, int, MPI_Comm, MPI_Request *);
int PMPI_Start(MPI_Request *);
int PMPI_Startall(int, MPI_Request *);
int PMPI_Sendrecv(void *, int, MPI_Datatype, int, int, void *, int, MPI_Datatype, int, int, MPI_Comm, MPI_Status *);
int PMPI_Sendrecv_replace(void*, int, MPI_Datatype, int, int, int, int, MPI_Comm, MPI_Status *);
int PMPI_Type_contiguous(int, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_vector(int, int, int, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_hvector(int, int, MPI_Aint, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_indexed(int, int *, int *, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_hindexed(int, int *, MPI_Aint *, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_struct(int, int *, MPI_Aint *, MPI_Datatype *, MPI_Datatype *);
int PMPI_Address(void*, MPI_Aint *);
int PMPI_Type_extent(MPI_Datatype, MPI_Aint *);



int PMPI_Type_size(MPI_Datatype, int *);
int PMPI_Type_lb(MPI_Datatype, MPI_Aint*);
int PMPI_Type_ub(MPI_Datatype, MPI_Aint*);
int PMPI_Type_commit(MPI_Datatype *);
int PMPI_Type_free(MPI_Datatype *);
int PMPI_Get_elements(MPI_Status *, MPI_Datatype, int *);
int PMPI_Pack(void*, int, MPI_Datatype, void *, int, int *, MPI_Comm);
int PMPI_Unpack(void*, int, int *, void *, int, MPI_Datatype, MPI_Comm);
int PMPI_Pack_size(int, MPI_Datatype, MPI_Comm, int *);
int PMPI_Barrier(MPI_Comm );
int PMPI_Bcast(void* buffer, int, MPI_Datatype, int, MPI_Comm );
int PMPI_Gather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Gatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, int, MPI_Comm);
int PMPI_Scatter(void* , int, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Scatterv(void* , int *, int *displs, MPI_Datatype, void*, int, MPI_Datatype, int, MPI_Comm);
int PMPI_Allgather(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int PMPI_Allgatherv(void* , int, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int PMPI_Alltoall(void* , int, MPI_Datatype, void*, int, MPI_Datatype, MPI_Comm);
int PMPI_Alltoallv(void* , int *, int *, MPI_Datatype, void*, int *, int *, MPI_Datatype, MPI_Comm);
int PMPI_Reduce(void* , void*, int, MPI_Datatype, MPI_Op, int, MPI_Comm);
int PMPI_Op_create(MPI_User_function *, int, MPI_Op *);
int PMPI_Op_free( MPI_Op *);
int PMPI_Allreduce(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm);
int PMPI_Reduce_scatter(void* , void*, int *, MPI_Datatype, MPI_Op, MPI_Comm);
int PMPI_Scan(void* , void*, int, MPI_Datatype, MPI_Op, MPI_Comm );
int PMPI_Group_size(MPI_Group group, int *);
int PMPI_Group_rank(MPI_Group group, int *);
int PMPI_Group_translate_ranks (MPI_Group, int, int *, MPI_Group, int *);
int PMPI_Group_compare(MPI_Group, MPI_Group, int *);
int PMPI_Comm_group(MPI_Comm, MPI_Group *);
int PMPI_Group_union(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_intersection(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_difference(MPI_Group, MPI_Group, MPI_Group *);
int PMPI_Group_incl(MPI_Group group, int, int *, MPI_Group *);
int PMPI_Group_excl(MPI_Group group, int, int *, MPI_Group *);
int PMPI_Group_range_incl(MPI_Group group, int, int [][3], MPI_Group *);
int PMPI_Group_range_excl(MPI_Group group, int, int [][3], MPI_Group *);
int PMPI_Group_free(MPI_Group *);
int PMPI_Comm_size(MPI_Comm, int *);
int PMPI_Comm_rank(MPI_Comm, int *);
int PMPI_Comm_compare(MPI_Comm, MPI_Comm, int *);
int PMPI_Comm_dup(MPI_Comm, MPI_Comm *);
int PMPI_Comm_create(MPI_Comm, MPI_Group, MPI_Comm *);
int PMPI_Comm_split(MPI_Comm, int, int, MPI_Comm *);
int PMPI_Comm_free(MPI_Comm *);
int PMPI_Comm_test_inter(MPI_Comm, int *);
int PMPI_Comm_remote_size(MPI_Comm, int *);
int PMPI_Comm_remote_group(MPI_Comm, MPI_Group *);
int PMPI_Intercomm_create(MPI_Comm, int, MPI_Comm, int, int, MPI_Comm *);
int PMPI_Intercomm_merge(MPI_Comm, int, MPI_Comm *);
int PMPI_Keyval_create(MPI_Copy_function *, MPI_Delete_function *, int *, void*);
int PMPI_Keyval_free(int *);
int PMPI_Attr_put(MPI_Comm, int, void*);
int PMPI_Attr_get(MPI_Comm, int, void *, int *);
int PMPI_Attr_delete(MPI_Comm, int);
int PMPI_Topo_test(MPI_Comm, int *);
int PMPI_Cart_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int PMPI_Dims_create(int, int, int *);
int PMPI_Graph_create(MPI_Comm, int, int *, int *, int, MPI_Comm *);
int PMPI_Graphdims_get(MPI_Comm, int *, int *);
int PMPI_Graph_get(MPI_Comm, int, int, int *, int *);
int PMPI_Cartdim_get(MPI_Comm, int *);
int PMPI_Cart_get(MPI_Comm, int, int *, int *, int *);
int PMPI_Cart_rank(MPI_Comm, int *, int *);
int PMPI_Cart_coords(MPI_Comm, int, int, int *);
int PMPI_Graph_neighbors_count(MPI_Comm, int, int *);
int PMPI_Graph_neighbors(MPI_Comm, int, int, int *);
int PMPI_Cart_shift(MPI_Comm, int, int, int *, int *);
int PMPI_Cart_sub(MPI_Comm, int *, MPI_Comm *);
int PMPI_Cart_map(MPI_Comm, int, int *, int *, int *);
int PMPI_Graph_map(MPI_Comm, int, int *, int *, int *);
int PMPI_Get_processor_name(char *, int *);
int PMPI_Get_version(int *, int *);
int PMPI_Errhandler_create(MPI_Handler_function *, MPI_Errhandler *);
int PMPI_Errhandler_set(MPI_Comm, MPI_Errhandler);
int PMPI_Errhandler_get(MPI_Comm, MPI_Errhandler *);
int PMPI_Errhandler_free(MPI_Errhandler *);
int PMPI_Error_string(int, char *, int *);
int PMPI_Error_class(int, int *);

int PMPI_Type_get_envelope(MPI_Datatype, int *, int *, int *, int *);
int PMPI_Type_get_contents(MPI_Datatype, int, int, int, int *, MPI_Aint *, MPI_Datatype *);
int PMPI_Type_create_subarray(int, int *, int *, int *, int, MPI_Datatype, MPI_Datatype *);
int PMPI_Type_create_darray(int, int, int, int *, int *, int *, int *, int, MPI_Datatype, MPI_Datatype *);
int PMPI_Info_create(MPI_Info *);
int PMPI_Info_set(MPI_Info, char *, char *);
int PMPI_Info_delete(MPI_Info, char *);
int PMPI_Info_get(MPI_Info, char *, int, char *, int *);
int PMPI_Info_get_valuelen(MPI_Info, char *, int *, int *);
int PMPI_Info_get_nkeys(MPI_Info, int *);
int PMPI_Info_get_nthkey(MPI_Info, int, char *);
int PMPI_Info_dup(MPI_Info, MPI_Info *);
int PMPI_Info_free(MPI_Info *);

MPI_Fint PMPI_Info_c2f(MPI_Info);
MPI_Info PMPI_Info_f2c(MPI_Fint);


int PMPI_Init(int *, char ***);
int PMPI_Init_thread( int *, char ***, int, int * );
int PMPI_Finalize(void);
int PMPI_Initialized(int *);
int PMPI_Abort(MPI_Comm, int);

int PMPI_Comm_set_name(MPI_Comm, char *);
int PMPI_Comm_get_name(MPI_Comm, char *, int *);
# 684 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
int PMPI_Pcontrol(const int, ...);



int PMPI_Status_set_cancelled( MPI_Status *, int );
int PMPI_Status_set_elements( MPI_Status *, MPI_Datatype, int );





}
# 704 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 1
# 40 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_config.h" 1
# 73 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_config.h"
typedef bool MPI2CPP_BOOL_T;
# 41 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 1
# 42 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2

# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 44 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_map.h" 1
# 32 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_map.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_list.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_list.h"
class List {
public:
  typedef void* Data;
  class iter;

  class Link {
    friend class List;
    friend class iter;
    Data data;
    Link *next;
    Link *prev;
    Link() { }
    Link(Data d, Link* p, Link* n) : data(d), next(n), prev(p) { }
  };

  class iter {
    friend class List;
    Link* node;
  public:
    iter(Link* n) : node(n) { }
    iter& operator++() { node = node->next; return *this; }
    iter operator++(int) { iter tmp = *this; ++(*this); return tmp; }
    Data& operator*() const { return node->data; }
    MPI2CPP_BOOL_T operator==(const iter& x) const { return (MPI2CPP_BOOL_T)(node == x.node); }
    MPI2CPP_BOOL_T operator!=(const iter& x) const { return (MPI2CPP_BOOL_T)(node != x.node); }
  };

  List() { _end.prev = &_end; _end.next = &_end; }
  virtual ~List() {
    for (iter i = begin(); i != end(); ) {
      Link* garbage = i.node; i++;
      delete garbage;
    }
  }
  virtual iter begin() { return _end.next; }
  virtual iter end() { return &_end; }
  virtual iter insert(iter p, Data d) {
    iter pos(p);
    Link* n = new Link(d, pos.node->prev, pos.node);
    pos.node->prev->next = n;
    pos.node->prev = n;
    return n;
  }
  void erase(iter pos) {
    pos.node->prev->next = pos.node->next;
    pos.node->next->prev = pos.node->prev;
    delete pos.node;
  }

protected:
  Link _end;
};
# 33 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi2c++_map.h" 2
typedef List Container;

template <class TYPE1, class TYPE2>
class Map {
  Container c;
public:

  typedef TYPE1 key_t;
  typedef TYPE2 value_t;
  typedef List::iter iter;

  struct Pair {
    Pair(key_t f, value_t s) : first(f), second(s) {}
    Pair() : first((key_t) 0), second((value_t) 0) { }
    key_t first;
    value_t second;
  };

  Map() { }

  ~Map() {
    for (iter i = c.begin(); i != c.end(); i++) {
      delete (Pair*)(*i);
    }
  }

  Pair* begin();
  Pair* end();

  value_t& operator[](key_t key)
  {
    value_t* found = (value_t*)0;
    for (iter i = c.begin(); i != c.end(); i++) {
      if (((Pair*)*i)->first == key)
 found = &((Pair*)*i)->second;
    }
    if (! found) {
      iter tmp = c.insert(c.begin(), new Pair(key, (value_t) 0));
      found = &((Pair*)*tmp)->second;
    }
    return *found;
  }

  void erase(key_t key)
  {
    for (iter i = c.begin(); i != c.end(); i++) {
      if (((Pair*)*i)->first == key) {
 delete (Pair*)*i;
 c.erase(i); break;
      }
    }
  }
};
# 45 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2



extern "C" void
op_intercept(void *invec, void *outvec, int *len, MPI_Datatype *datatype);
# 64 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h"
extern "C" void
throw_excptn_fctn(MPI_Comm* comm, int* errcode, ...);

extern "C" void
errhandler_intercept(MPI_Comm * mpi_comm, int * err, ...);




enum CommType { eIntracomm, eIntercomm, eCartcomm, eGraphcomm};

extern "C" int
copy_attr_intercept(MPI_Comm oldcomm, int keyval,
      void *extra_state, void *attribute_val_in,
      void *attribute_val_out, int *flag);

extern "C" int
delete_attr_intercept(MPI_Comm comm, int keyval,
        void *attribute_val, void *extra_state);



# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 1
# 36 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h"
namespace PMPI {







  extern int errno;


  class Comm_Null;
  class Comm;
  class Intracomm;
  class Intercomm;
  class Graphcomm;
  class Cartcomm;
  class Datatype;
  class Errhandler;
  class Group;
  class Op;
  class Request;
  class Status;

  typedef MPI_Aint Aint;

# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions.h"
 void
Attach_buffer(void* buffer, int size);

 int
Detach_buffer(void*& buffer);





 void
Compute_dims(int nnodes, int ndims, int dims[]);





 void
Get_processor_name(char* name, int& resultlen);

 void
Get_error_string(int errorcode, char* string, int& resultlen);

 int
Get_error_class(int errorcode);

 double
Wtime();

 double
Wtick();

 void
Init(int& argc, char**& argv);

 void
Init();

 void
Real_init();

 void
Finalize();

 MPI2CPP_BOOL_T
Is_initialized();





 void
Pcontrol(const int level, ...);



 void
Get_version(int& version, int& subversion);


 PMPI::Aint
Get_address(void* location);
# 63 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pdatatype.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pdatatype.h"
class Datatype {
public:

  inline Datatype() : mpi_datatype(((MPI_Datatype)0)) { }
  inline virtual ~Datatype() {}

  inline Datatype(const MPI_Datatype &i) : mpi_datatype(i) { }


  Datatype(const Datatype& dt) : mpi_datatype(dt.mpi_datatype) { }

  Datatype& operator=(const Datatype& dt) {
    mpi_datatype = dt.mpi_datatype; return *this;
  }


  MPI2CPP_BOOL_T operator==(const Datatype &a) const {
    return (MPI2CPP_BOOL_T) (mpi_datatype == a.mpi_datatype);
  }

  inline MPI2CPP_BOOL_T operator!= (const Datatype &a) const
    { return (MPI2CPP_BOOL_T) !(*this == a); }


  inline Datatype& operator= (const MPI_Datatype &i)
    { mpi_datatype = i; return *this; }

  inline operator MPI_Datatype () const { return mpi_datatype; }

  inline const MPI_Datatype& mpi() const { return mpi_datatype; }





  inline virtual Datatype Create_contiguous(int count) const;

  virtual Datatype Create_vector(int count, int blocklength,
     int stride) const;

  virtual Datatype Create_indexed(int count,
           const int array_of_blocklengths[],
           const int array_of_displacements[]) const;

  static Datatype Create_struct(int count, const int array_of_blocklengths[],
         const Aint array_of_displacements[],
         const Datatype array_if_types[]);


  virtual Datatype Create_hindexed(int count, const int array_of_blocklengths[],
     const Aint array_of_displacements[]) const;

  virtual Datatype Create_hvector(int count, int blocklength,
           Aint stride) const;

  virtual int Get_size() const;

  virtual void Get_extent(Aint& lb, Aint& extent) const;

  virtual void Commit();

  virtual void Free();



  virtual void Pack(const void* inbuf, int incount, void *outbuf,
      int outsize, int& position, const Comm &comm) const;
  virtual void Unpack(const void* inbuf, int insize, void *outbuf,
        int outcount, int& position, const Comm& comm) const;
  virtual int Pack_size(int incount, const Comm& comm) const;

protected:
  MPI_Datatype mpi_datatype;

};
# 64 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2

  typedef void User_function(const void* invec, void* inoutvec, int len,
        const Datatype& datatype);

# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pexception.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pexception.h"
class Exception {
public:
  inline Exception(int ec) : error_code(ec) {
    (void)MPI_Error_class(error_code, &error_class);
    int resultlen;
    error_string = new char[512];
    (void)MPI_Error_string(error_code, error_string, &resultlen);
  }

  inline int Get_error_code() const { return error_code; }

  inline int Get_error_class() const { return error_class; }

  inline const char* Get_error_string() const { return error_string; }

protected:
  int error_code;
  char* error_string;
  int error_class;
};
# 69 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pop.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pop.h"
class Op {
public:

  Op() : mpi_op(((MPI_Op)0)) { }

  Op(const Op& op) : op_user_function(op.op_user_function), mpi_op(op.mpi_op) { }

  Op(const MPI_Op &i) : mpi_op(i) { }


  virtual ~Op() { }


  Op& operator=(const Op& op);
  Op& operator= (const MPI_Op &i);

  MPI2CPP_BOOL_T operator== (const Op &a);
  MPI2CPP_BOOL_T operator!= (const Op &a);

  operator MPI_Op () const;



  virtual void Init(User_function *func, MPI2CPP_BOOL_T commute);
  virtual void Free(void);

  User_function *op_user_function;

protected:
  MPI_Op mpi_op;

};
# 70 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pstatus.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pstatus.h"
class Status {
  friend class PMPI::Comm;
  friend class PMPI::Request;

public:

  inline Status() { }

  Status(const Status& data) : mpi_status(data.mpi_status) { }

  inline Status(const MPI_Status &i) : mpi_status(i) { }

  inline virtual ~Status() {}

  Status& operator=(const Status& data) {
    mpi_status = data.mpi_status; return *this;
  }




  inline Status& operator= (const MPI_Status &i) {
    mpi_status = i; return *this; }
  inline operator MPI_Status () const { return mpi_status; }
  inline operator MPI_Status* () const { return (MPI_Status*)&mpi_status; }





  inline virtual int Get_count(const Datatype& datatype) const;

  inline virtual MPI2CPP_BOOL_T Is_cancelled() const;

  virtual int Get_elements(const Datatype& datatype) const;




  inline virtual int Get_source() const;

  inline virtual void Set_source(int source);

  inline virtual int Get_tag() const;

  inline virtual void Set_tag(int tag);

  inline virtual int Get_error() const;

  inline virtual void Set_error(int error);

protected:
  MPI_Status mpi_status;

};
# 71 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/prequest.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/prequest.h"
class Request {
public:

  Request(void) { }
  virtual ~Request() {}
  Request(const MPI_Request &i) : mpi_request(i) { }


  Request(const Request& r) : mpi_request(r.mpi_request) { }

  Request& operator=(const Request& r) {
    mpi_request = r.mpi_request;
    return *this;
  }


  MPI2CPP_BOOL_T operator== (const Request &a)
  { return (MPI2CPP_BOOL_T)(mpi_request == a.mpi_request); }
  MPI2CPP_BOOL_T operator!= (const Request &a)
  { return (MPI2CPP_BOOL_T)!(*this == a); }


  Request& operator= (const MPI_Request &i) {
    mpi_request = i; return *this; }
  operator MPI_Request () const { return mpi_request; }
  operator MPI_Request* () const { return (MPI_Request*)&mpi_request; }





  virtual void Wait(Status &status);

  virtual void Wait();

  virtual MPI2CPP_BOOL_T Test(Status &status);

  virtual MPI2CPP_BOOL_T Test();

  virtual void Free(void);

  static int Waitany(int count, Request array[], Status& status);

  static int Waitany(int count, Request array[]);

  static MPI2CPP_BOOL_T Testany(int count, Request array[], int& index, Status& status);

  static MPI2CPP_BOOL_T Testany(int count, Request array[], int& index);

  static void Waitall(int count, Request req_array[], Status stat_array[]);

  static void Waitall(int count, Request req_array[]);

  static MPI2CPP_BOOL_T Testall(int count, Request req_array[], Status stat_array[]);

  static MPI2CPP_BOOL_T Testall(int count, Request req_array[]);

  static int Waitsome(int incount, Request req_array[],
        int array_of_indices[], Status stat_array[]);

  static int Waitsome(int incount, Request req_array[],
        int array_of_indices[]);

  static int Testsome(int incount, Request req_array[],
        int array_of_indices[], Status stat_array[]);

  static int Testsome(int incount, Request req_array[],
        int array_of_indices[]);

  virtual void Cancel(void) const;

protected:
  MPI_Request mpi_request;

private:

  static Status ignored_status;

};


class Prequest : public Request {
public:

  Prequest() { }

  Prequest(const Prequest& p) : Request(p) { }

  Prequest(const MPI_Request &i) : Request(i) { }

  virtual ~Prequest() { }

  virtual void Start();

  static void Startall(int count, Prequest array_of_requests[]);

};
# 72 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pgroup.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pgroup.h"
class Group {
public:

  inline Group() : mpi_group(((MPI_Group)0)) { }
  inline virtual ~Group() {}
  inline Group(const MPI_Group &i) : mpi_group(i) { }


  Group(const Group& g): mpi_group(g.mpi_group) { }

  Group& operator=(const Group& g) {
    mpi_group = g.mpi_group;
    return *this;
  }


  MPI2CPP_BOOL_T operator== (const Group &a) {
    return (MPI2CPP_BOOL_T)(mpi_group == a.mpi_group);
  }
  MPI2CPP_BOOL_T operator!= (const Group &a) { return (MPI2CPP_BOOL_T)!(*this == a); }


  inline Group& operator= (const MPI_Group &i) { mpi_group = i; return *this; }
  inline operator const MPI_Group& () const { return mpi_group; }
  inline operator MPI_Group* () const { return (MPI_Group*)&mpi_group; }

  inline const MPI_Group& mpi() const { return mpi_group; }




  virtual int Get_size() const;

  virtual int Get_rank() const;

  static void Translate_ranks(const Group& group1, int n, const int ranks1[],
         const Group& group2, int ranks2[]);

  static int Compare(const Group& group1, const Group& group2);

  static Group Union(const Group &group1, const Group &group2);

  static Group Intersect(const Group &group1, const Group &group2);

  static Group Difference(const Group &group1, const Group &group2);

  virtual Group Incl(int n, const int ranks[]) const;

  virtual Group Excl(int n, const int ranks[]) const;

  virtual Group Range_incl(int n, const int ranges[][3]) const;

  virtual Group Range_excl(int n, const int ranges[][3]) const;

  virtual void Free();

protected:
  MPI_Group mpi_group;

};
# 73 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pcomm.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pcomm.h"
class Comm_Null {
public:


  Comm_Null() : mpi_comm(((MPI_Comm)0)) { }

  Comm_Null(const Comm_Null& data) : mpi_comm(data.mpi_comm) { }

  Comm_Null(const MPI_Comm& data) : mpi_comm(data) { }






  MPI2CPP_BOOL_T operator==(const Comm_Null& data) const {
    return (MPI2CPP_BOOL_T) (mpi_comm == data.mpi_comm); }

  MPI2CPP_BOOL_T operator!=(const Comm_Null& data) const {
    return (MPI2CPP_BOOL_T) !(*this == data);}


  operator MPI_Comm() const { return mpi_comm; }
  operator MPI_Comm*() { return &mpi_comm; }

protected:
  MPI_Comm mpi_comm;
};

class Comm : public Comm_Null {
public:







  typedef void Errhandler_fn(Comm&, int*, ...);
  typedef int Copy_attr_function(const Comm& oldcomm, int comm_keyval,
     void* extra_state, void* attribute_val_in,
     void* attribute_val_out,
     MPI2CPP_BOOL_T& flag);
  typedef int Delete_attr_function(Comm& comm, int comm_keyval,
       void* attribute_val, void* extra_state);





  Comm() { }

  Comm(const Comm_Null& data) : Comm_Null(data) { }

  Comm(const MPI_Comm& data) : Comm_Null(data) { }





  virtual void Send(const void *buf, int count,
      const Datatype & datatype, int dest, int tag) const;

  virtual void Recv(void *buf, int count, const Datatype & datatype,
      int source, int tag, Status & status) const;

  virtual void Recv(void *buf, int count, const Datatype & datatype,
      int source, int tag) const;

  virtual void Bsend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const;

  virtual void Ssend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const;

  virtual void Rsend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const;

  virtual Request Isend(const void *buf, int count,
   const Datatype & datatype,
   int dest, int tag) const;

  virtual Request Ibsend(const void *buf, int count, const
    Datatype & datatype, int dest, int tag) const;

  virtual Request Issend(const void *buf, int count,
    const Datatype & datatype, int dest, int tag) const;

  virtual Request Irsend(const void *buf, int count,
    const Datatype & datatype, int dest, int tag) const;

  virtual Request Irecv(void *buf, int count,
   const Datatype & datatype, int source, int tag) const;

  virtual MPI2CPP_BOOL_T Iprobe(int source, int tag, Status & status) const;

  virtual MPI2CPP_BOOL_T Iprobe(int source, int tag) const;

  virtual void Probe(int source, int tag, Status & status) const;

  virtual void Probe(int source, int tag) const;

  virtual Prequest Send_init(const void *buf, int count,
        const Datatype & datatype,
        int dest, int tag) const;

  virtual Prequest Bsend_init(const void *buf, int count,
         const Datatype & datatype,
         int dest, int tag) const;

  virtual Prequest Ssend_init(const void *buf, int count,
         const Datatype & datatype,
         int dest, int tag) const;

  virtual Prequest Rsend_init(const void *buf, int count,
         const Datatype & datatype,
         int dest, int tag) const;

  virtual Prequest Recv_init(void *buf, int count,
        const Datatype & datatype,
        int source, int tag) const;

  virtual void Sendrecv(const void *sendbuf, int sendcount,
   const Datatype & sendtype, int dest, int sendtag,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int source,
   int recvtag, Status & status) const;

  virtual void Sendrecv(const void *sendbuf, int sendcount,
   const Datatype & sendtype, int dest, int sendtag,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int source,
   int recvtag) const;

  virtual void Sendrecv_replace(void *buf, int count,
    const Datatype & datatype, int dest,
    int sendtag, int source,
    int recvtag, Status & status) const;

  virtual void Sendrecv_replace(void *buf, int count,
    const Datatype & datatype, int dest,
    int sendtag, int source,
    int recvtag) const;





  virtual Group Get_group() const;

  virtual int Get_size() const;

  virtual int Get_rank() const;

  static int Compare(const Comm & comm1, const Comm & comm2);

  virtual void Free(void);

  virtual MPI2CPP_BOOL_T Is_inter() const;





  virtual int Get_topology() const;





  virtual void Abort(int errorcode);

  virtual void Set_errhandler(const Errhandler& errhandler);

  virtual Errhandler Get_errhandler() const;

  static Errhandler Create_errhandler(Errhandler_fn* function);





  static int Create_keyval(Copy_attr_function*,
      Delete_attr_function*,
      void*);

  static void Free_keyval(int& comm_keyval);

  virtual void Set_attr(int comm_keyval, const void* attribute_val) const;

  virtual MPI2CPP_BOOL_T Get_attr(int comm_keyval, void* attribute_val) const;

  virtual void Delete_attr(int comm_keyval);

  static int NULL_COPY_FN(const PMPI::Comm& oldcomm, int comm_keyval,
     void* extra_state, void* attribute_val_in,
     void* attribute_val_out, MPI2CPP_BOOL_T& flag);

  static int DUP_FN(const Comm& oldcomm, int comm_keyval,
      void* extra_state, void* attribute_val_in,
      void* attribute_val_out, MPI2CPP_BOOL_T& flag);

  static int NULL_DELETE_FN(Comm& comm, int comm_keyval, void* attribute_val,
       void* extra_state);
private:

  static Status ignored_status;

public:

  Errhandler* my_errhandler;
# 250 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pcomm.h"
  typedef Map<Comm*, CommType>::Pair comm_pair_t;
  typedef Map<MPI_Comm, comm_pair_t*> mpi_comm_map_t;
  static mpi_comm_map_t mpi_comm_map;

  typedef Map<MPI_Comm, Comm*> mpi_err_map_t;
  static mpi_err_map_t mpi_err_map;

  typedef Map<Comm::Copy_attr_function*, Comm::Delete_attr_function*>::Pair key_pair_t;
  typedef Map<int, key_pair_t*> key_fn_map_t;
  static key_fn_map_t key_fn_map;
};
# 74 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/perrhandler.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/perrhandler.h"
class Errhandler {
public:

  inline Errhandler()
    : mpi_errhandler(((MPI_Errhandler )0)) {}

  inline Errhandler(const MPI_Errhandler &i)
    : mpi_errhandler(i) {}

  inline Errhandler(const Errhandler& e);

  inline virtual ~Errhandler() {}

  inline Errhandler& operator=(const Errhandler& e);


  inline MPI2CPP_BOOL_T operator==(const Errhandler &a);

  inline MPI2CPP_BOOL_T operator!=(const Errhandler &a) {
    return (MPI2CPP_BOOL_T)!(*this == a); }


  inline Errhandler& operator= (const MPI_Errhandler &i) {
    mpi_errhandler = i; return *this; }

  inline operator MPI_Errhandler() const { return mpi_errhandler; }

  inline operator MPI_Errhandler*() { return &mpi_errhandler; }





  inline virtual void Free(void);

  Comm::Errhandler_fn* handler_fn;

protected:
  MPI_Errhandler mpi_errhandler;

public:



  inline void init() const {
    (void)MPI_Errhandler_create((MPI_Handler_function*)&throw_excptn_fctn,
    (MPI_Errhandler *)&mpi_errhandler);
  }
};
# 75 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pintracomm.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pintracomm.h"
class Intracomm : public Comm {
public:

  Intracomm() { }

  Intracomm(const Intracomm& data) : Comm(data) { }


  inline Intracomm(const MPI_Comm& data);





  virtual void Barrier() const;

  virtual void Bcast(void *buffer, int count,
       const Datatype& datatype, int root) const;

  virtual void Gather(const void *sendbuf, int sendcount,
        const Datatype & sendtype,
        void *recvbuf, int recvcount,
        const Datatype & recvtype, int root) const;

  virtual void Gatherv(const void *sendbuf, int sendcount,
         const Datatype & sendtype, void *recvbuf,
         const int recvcounts[], const int displs[],
         const Datatype & recvtype, int root) const;

  virtual void Scatter(const void *sendbuf, int sendcount,
         const Datatype & sendtype,
         void *recvbuf, int recvcount,
         const Datatype & recvtype, int root) const;

  virtual void Scatterv(const void *sendbuf, const int sendcounts[],
   const int displs[], const Datatype & sendtype,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int root) const;

  virtual void Allgather(const void *sendbuf, int sendcount,
    const Datatype & sendtype, void *recvbuf,
    int recvcount, const Datatype & recvtype) const;

  virtual void Allgatherv(const void *sendbuf, int sendcount,
     const Datatype & sendtype, void *recvbuf,
     const int recvcounts[], const int displs[],
     const Datatype & recvtype) const;

  virtual void Alltoall(const void *sendbuf, int sendcount,
   const Datatype & sendtype, void *recvbuf,
   int recvcount, const Datatype & recvtype) const;

  virtual void Alltoallv(const void *sendbuf, const int sendcounts[],
    const int sdispls[], const Datatype & sendtype,
    void *recvbuf, const int recvcounts[],
    const int rdispls[], const Datatype & recvtype) const;

  virtual void Reduce(const void *sendbuf, void *recvbuf, int count,
        const Datatype & datatype, const Op & op,
        int root) const;

  virtual void Allreduce(const void *sendbuf, void *recvbuf, int count,
    const Datatype & datatype, const Op & op) const;

  virtual void Reduce_scatter(const void *sendbuf, void *recvbuf,
         int recvcounts[],
         const Datatype & datatype,
         const Op & op) const;

  virtual void Scan(const void *sendbuf, void *recvbuf, int count,
      const Datatype & datatype, const Op & op) const;

  Intracomm Dup() const;




  Comm&

  Clone() const;

  virtual Intracomm Create(const Group& group) const;

  virtual Intracomm Split(int color, int key) const;

  virtual Intercomm Create_intercomm(int local_leader, const Comm& peer_comm,
         int remote_leader, int tag) const;

  virtual Cartcomm Create_cart(int ndims, const int dims[],
          const MPI2CPP_BOOL_T periods[],
          MPI2CPP_BOOL_T reorder) const;

  virtual Graphcomm Create_graph(int nnodes, const int index[],
     const int edges[],
     MPI2CPP_BOOL_T reorder) const;


protected:

public:
  static Op* current_op;

};
# 76 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/ptopology.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/ptopology.h"
class Cartcomm : public Intracomm {
public:

  Cartcomm() : Intracomm(((MPI_Comm)0)) { }

  Cartcomm(const Cartcomm& data) : Intracomm(data) { }

  inline Cartcomm(const MPI_Comm& data);





  Cartcomm Dup() const;




  Comm&

  Clone() const;





  virtual int Get_dim() const;


  virtual void Get_topo(int maxdims, int dims[], MPI2CPP_BOOL_T periods[],
         int coords[]) const;

  virtual int Get_cart_rank(const int coords[]) const;

  virtual void Get_coords(int rank, int maxdims, int coords[]) const;

  virtual void Shift(int direction, int disp,
       int &rank_source, int &rank_dest) const;

  virtual Cartcomm Sub(const MPI2CPP_BOOL_T remain_dims[]);

  virtual int Map(int ndims, const int dims[], const MPI2CPP_BOOL_T periods[]) const;

};





class Graphcomm : public Intracomm {
public:

  Graphcomm() : Intracomm(((MPI_Comm)0)) { }

  Graphcomm(const Graphcomm& data) : Intracomm(data) { }

  inline Graphcomm(const MPI_Comm& data);





  Graphcomm Dup() const;




  Comm&

  Clone() const;





  virtual void Get_dims(int nnodes[], int nedges[]) const;

  virtual void Get_topo(int maxindex, int maxedges, int index[],
   int edges[]) const;

  virtual int Get_neighbors_count(int rank) const;

  virtual void Get_neighbors(int rank, int maxneighbors,
        int neighbors[]) const;

  virtual int Map(int nnodes, const int index[],
    const int edges[]) const;

};
# 77 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pintercomm.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pintercomm.h"
class Intercomm : public Comm {
public:


  Intercomm() : Comm(((MPI_Comm)0)) { }

  Intercomm(const Intercomm& data) : Comm(data) { }

  Intercomm(const MPI_Comm& data) : Comm(data) { }





  Intercomm Dup() const;




  Comm&

  Clone() const;

  virtual int Get_remote_size() const;

  Group Get_remote_group() const;

  virtual Intracomm Merge(MPI2CPP_BOOL_T high);

};
# 78 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pmpi++.h" 2






}
# 87 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2



namespace MPI {






  extern int errno;


  class Comm_Null;
  class Comm;
  class Intracomm;
  class Intercomm;
  class Graphcomm;
  class Cartcomm;
  class Datatype;
  class Errhandler;
  class Group;
  class Op;
  class Request;
  class Status;

  typedef MPI_Aint Aint;

# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/constants.h" 1
# 32 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/constants.h"
extern const int SUCCESS;
extern const int ERR_BUFFER;
extern const int ERR_COUNT;
extern const int ERR_TYPE;
extern const int ERR_TAG ;
extern const int ERR_COMM;
extern const int ERR_RANK;
extern const int ERR_REQUEST;
extern const int ERR_ROOT;
extern const int ERR_GROUP;
extern const int ERR_OP;
extern const int ERR_TOPOLOGY;
extern const int ERR_DIMS;
extern const int ERR_ARG;
extern const int ERR_UNKNOWN;
extern const int ERR_TRUNCATE;
extern const int ERR_OTHER;
extern const int ERR_INTERN;
extern const int ERR_PENDING;
extern const int ERR_IN_STATUS;
extern const int ERR_LASTCODE;


extern const void* BOTTOM;
extern const int PROC_NULL;
extern const int ANY_SOURCE;
extern const int ANY_TAG;
extern const int UNDEFINED;
extern const int BSEND_OVERHEAD;
extern const int KEYVAL_INVALID;


extern const Errhandler ERRORS_ARE_FATAL;
extern const Errhandler ERRORS_RETURN;
extern const Errhandler ERRORS_THROW_EXCEPTIONS;


extern const int MAX_PROCESSOR_NAME;
extern const int MAX_ERROR_STRING;


extern const Datatype CHAR;
extern const Datatype SHORT;
extern const Datatype INT;
extern const Datatype LONG;
extern const Datatype SIGNED_CHAR;
extern const Datatype UNSIGNED_CHAR;
extern const Datatype UNSIGNED_SHORT;
extern const Datatype UNSIGNED;
extern const Datatype UNSIGNED_LONG;
extern const Datatype FLOAT;
extern const Datatype DOUBLE;
extern const Datatype LONG_DOUBLE;
extern const Datatype BYTE;
extern const Datatype PACKED;


extern const Datatype FLOAT_INT;
extern const Datatype DOUBLE_INT;
extern const Datatype LONG_INT;
extern const Datatype TWOINT;
extern const Datatype SHORT_INT;
extern const Datatype LONG_DOUBLE_INT;



extern const Datatype INTEGER;
extern const Datatype REAL;
extern const Datatype DOUBLE_PRECISION;
extern const Datatype F_COMPLEX;
extern const Datatype LOGICAL;
extern const Datatype CHARACTER;


extern const Datatype TWOREAL;
extern const Datatype TWODOUBLE_PRECISION;
extern const Datatype TWOINTEGER;
# 120 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/constants.h"
extern const Datatype INTEGER2;
extern const Datatype REAL2;




extern const Datatype LONG_LONG;
extern const Datatype UNSIGNED_LONG_LONG;
# 139 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/constants.h"
extern const Datatype UB;
extern const Datatype LB;



extern Intracomm COMM_WORLD;
extern Intracomm COMM_SELF;


extern const int IDENT;
extern const int CONGRUENT;
extern const int SIMILAR;
extern const int UNEQUAL;


extern const int TAG_UB;
extern const int IO;
extern const int HOST;
extern const int WTIME_IS_GLOBAL;


extern const Op MAX;
extern const Op MIN;
extern const Op SUM;
extern const Op PROD;
extern const Op MAXLOC;
extern const Op MINLOC;
extern const Op BAND;
extern const Op BOR;
extern const Op BXOR;
extern const Op LAND;
extern const Op LOR;
extern const Op LXOR;


extern const Group GROUP_NULL;


extern Comm_Null COMM_NULL;
extern const Datatype DATATYPE_NULL;
extern Request REQUEST_NULL;
extern const Op OP_NULL;
extern const Errhandler ERRHANDLER_NULL;


extern const Group GROUP_EMPTY;


extern const int GRAPH;
extern const int CART;
# 116 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions.h"
 void
Attach_buffer(void* buffer, int size);

 int
Detach_buffer(void*& buffer);





 void
Compute_dims(int nnodes, int ndims, int dims[]);





 void
Get_processor_name(char* name, int& resultlen);

 void
Get_error_string(int errorcode, char* string, int& resultlen);

 int
Get_error_class(int errorcode);

 double
Wtime();

 double
Wtick();

 void
Init(int& argc, char**& argv);

 void
Init();

 void
Real_init();

 void
Finalize();

 MPI2CPP_BOOL_T
Is_initialized();





 void
Pcontrol(const int level, ...);



 void
Get_version(int& version, int& subversion);


 PMPI::Aint
Get_address(void* location);
# 117 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/datatype.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/datatype.h"
class Datatype {



public:




  inline Datatype() { }


  inline Datatype(const MPI_Datatype &i) : pmpi_datatype(i) { }


  inline Datatype(const Datatype& dt) : pmpi_datatype(dt.pmpi_datatype) { }

  inline Datatype(const PMPI::Datatype& dt) : pmpi_datatype(dt) { }

  inline virtual ~Datatype() {}

  inline Datatype& operator=(const Datatype& dt) {
    pmpi_datatype = dt.pmpi_datatype; return *this; }


  inline MPI2CPP_BOOL_T operator== (const Datatype &a) const
    { return (MPI2CPP_BOOL_T) (pmpi_datatype == a.pmpi_datatype); }

  inline MPI2CPP_BOOL_T operator!= (const Datatype &a) const
    { return (MPI2CPP_BOOL_T) !(*this == a); }


  inline Datatype& operator= (const MPI_Datatype &i)
    { pmpi_datatype = i; return *this; }

  inline operator MPI_Datatype() const { return (MPI_Datatype)pmpi_datatype; }


  inline operator const PMPI::Datatype&() const { return pmpi_datatype; }

  inline const PMPI::Datatype& pmpi() const { return pmpi_datatype; }
# 106 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/datatype.h"
  virtual Datatype Create_contiguous(int count) const;

  virtual Datatype Create_vector(int count, int blocklength,
     int stride) const;

  virtual Datatype Create_indexed(int count,
      const int array_of_blocklengths[],
      const int array_of_displacements[]) const;

  static Datatype Create_struct(int count, const int array_of_blocklengths[],
    const Aint array_of_displacements[],
    const Datatype array_if_types[]);

  virtual Datatype Create_hindexed(int count, const int array_of_blocklengths[],
       const Aint array_of_displacements[]) const;

  virtual Datatype Create_hvector(int count, int blocklength, Aint stride) const;

  virtual int Get_size() const;

  virtual void Get_extent(Aint& lb, Aint& extent) const;

  virtual void Commit();

  virtual void Free();

  virtual void Pack(const void* inbuf, int incount, void *outbuf,
      int outsize, int& position, const Comm &comm) const;

  virtual void Unpack(const void* inbuf, int insize, void *outbuf, int outcount,
        int& position, const Comm& comm) const;

  virtual int Pack_size(int incount, const Comm& comm) const;


private:
  PMPI::Datatype pmpi_datatype;






};
# 118 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2

  typedef void User_function(const void* invec, void* inoutvec, int len,
        const Datatype& datatype);

# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/exception.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/exception.h"
class Exception {
public:



  inline Exception(int ec) : pmpi_exception(ec) { }

  int Get_error_code() const;

  int Get_error_class() const;

  const char* Get_error_string() const;
# 76 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/exception.h"
protected:

  PMPI::Exception pmpi_exception;





};
# 123 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op.h"
class Op {
public:


  Op();
  Op(const MPI_Op &i);
  Op(const Op& op);

  Op(const PMPI::Op& op) : pmpi_op(op) { }


  virtual ~Op();

  Op& operator=(const Op& op);
  Op& operator= (const MPI_Op &i);

  inline MPI2CPP_BOOL_T operator== (const Op &a);
  inline MPI2CPP_BOOL_T operator!= (const Op &a);

  inline operator MPI_Op () const;


  inline operator const PMPI::Op&() const { return pmpi_op; }



  virtual void Init(User_function *func, MPI2CPP_BOOL_T commute);
  virtual void Free();
# 66 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op.h"
private:
  PMPI::Op pmpi_op;


};
# 124 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/status.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/status.h"
class Status {



  friend class MPI::Comm;
  friend class MPI::Request;

public:



  Status() { }
  virtual ~Status() {}


  Status(const Status& data) : pmpi_status(data.pmpi_status) { }

  Status(const MPI_Status &i) : pmpi_status(i) { }

  Status& operator=(const Status& data) {
    pmpi_status = data.pmpi_status; return *this; }




  Status& operator= (const MPI_Status &i) {
    pmpi_status = i; return *this; }
  operator MPI_Status () const { return pmpi_status; }

  operator const PMPI::Status&() const { return pmpi_status; }
# 89 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/status.h"
  virtual int Get_count(const Datatype& datatype) const;

  virtual MPI2CPP_BOOL_T Is_cancelled() const;

  virtual int Get_elements(const Datatype& datatype) const;




  virtual int Get_source() const;

  virtual void Set_source(int source);

  virtual int Get_tag() const;

  virtual void Set_tag(int tag);

  virtual int Get_error() const;

  virtual void Set_error(int error);

protected:

  PMPI::Status pmpi_status;




};
# 125 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request.h"
class Request {



public:



  Request() { }
  Request(const MPI_Request &i) : pmpi_request(i) { }


  Request(const Request& r) : pmpi_request(r.pmpi_request) { }

  Request(const PMPI::Request& r) : pmpi_request(r) { }

  virtual ~Request() {}

  Request& operator=(const Request& r) {
    pmpi_request = r.pmpi_request; return *this; }


  MPI2CPP_BOOL_T operator== (const Request &a)
  { return (MPI2CPP_BOOL_T)(pmpi_request == a.pmpi_request); }
  MPI2CPP_BOOL_T operator!= (const Request &a)
  { return (MPI2CPP_BOOL_T)!(*this == a); }


  Request& operator= (const MPI_Request &i) {
    pmpi_request = i; return *this; }

  operator MPI_Request () const { return pmpi_request; }

  operator const PMPI::Request&() const { return pmpi_request; }
# 97 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request.h"
  virtual void Wait(Status &status);

  virtual void Wait();

  virtual MPI2CPP_BOOL_T Test(Status &status);

  virtual MPI2CPP_BOOL_T Test();

  virtual void Free(void);

  static int Waitany(int count, Request array[], Status& status);

  static int Waitany(int count, Request array[]);

  static MPI2CPP_BOOL_T Testany(int count, Request array[], int& index, Status& status);

  static MPI2CPP_BOOL_T Testany(int count, Request array[], int& index);

  static void Waitall(int count, Request req_array[], Status stat_array[]);

  static void Waitall(int count, Request req_array[]);

  static MPI2CPP_BOOL_T Testall(int count, Request req_array[], Status stat_array[]);

  static MPI2CPP_BOOL_T Testall(int count, Request req_array[]);

  static int Waitsome(int incount, Request req_array[],
        int array_of_indices[], Status stat_array[]) ;

  static int Waitsome(int incount, Request req_array[],
        int array_of_indices[]);

  static int Testsome(int incount, Request req_array[],
        int array_of_indices[], Status stat_array[]);

  static int Testsome(int incount, Request req_array[],
        int array_of_indices[]);

  virtual void Cancel(void) const;


protected:




private:

  static Status ignored_status;



  PMPI::Request pmpi_request;


};


class Prequest : public Request {



public:

  Prequest() { }


  Prequest(const Request& p) : Request(p), pmpi_request(p) { }

  Prequest(const PMPI::Prequest& r) : Request((const PMPI::Request&)r), pmpi_request(r) { }

  Prequest(const MPI_Request &i) : Request(i), pmpi_request(i) { }

  virtual ~Prequest() { }

  Prequest& operator=(const Request& r) {
    Request::operator=(r);
    pmpi_request = (PMPI::Prequest)r; return *this; }

  Prequest& operator=(const Prequest& r) {
    Request::operator=(r);
    pmpi_request = r.pmpi_request; return *this; }
# 193 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request.h"
  virtual void Start();

  static void Startall(int count, Prequest array_of_requests[]);


private:
  PMPI::Prequest pmpi_request;

};
# 126 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/group.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/group.h"
class Group {



public:




  inline Group() { }
  inline Group(const MPI_Group &i) : pmpi_group(i) { }

  inline Group(const Group& g) : pmpi_group(g.pmpi_group) { }

  inline Group(const PMPI::Group& g) : pmpi_group(g) { }

  inline virtual ~Group() {}

  Group& operator=(const Group& g) {
    pmpi_group = g.pmpi_group; return *this;
  }


  inline MPI2CPP_BOOL_T operator== (const Group &a) {
    return (MPI2CPP_BOOL_T)(pmpi_group == a.pmpi_group);
  }
  inline MPI2CPP_BOOL_T operator!= (const Group &a) {
    return (MPI2CPP_BOOL_T)!(*this == a);
  }


  Group& operator= (const MPI_Group &i) { pmpi_group = i; return *this; }
  inline operator MPI_Group () const { return pmpi_group.mpi(); }

  inline operator const PMPI::Group&() const { return pmpi_group; }

  const PMPI::Group& pmpi() { return pmpi_group; }
# 97 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/group.h"
  virtual int Get_size() const;

  virtual int Get_rank() const;

  static void Translate_ranks (const Group& group1, int n, const int ranks1[],
          const Group& group2, int ranks2[]);

  static int Compare(const Group& group1, const Group& group2);

  static Group Union(const Group &group1, const Group &group2);

  static Group Intersect(const Group &group1, const Group &group2);

  static Group Difference(const Group &group1, const Group &group2);

  virtual Group Incl(int n, const int ranks[]) const;

  virtual Group Excl(int n, const int ranks[]) const;

  virtual Group Range_incl(int n, const int ranges[][3]) const;

  virtual Group Range_excl(int n, const int ranges[][3]) const;

  virtual void Free();

protected:





private:
  PMPI::Group pmpi_group;


};
# 127 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm.h"
class Comm_Null {



public:




  inline Comm_Null() { }

  inline Comm_Null(const Comm_Null& data) : pmpi_comm(data.pmpi_comm) { }

  inline Comm_Null(const MPI_Comm& data) : pmpi_comm(data) { }

  inline Comm_Null(const PMPI::Comm_Null& data) : pmpi_comm(data) { }




  inline Comm_Null& operator=(const Comm_Null& data) {
    pmpi_comm = data.pmpi_comm;
    return *this;
  }


  inline MPI2CPP_BOOL_T operator==(const Comm_Null& data) const {
    return (MPI2CPP_BOOL_T) (pmpi_comm == data.pmpi_comm); }

  inline MPI2CPP_BOOL_T operator!=(const Comm_Null& data) const {
    return (MPI2CPP_BOOL_T) (pmpi_comm != data.pmpi_comm);}


  inline operator MPI_Comm() const { return pmpi_comm; }

  inline operator const PMPI::Comm_Null&() const { return pmpi_comm; }
# 94 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm.h"
protected:


  PMPI::Comm_Null pmpi_comm;





};


class Comm : public Comm_Null {
public:

  typedef void Errhandler_fn(Comm&, int*, ...);
  typedef int Copy_attr_function(const Comm& oldcomm, int comm_keyval,
     void* extra_state, void* attribute_val_in,
     void* attribute_val_out,
     MPI2CPP_BOOL_T& flag);
  typedef int Delete_attr_function(Comm& comm, int comm_keyval,
       void* attribute_val,
       void* extra_state);







  Comm() { }


  Comm(const Comm_Null& data) : Comm_Null(data) { }



  Comm(const Comm& data) : Comm_Null(data), pmpi_comm((const PMPI::Comm&) data) { }


  Comm(const MPI_Comm& data) : Comm_Null(data), pmpi_comm(data) { }

  Comm(const PMPI::Comm& data) : Comm_Null((const PMPI::Comm_Null&)data), pmpi_comm(data) { }

  operator const PMPI::Comm&() const { return pmpi_comm; }


  Comm& operator=(const Comm& data) {
    this->Comm_Null::operator=(data);
    pmpi_comm = data.pmpi_comm;
    return *this;
  }
  Comm& operator=(const Comm_Null& data) {
    this->Comm_Null::operator=(data);
    MPI_Comm tmp = data;
    pmpi_comm = tmp;
    return *this;
  }

  Comm& operator=(const MPI_Comm& data) {
    this->Comm_Null::operator=(data);
    pmpi_comm = data;
    return *this;
  }
# 170 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm.h"
  virtual void Send(const void *buf, int count,
      const Datatype & datatype, int dest, int tag) const;

  virtual void Recv(void *buf, int count, const Datatype & datatype,
      int source, int tag, Status & status) const;


  virtual void Recv(void *buf, int count, const Datatype & datatype,
      int source, int tag) const;

  virtual void Bsend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const;

  virtual void Ssend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const ;

  virtual void Rsend(const void *buf, int count,
       const Datatype & datatype, int dest, int tag) const;

  virtual Request Isend(const void *buf, int count,
   const Datatype & datatype, int dest, int tag) const;

  virtual Request Ibsend(const void *buf, int count, const
    Datatype & datatype, int dest, int tag) const;

  virtual Request Issend(const void *buf, int count,
    const Datatype & datatype, int dest, int tag) const;

  virtual Request Irsend(const void *buf, int count,
    const Datatype & datatype, int dest, int tag) const;

  virtual Request Irecv(void *buf, int count,
   const Datatype & datatype, int source, int tag) const;

  virtual MPI2CPP_BOOL_T Iprobe(int source, int tag, Status & status) const;

  virtual MPI2CPP_BOOL_T Iprobe(int source, int tag) const;

  virtual void Probe(int source, int tag, Status & status) const;

  virtual void Probe(int source, int tag) const;

  virtual Prequest Send_init(const void *buf, int count,
        const Datatype & datatype, int dest,
        int tag) const;

  virtual Prequest Bsend_init(const void *buf, int count,
         const Datatype & datatype, int dest,
         int tag) const;

  virtual Prequest Ssend_init(const void *buf, int count,
         const Datatype & datatype, int dest,
         int tag) const;

  virtual Prequest Rsend_init(const void *buf, int count,
         const Datatype & datatype, int dest,
         int tag) const;

  virtual Prequest Recv_init(void *buf, int count,
        const Datatype & datatype, int source,
        int tag) const;

  virtual void Sendrecv(const void *sendbuf, int sendcount,
   const Datatype & sendtype, int dest, int sendtag,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int source,
   int recvtag, Status & status) const;

  virtual void Sendrecv(const void *sendbuf, int sendcount,
   const Datatype & sendtype, int dest, int sendtag,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int source,
   int recvtag) const;

  virtual void Sendrecv_replace(void *buf, int count,
    const Datatype & datatype, int dest,
    int sendtag, int source,
    int recvtag, Status & status) const;

  virtual void Sendrecv_replace(void *buf, int count,
    const Datatype & datatype, int dest,
    int sendtag, int source,
    int recvtag) const;





  virtual Group Get_group() const;

  virtual int Get_size() const;

  virtual int Get_rank() const;

  static int Compare(const Comm & comm1, const Comm & comm2);

  virtual Comm& Clone() const = 0;

  virtual void Free(void);

  virtual MPI2CPP_BOOL_T Is_inter() const;





  virtual int Get_topology() const;





  virtual void Abort(int errorcode);





  virtual void Set_errhandler(const Errhandler& errhandler);

  virtual Errhandler Get_errhandler() const;


  static Errhandler Create_errhandler(Comm::Errhandler_fn* function);







  static int Create_keyval(Copy_attr_function* comm_copy_attr_fn,
      Delete_attr_function* comm_delete_attr_fn,
      void* extra_state);

  static void Free_keyval(int& comm_keyval);

  virtual void Set_attr(int comm_keyval, const void* attribute_val) const;

  virtual MPI2CPP_BOOL_T Get_attr(int comm_keyval, void* attribute_val) const;

  virtual void Delete_attr(int comm_keyval);

  static int NULL_COPY_FN(const Comm& oldcomm, int comm_keyval,
     void* extra_state, void* attribute_val_in,
     void* attribute_val_out, MPI2CPP_BOOL_T& flag);

  static int DUP_FN(const Comm& oldcomm, int comm_keyval,
      void* extra_state, void* attribute_val_in,
      void* attribute_val_out, MPI2CPP_BOOL_T& flag);

  static int NULL_DELETE_FN(Comm& comm, int comm_keyval, void* attribute_val,
       void* extra_state);






private:

  PMPI::Comm pmpi_comm;



  static Status ignored_status;
# 360 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm.h"
};
# 128 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/errhandler.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/errhandler.h"
class Errhandler {
public:




  inline Errhandler() { }

  inline virtual ~Errhandler() { }

  inline Errhandler(const MPI_Errhandler &i)
    : pmpi_errhandler(i) { }


  inline Errhandler(const Errhandler& e)
    : pmpi_errhandler(e.pmpi_errhandler) { }

  inline Errhandler(const PMPI::Errhandler& e)
    : pmpi_errhandler(e) { }

  inline Errhandler& operator=(const Errhandler& e) {
    pmpi_errhandler = e.pmpi_errhandler; return *this; }


  inline MPI2CPP_BOOL_T operator==(const Errhandler &a) {
    return (MPI2CPP_BOOL_T)(pmpi_errhandler == a); }

  inline MPI2CPP_BOOL_T operator!=(const Errhandler &a) {
    return (MPI2CPP_BOOL_T)!(*this == a); }


  inline Errhandler& operator= (const MPI_Errhandler &i) {
    pmpi_errhandler = i; return *this; }

  inline operator MPI_Errhandler() const { return pmpi_errhandler; }



  inline operator const PMPI::Errhandler&() const { return pmpi_errhandler; }
# 113 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/errhandler.h"
  virtual void Free();





protected:

  PMPI::Errhandler pmpi_errhandler;





public:





  inline void init() const {





    pmpi_errhandler.init();

  }



  inline void free() const {



    pmpi_errhandler.init();

  }
};
# 129 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm.h"
class Intracomm : public Comm {
public:


  Intracomm() { }

  Intracomm(const Comm_Null& data) : Comm(data) { }
# 46 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm.h"
  Intracomm(const Intracomm& data) : Comm(data), pmpi_comm(data) { }

  Intracomm(const MPI_Comm& data) : Comm(data), pmpi_comm(data) { }

  Intracomm(const PMPI::Intracomm& data)
    : Comm((const PMPI::Comm&)data), pmpi_comm(data) { }


  Intracomm& operator=(const Intracomm& data) {
    Comm::operator=(data);
    pmpi_comm = data.pmpi_comm;
    return *this;
  }
  Intracomm& operator=(const Comm_Null& data) {
    Comm::operator=(data);
    pmpi_comm = (PMPI::Intracomm)data; return *this;
  }

  Intracomm& operator=(const MPI_Comm& data) {
    Comm::operator=(data);
    pmpi_comm = data;
    return *this;
  }
# 94 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm.h"
  virtual void
  Barrier() const;

  virtual void
  Bcast(void *buffer, int count,
 const Datatype& datatype, int root) const;

  virtual void
  Gather(const void *sendbuf, int sendcount,
  const Datatype & sendtype,
  void *recvbuf, int recvcount,
  const Datatype & recvtype, int root) const;

  virtual void
  Gatherv(const void *sendbuf, int sendcount,
   const Datatype & sendtype, void *recvbuf,
   const int recvcounts[], const int displs[],
   const Datatype & recvtype, int root) const;

  virtual void
  Scatter(const void *sendbuf, int sendcount,
   const Datatype & sendtype,
   void *recvbuf, int recvcount,
   const Datatype & recvtype, int root) const;

  virtual void
  Scatterv(const void *sendbuf, const int sendcounts[],
    const int displs[], const Datatype & sendtype,
    void *recvbuf, int recvcount,
    const Datatype & recvtype, int root) const;

  virtual void
  Allgather(const void *sendbuf, int sendcount,
     const Datatype & sendtype, void *recvbuf,
     int recvcount, const Datatype & recvtype) const;

  virtual void
  Allgatherv(const void *sendbuf, int sendcount,
      const Datatype & sendtype, void *recvbuf,
      const int recvcounts[], const int displs[],
      const Datatype & recvtype) const;

  virtual void
  Alltoall(const void *sendbuf, int sendcount,
    const Datatype & sendtype, void *recvbuf,
    int recvcount, const Datatype & recvtype) const;

  virtual void
  Alltoallv(const void *sendbuf, const int sendcounts[],
     const int sdispls[], const Datatype & sendtype,
     void *recvbuf, const int recvcounts[],
     const int rdispls[], const Datatype & recvtype) const;

  virtual void
  Reduce(const void *sendbuf, void *recvbuf, int count,
  const Datatype & datatype, const Op & op,
  int root) const;


  virtual void
  Allreduce(const void *sendbuf, void *recvbuf, int count,
     const Datatype & datatype, const Op & op) const;

  virtual void
  Reduce_scatter(const void *sendbuf, void *recvbuf,
   int recvcounts[],
   const Datatype & datatype,
   const Op & op) const;

  virtual void
  Scan(const void *sendbuf, void *recvbuf, int count,
       const Datatype & datatype, const Op & op) const;

  Intracomm
  Dup() const;


  virtual



  Comm&

  Clone() const;

  virtual Intracomm
  Create(const Group& group) const;

  virtual Intracomm
  Split(int color, int key) const;

  virtual Intercomm
  Create_intercomm(int local_leader, const Comm& peer_comm,
     int remote_leader, int tag) const;

  virtual Cartcomm
  Create_cart(int ndims, const int dims[],
       const MPI2CPP_BOOL_T periods[], MPI2CPP_BOOL_T reorder) const;

  virtual Graphcomm
  Create_graph(int nnodes, const int index[],
        const int edges[], MPI2CPP_BOOL_T reorder) const;




protected:



  PMPI::Intracomm pmpi_comm;


public:




};
# 130 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology.h"
class Cartcomm : public Intracomm {
public:


  Cartcomm() { }

  Cartcomm(const Comm_Null& data) : Intracomm(data) { }

  inline Cartcomm(const MPI_Comm& data);

  Cartcomm(const Cartcomm& data) : Intracomm(data), pmpi_comm(data) { }
  Cartcomm(const PMPI::Cartcomm& d) : Intracomm((const PMPI::Intracomm&)d), pmpi_comm(d) { }


  Cartcomm& operator=(const Cartcomm& data) {
    Intracomm::operator=(data);
    pmpi_comm = data.pmpi_comm; return *this; }
  Cartcomm& operator=(const Comm_Null& data) {
    Intracomm::operator=(data);
    pmpi_comm = (PMPI::Cartcomm)data; return *this; }

  Cartcomm& operator=(const MPI_Comm& data) {
    Intracomm::operator=(data);
    pmpi_comm = data; return *this; }
# 70 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology.h"
  Cartcomm Dup() const;

  virtual



  Comm&

  Clone() const;






  virtual int Get_dim() const;

  virtual void Get_topo(int maxdims, int dims[], MPI2CPP_BOOL_T periods[],
   int coords[]) const;

  virtual int Get_cart_rank(const int coords[]) const;

  virtual void Get_coords(int rank, int maxdims, int coords[]) const;

  virtual void Shift(int direction, int disp,
       int &rank_source, int &rank_dest) const;

  virtual Cartcomm Sub(const MPI2CPP_BOOL_T remain_dims[]);

  virtual int Map(int ndims, const int dims[], const MPI2CPP_BOOL_T periods[]) const;


private:
  PMPI::Cartcomm pmpi_comm;

};






class Graphcomm : public Intracomm {
public:


  Graphcomm() { }

  Graphcomm(const Comm_Null& data) : Intracomm(data) { }

  inline Graphcomm(const MPI_Comm& data);

  Graphcomm(const Graphcomm& data) : Intracomm(data), pmpi_comm(data) { }
  Graphcomm(const PMPI::Graphcomm& d) : Intracomm((const PMPI::Intracomm&)d), pmpi_comm(d) { }


  Graphcomm& operator=(const Graphcomm& data) {
    Intracomm::operator=(data);
    pmpi_comm = data.pmpi_comm; return *this; }
  Graphcomm& operator=(const Comm_Null& data) {
    Intracomm::operator=(data);
    pmpi_comm = (PMPI::Graphcomm)data; return *this; }

  Graphcomm& operator=(const MPI_Comm& data) {
    Intracomm::operator=(data);
    pmpi_comm = data; return *this; }
# 153 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology.h"
  Graphcomm Dup() const;

  virtual



  Comm&

  Clone() const;





  virtual void Get_dims(int nnodes[], int nedges[]) const;

  virtual void Get_topo(int maxindex, int maxedges, int index[],
   int edges[]) const;

  virtual int Get_neighbors_count(int rank) const;

  virtual void Get_neighbors(int rank, int maxneighbors,
        int neighbors[]) const;

  virtual int Map(int nnodes, const int index[],
    const int edges[]) const;


private:
  PMPI::Graphcomm pmpi_comm;

};
# 131 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm.h" 1
# 31 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm.h"
class Intercomm : public Comm {



public:


  Intercomm() : Comm(((MPI_Comm)0)) { }

  Intercomm(const Comm_Null& data) : Comm(data) { }

  Intercomm(const MPI_Comm& data) : Comm(data) { }



  Intercomm(const Intercomm& data) : Comm(data), pmpi_comm(data.pmpi_comm) { }
  Intercomm(const PMPI::Intercomm& d) : Comm((const PMPI::Comm&)d), pmpi_comm(d) { }


  Intercomm& operator=(const Intercomm& data) {
    Comm::operator=(data);
    pmpi_comm = data.pmpi_comm; return *this; }
  Intercomm& operator=(const Comm_Null& data) {
    Comm::operator=(data);
    Intercomm& ic = (Intercomm&)data;
    pmpi_comm = ic.pmpi_comm; return *this; }

  Intercomm& operator=(const MPI_Comm& data) {
    Comm::operator=(data);
    pmpi_comm = PMPI::Intercomm(data); return *this; }
# 80 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm.h"
  Intercomm Dup() const;

  virtual



  Comm&

  Clone() const;

  virtual int Get_remote_size() const;

  virtual Group Get_remote_group() const;

  virtual Intracomm Merge(MPI2CPP_BOOL_T high);






private:
  PMPI::Intercomm pmpi_comm;

};
# 132 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2






}



# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pop_inln.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pop_inln.h"
inline PMPI::Op&
PMPI::Op::operator=(const PMPI::Op& op)
{
  mpi_op = op.mpi_op;
  op_user_function = op.op_user_function;
  return *this;
}


inline MPI2CPP_BOOL_T
PMPI::Op::operator==(const PMPI::Op &a)
{
  return (MPI2CPP_BOOL_T)(mpi_op == a.mpi_op);
}

inline MPI2CPP_BOOL_T
PMPI::Op::operator!= (const PMPI::Op &a) { return (MPI2CPP_BOOL_T)!(*this == a); }


inline PMPI::Op&
PMPI::Op::operator= (const MPI_Op &i) { mpi_op = i; return *this; }

inline
PMPI::Op::operator MPI_Op () const { return mpi_op; }
# 143 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pgroup_inln.h" 1
# 144 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/pstatus_inln.h" 1
# 145 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/prequest_inln.h" 1
# 146 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 159 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h"
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/datatype_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/datatype_inln.h"
inline PMPI::Datatype
PMPI::Datatype::Create_contiguous(int count) const
{
  MPI_Datatype newtype;
  (void)MPI_Type_contiguous(count, mpi_datatype, &newtype);
  return newtype;
}

inline PMPI::Datatype
PMPI::Datatype::Create_vector(int count, int blocklength,
        int stride) const
{
  MPI_Datatype newtype;
  (void)MPI_Type_vector(count, blocklength, stride, mpi_datatype, &newtype);
  return newtype;
}

inline PMPI::Datatype
PMPI::Datatype::Create_indexed(int count,
         const int array_of_blocklengths[],
         const int array_of_displacements[]) const
{
  MPI_Datatype newtype;
  (void)MPI_Type_indexed(count, (int *) array_of_blocklengths,
    (int *) array_of_displacements, mpi_datatype, &newtype);
  return newtype;
}



inline PMPI::Datatype
PMPI::Datatype::Create_struct(int count, const int array_of_blocklengths[],
        const PMPI::Aint array_of_displacements[],
        const PMPI::Datatype array_of_types[])
{
  MPI_Datatype newtype;
  int i;
  MPI_Datatype* type_array = new MPI_Datatype[count];
  for (i=0; i < count; i++)
    type_array[i] = array_of_types[i];

  (void)MPI_Type_struct(count, (int*)array_of_blocklengths,
   (MPI_Aint*)array_of_displacements, type_array, &newtype);
  delete[] type_array;
  return newtype;
}


inline PMPI::Datatype
PMPI::Datatype::Create_hindexed(int count, const int array_of_blocklengths[],
          const PMPI::Aint array_of_displacements[]) const
{
  MPI_Datatype newtype;
  (void)MPI_Type_hindexed(count, (int*)array_of_blocklengths,
     (MPI_Aint*)array_of_displacements,
     mpi_datatype, &newtype) ;
  return newtype;
}


inline PMPI::Datatype
PMPI::Datatype::Create_hvector(int count, int blocklength,
         PMPI::Aint stride) const
{
  MPI_Datatype newtype;
  (void)MPI_Type_hvector(count, blocklength, (MPI_Aint)stride,
    mpi_datatype, &newtype);

  return newtype;
}

inline int
PMPI::Datatype::Get_size() const
{
  int size;
  (void)MPI_Type_size(mpi_datatype, &size);
  return size;
}

inline void
PMPI::Datatype::Get_extent(PMPI::Aint& lb, PMPI::Aint& extent) const
{


  (void)MPI_Type_lb(mpi_datatype, &lb);
  (void)MPI_Type_extent(mpi_datatype, &extent);
}

inline void
PMPI::Datatype::Commit()
{
  (void)MPI_Type_commit(&mpi_datatype);
}

inline void
PMPI::Datatype::Free()
{
  (void)MPI_Type_free(&mpi_datatype);
}

inline void
PMPI::Datatype::Pack(const void* inbuf, int incount,
      void *outbuf, int outsize,
      int& position, const PMPI::Comm &comm) const
{
  (void)MPI_Pack((void *) inbuf, incount, mpi_datatype, outbuf,
   outsize, &position, comm);
}

inline void
PMPI::Datatype::Unpack(const void* inbuf, int insize,
        void *outbuf, int outcount, int& position,
        const PMPI::Comm& comm) const
{
  (void)MPI_Unpack((void *) inbuf, insize, &position,
     outbuf, outcount, mpi_datatype, comm);
}

inline int
PMPI::Datatype::Pack_size(int incount, const PMPI::Comm& comm) const
{
  int size;
  (void)MPI_Pack_size(incount, mpi_datatype, comm, &size);
  return size;
}
# 160 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions_inln.h" 1
# 35 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/functions_inln.h"
inline void
PMPI::Attach_buffer(void* buffer, int size)
{
  (void)MPI_Buffer_attach(buffer, size);
}

inline int
PMPI::Detach_buffer(void*& buffer)
{
  int size;
  (void)MPI_Buffer_detach(&buffer, &size);
  return size;
}





inline void
PMPI::Compute_dims(int nnodes, int ndims, int dims[])
{
  (void)MPI_Dims_create(nnodes, ndims, dims);
}






inline void
PMPI::Get_processor_name(char* name, int& resultlen)
{
  (void)MPI_Get_processor_name(name, &resultlen);
}

inline void
PMPI::Get_error_string(int errorcode, char* string, int& resultlen)
{
  (void)MPI_Error_string(errorcode, string, &resultlen);
}

inline int
PMPI::Get_error_class(int errorcode)
{
  int errorclass;
  (void)MPI_Error_class(errorcode, &errorclass);
  return errorclass;
}

inline double
PMPI::Wtime()
{
  return (MPI_Wtime());
}

inline double
PMPI::Wtick()
{
  return (MPI_Wtick());
}

inline void
PMPI::Real_init()
{


  MPI::ERRORS_THROW_EXCEPTIONS.init();
}

inline void
PMPI::Init(int& argc, char**& argv)
{
  (void)MPI_Init(&argc, &argv);
  Real_init();
}

inline void
PMPI::Init()
{
  (void)MPI_Init(0, 0);
  Real_init();
}

inline void
PMPI::Finalize()
{


  MPI::ERRORS_THROW_EXCEPTIONS.free();
  (void)MPI_Finalize();
}

inline MPI2CPP_BOOL_T
PMPI::Is_initialized()
{
  int t;
  (void)MPI_Initialized(&t);
  return (MPI2CPP_BOOL_T) t;
}





inline void
PMPI::Pcontrol(const int level, ...)
{
  va_list ap;
  __builtin_va_start(ap,level);

  (void)MPI_Pcontrol(level, ap);
  __builtin_va_end(ap);
}



inline void
PMPI::Get_version(int& version, int& subversion)
{
  (void)MPI_Get_version(&version, &subversion);
}




inline PMPI::Aint
PMPI::Get_address(void* location)
{
  PMPI::Aint ret;
  MPI_Address(location, &ret);
  return ret;
}
# 161 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/request_inln.h"
inline void
PMPI::Request::Wait(PMPI::Status &status)
{
  (void)MPI_Wait(&mpi_request, &status.mpi_status);
}

inline void
PMPI::Request::Wait()
{



  (void)MPI_Wait(&mpi_request, &ignored_status.mpi_status);

}

inline void
PMPI::Request::Free()
{
  (void)MPI_Request_free(&mpi_request);
}

inline MPI2CPP_BOOL_T
PMPI::Request::Test(PMPI::Status &status)
{
  int t;
  (void)MPI_Test(&mpi_request, &t, &status.mpi_status);
  return (MPI2CPP_BOOL_T) t;
}

inline MPI2CPP_BOOL_T
PMPI::Request::Test()
{
  int t;



  (void)MPI_Test(&mpi_request, &t, &ignored_status.mpi_status);

  return (MPI2CPP_BOOL_T) t;
}

inline int
PMPI::Request::Waitany(int count, PMPI::Request array[],
        PMPI::Status& status)
{
  int index, i;
  MPI_Request* array_of_requests = new MPI_Request[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = array[i];
  (void)MPI_Waitany(count, array_of_requests, &index, &status.mpi_status);
  for (i=0; i < count; i++)
    array[i] = array_of_requests[i];
  delete [] array_of_requests;
  return index;
}

inline int
PMPI::Request::Waitany(int count, PMPI::Request array[])
{
  int index, i;
  MPI_Request* array_of_requests = new MPI_Request[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = array[i];



  (void)MPI_Waitany(count, array_of_requests, &index,
      &ignored_status.mpi_status);

  for (i=0; i < count; i++)
    array[i] = array_of_requests[i];
  delete [] array_of_requests;
  return index;
}

inline MPI2CPP_BOOL_T
PMPI::Request::Testany(int count, PMPI::Request array[],
        int& index, PMPI::Status& status)
{
  int i, flag;
  MPI_Request* array_of_requests = new MPI_Request[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = array[i];
  (void)MPI_Testany(count, array_of_requests, &index, &flag, &status.mpi_status);
  for (i=0; i < count; i++)
    array[i] = array_of_requests[i];
  delete [] array_of_requests;
  return (MPI2CPP_BOOL_T)flag;
}

inline MPI2CPP_BOOL_T
PMPI::Request::Testany(int count, PMPI::Request array[], int& index)
{
  int i, flag;
  MPI_Request* array_of_requests = new MPI_Request[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = array[i];




  (void)MPI_Testany(count, array_of_requests, &index, &flag,
      &ignored_status.mpi_status);

  for (i=0; i < count; i++)
    array[i] = array_of_requests[i];
  delete [] array_of_requests;
  return (MPI2CPP_BOOL_T)flag;
}

inline void
PMPI::Request::Waitall(int count, PMPI::Request req_array[],
        PMPI::Status stat_array[])
{
  int i;
  MPI_Request* array_of_requests = new MPI_Request[count];
  MPI_Status* array_of_statuses = new MPI_Status[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = req_array[i];
  (void)MPI_Waitall(count, array_of_requests, array_of_statuses);
  for (i=0; i < count; i++)
    req_array[i] = array_of_requests[i];
  for (i=0; i < count; i++)
    stat_array[i] = array_of_statuses[i];
  delete [] array_of_requests;
  delete [] array_of_statuses;
}

inline void
PMPI::Request::Waitall(int count, PMPI::Request req_array[])
{
  int i;
  MPI_Request* array_of_requests = new MPI_Request[count];

  MPI_Status* array_of_statuses = new MPI_Status[count];

  for (i=0; i < count; i++)
    array_of_requests[i] = req_array[i];



  (void)MPI_Waitall(count, array_of_requests, array_of_statuses);

  for (i=0; i < count; i++)
    req_array[i] = array_of_requests[i];
  delete [] array_of_requests;

  delete [] array_of_statuses;

}

inline MPI2CPP_BOOL_T
PMPI::Request::Testall(int count, PMPI::Request req_array[],
        PMPI::Status stat_array[])
{
  int i, flag;
  MPI_Request* array_of_requests = new MPI_Request[count];
  MPI_Status* array_of_statuses = new MPI_Status[count];
  for (i=0; i < count; i++)
    array_of_requests[i] = req_array[i];
  (void)MPI_Testall(count, array_of_requests, &flag, array_of_statuses);
  for (i=0; i < count; i++)
    req_array[i] = array_of_requests[i];
  for (i=0; i < count; i++)
    stat_array[i] = array_of_statuses[i];
  delete [] array_of_requests;
  delete [] array_of_statuses;
  return (MPI2CPP_BOOL_T) flag;
}

inline MPI2CPP_BOOL_T
PMPI::Request::Testall(int count, PMPI::Request req_array[])
{
  int i, flag;
  MPI_Request* array_of_requests = new MPI_Request[count];

  MPI_Status* array_of_statuses = new MPI_Status[count];

  for (i=0; i < count; i++)
    array_of_requests[i] = req_array[i];



  (void)MPI_Testall(count, array_of_requests, &flag, array_of_statuses);

  for (i=0; i < count; i++)
    req_array[i] = array_of_requests[i];
  delete [] array_of_requests;

  delete [] array_of_statuses;

  return (MPI2CPP_BOOL_T) flag;
}

inline int
PMPI::Request::Waitsome(int incount, PMPI::Request req_array[],
         int array_of_indices[], PMPI::Status stat_array[])
{
  int i, outcount;
  MPI_Request* array_of_requests = new MPI_Request[incount];
  MPI_Status* array_of_statuses = new MPI_Status[incount];
  for (i=0; i < incount; i++)
    array_of_requests[i] = req_array[i];
  (void)MPI_Waitsome(incount, array_of_requests, &outcount,
       array_of_indices, array_of_statuses);
  for (i=0; i < incount; i++)
    req_array[i] = array_of_requests[i];
  for (i=0; i < incount; i++)
    stat_array[i] = array_of_statuses[i];
  delete [] array_of_requests;
  delete [] array_of_statuses;
  return outcount;
}

inline int
PMPI::Request::Waitsome(int incount, PMPI::Request req_array[],
         int array_of_indices[])
{
  int i, outcount;
  MPI_Request* array_of_requests = new MPI_Request[incount];

  MPI_Status* array_of_statuses = new MPI_Status[incount];

  for (i=0; i < incount; i++)
    array_of_requests[i] = req_array[i];




  (void)MPI_Waitsome(incount, array_of_requests, &outcount,
       array_of_indices, array_of_statuses);

  for (i=0; i < incount; i++)
    req_array[i] = array_of_requests[i];
  delete [] array_of_requests;

  delete [] array_of_statuses;

  return outcount;
}

inline int
PMPI::Request::Testsome(int incount, PMPI::Request req_array[],
         int array_of_indices[], PMPI::Status stat_array[])
{
  int i, outcount;
  MPI_Request* array_of_requests = new MPI_Request[incount];
  MPI_Status* array_of_statuses = new MPI_Status[incount];
  for (i=0; i < incount; i++)
    array_of_requests[i] = req_array[i];
  (void)MPI_Testsome(incount, array_of_requests, &outcount,
       array_of_indices, array_of_statuses);
  for (i=0; i < incount; i++)
    req_array[i] = array_of_requests[i];
  for (i=0; i < incount; i++)
    stat_array[i] = array_of_statuses[i];
  delete [] array_of_requests;
  delete [] array_of_statuses;
  return outcount;
}

inline int
PMPI::Request::Testsome(int incount, PMPI::Request req_array[],
         int array_of_indices[])
{
  int i, outcount;
  MPI_Request* array_of_requests = new MPI_Request[incount];

  MPI_Status* array_of_statuses = new MPI_Status[incount];

  for (i=0; i < incount; i++)
    array_of_requests[i] = req_array[i];




  (void)MPI_Testsome(incount, array_of_requests, &outcount,
       array_of_indices, array_of_statuses);

  for (i=0; i < incount; i++)
    req_array[i] = array_of_requests[i];
  delete [] array_of_requests;

  delete [] array_of_statuses;

  return outcount;
}

inline void
PMPI::Request::Cancel(void) const
{
  (void)MPI_Cancel((MPI_Request*)&mpi_request);
}

inline void
PMPI::Prequest::Start()
{
  (void)MPI_Start(&mpi_request);
}

inline void
PMPI::Prequest::Startall(int count, PMPI:: Prequest array_of_requests[])
{

  MPI_Request* mpi_requests = new MPI_Request[count];
  int i;
  for (i=0; i < count; i++) {
    mpi_requests[i] = array_of_requests[i];
  }
  (void)MPI_Startall(count, mpi_requests);
  for (i=0; i < count; i++)
    array_of_requests[i].mpi_request = mpi_requests[i] ;
  delete [] mpi_requests;
}
# 162 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm_inln.h"
inline void
PMPI::Comm::Send(const void *buf, int count,
  const PMPI::Datatype & datatype, int dest, int tag) const
{
  (void)MPI_Send((void *)buf, count, datatype, dest, tag, mpi_comm);
}

inline void
PMPI::Comm::Recv(void *buf, int count, const PMPI::Datatype & datatype,
  int source, int tag, PMPI::Status & status) const
{
  (void)MPI_Recv(buf, count, datatype, source, tag, mpi_comm, &status.mpi_status);
}

inline void
PMPI::Comm::Recv(void *buf, int count, const PMPI::Datatype & datatype,
        int source, int tag) const
{




  (void)MPI_Recv(buf, count, datatype, source,
   tag, mpi_comm, &ignored_status.mpi_status);

}

inline void
PMPI::Comm::Bsend(const void *buf, int count,
   const PMPI::Datatype & datatype, int dest, int tag) const
{
  (void)MPI_Bsend((void *)buf, count, datatype,
    dest, tag, mpi_comm);
}

inline void
PMPI::Comm::Ssend(const void *buf, int count,
   const PMPI::Datatype & datatype, int dest, int tag) const
{
  (void)MPI_Ssend((void *)buf, count, datatype, dest,
    tag, mpi_comm);
}

inline void
PMPI::Comm::Rsend(const void *buf, int count,
   const PMPI::Datatype & datatype, int dest, int tag) const
{
  (void)MPI_Rsend((void *)buf, count, datatype,
    dest, tag, mpi_comm);
}

inline PMPI::Request
PMPI::Comm::Isend(const void *buf, int count,
   const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Isend((void *)buf, count, datatype,
    dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Request
PMPI::Comm::Ibsend(const void *buf, int count,
    const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Ibsend((void *)buf, count, datatype,
     dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Request
PMPI::Comm::Issend(const void *buf, int count,
    const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Issend((void *)buf, count, datatype,
     dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Request
PMPI::Comm::Irsend(const void *buf, int count,
    const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Irsend((void *) buf, count, datatype,
     dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Request
PMPI::Comm::Irecv(void *buf, int count,
   const PMPI::Datatype & datatype, int source, int tag) const
{
  MPI_Request request;
  (void)MPI_Irecv(buf, count, datatype, source,
    tag, mpi_comm, &request);
  return request;
}


inline MPI2CPP_BOOL_T
PMPI::Comm::Iprobe(int source, int tag, PMPI::Status & status) const
{
  int t;
  (void)MPI_Iprobe(source, tag, mpi_comm, &t, &status.mpi_status);
  return (MPI2CPP_BOOL_T) t;
}

inline MPI2CPP_BOOL_T
PMPI::Comm::Iprobe(int source, int tag) const
{
  int t;



  (void)MPI_Iprobe(source, tag, mpi_comm, &t, &ignored_status.mpi_status);

  return (MPI2CPP_BOOL_T) t;
}

inline void
PMPI::Comm::Probe(int source, int tag, PMPI::Status & status) const
{
  (void)MPI_Probe(source, tag, mpi_comm, &status.mpi_status);
}

inline void
PMPI::Comm::Probe(int source, int tag) const
{



  (void)MPI_Probe(source, tag, mpi_comm, &ignored_status.mpi_status);

}

inline PMPI::Prequest
PMPI::Comm::Send_init(const void *buf, int count,
       const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Send_init((void *)buf, count, datatype,
        dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Prequest
PMPI::Comm::Bsend_init(const void *buf, int count,
        const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Bsend_init((void *)buf, count, datatype,
         dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Prequest
PMPI::Comm::Ssend_init(const void *buf, int count,
        const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Ssend_init((void *)buf, count, datatype,
         dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Prequest
PMPI::Comm::Rsend_init(const void *buf, int count,
        const PMPI::Datatype & datatype, int dest, int tag) const
{
  MPI_Request request;
  (void)MPI_Rsend_init((void *)buf, count, datatype,
         dest, tag, mpi_comm, &request);
  return request;
}

inline PMPI::Prequest
PMPI::Comm::Recv_init(void *buf, int count,
       const PMPI::Datatype & datatype, int source, int tag) const
{
  MPI_Request request;
  (void)MPI_Recv_init(buf, count, datatype, source,
        tag, mpi_comm, &request);
  return request;
}

inline void
PMPI::Comm::Sendrecv(const void *sendbuf, int sendcount,
      const PMPI::Datatype & sendtype, int dest, int sendtag,
      void *recvbuf, int recvcount,
      const PMPI::Datatype & recvtype, int source,
      int recvtag, PMPI::Status & status) const
{
  (void)MPI_Sendrecv((void *)sendbuf, sendcount,
       sendtype,
       dest, sendtag, recvbuf, recvcount,
       recvtype,
       source, recvtag, mpi_comm, &status.mpi_status);
}

inline void
PMPI::Comm::Sendrecv(const void *sendbuf, int sendcount,
      const PMPI::Datatype & sendtype, int dest, int sendtag,
      void *recvbuf, int recvcount,
      const PMPI::Datatype & recvtype, int source,
      int recvtag) const
{







  (void)MPI_Sendrecv((void *)sendbuf, sendcount,
       sendtype,
       dest, sendtag, recvbuf, recvcount,
       recvtype,
       source, recvtag, mpi_comm, &ignored_status.mpi_status);

}

inline void
PMPI::Comm::Sendrecv_replace(void *buf, int count,
       const PMPI::Datatype & datatype, int dest,
       int sendtag, int source,
       int recvtag, PMPI::Status & status) const
{
  (void)MPI_Sendrecv_replace(buf, count, datatype, dest,
        sendtag, source, recvtag, mpi_comm,
        &status.mpi_status);
}

inline void
PMPI::Comm::Sendrecv_replace(void *buf, int count,
       const PMPI::Datatype & datatype, int dest,
       int sendtag, int source,
       int recvtag) const
{





  (void)MPI_Sendrecv_replace(buf, count, datatype, dest,
        sendtag, source, recvtag, mpi_comm,
        &ignored_status.mpi_status);

}





inline PMPI::Group
PMPI::Comm::Get_group() const
{
  MPI_Group group;
  (void)MPI_Comm_group(mpi_comm, &group);
  return group;
}

inline int
PMPI::Comm::Get_size() const
{
  int size;
  (void)MPI_Comm_size (mpi_comm, &size);
  return size;
}

inline int
PMPI::Comm::Get_rank() const
{
  int rank;
  (void)MPI_Comm_rank (mpi_comm, &rank);
  return rank;
}

inline int
PMPI::Comm::Compare(const PMPI::Comm & comm1,
     const PMPI::Comm & comm2)
{
  int result;
  (void)MPI_Comm_compare(comm1, comm2, &result);
  return result;
}

inline void
PMPI::Comm::Free(void)
{
  MPI_Comm save = mpi_comm;
  (void)MPI_Comm_free(&mpi_comm);

  if (PMPI::Comm::mpi_comm_map[save] != 0)
    delete PMPI::Comm::mpi_comm_map[save];
  PMPI::Comm::mpi_comm_map.erase(save);
}

inline MPI2CPP_BOOL_T
PMPI::Comm::Is_inter() const
{
  int t;
  (void)MPI_Comm_test_inter(mpi_comm, &t);
  return (MPI2CPP_BOOL_T) t;
}





inline int
PMPI::Comm::Get_topology() const
{
  int status;
  (void)MPI_Topo_test(mpi_comm, &status);
  return status;
}





inline void
PMPI::Comm::Abort(int errorcode)
{
  (void)MPI_Abort(mpi_comm, errorcode);
}







inline void
PMPI::Comm::Set_errhandler(const PMPI::Errhandler& errhandler)
{
  my_errhandler = (PMPI::Errhandler *)&errhandler;
  PMPI::Comm::mpi_err_map[mpi_comm] = this;
  (void)MPI_Errhandler_set(mpi_comm, errhandler);
}

inline PMPI::Errhandler
PMPI::Comm::Get_errhandler() const
{
  return *my_errhandler;
}

inline PMPI::Errhandler
PMPI::Comm::Create_errhandler(PMPI::Comm::Errhandler_fn* function)
{
  MPI_Errhandler errhandler;

  (void)MPI_Errhandler_create((MPI_Handler_function*) errhandler_intercept,
         &errhandler);
  PMPI::Errhandler temp(errhandler);
  temp.handler_fn = (void(*)(PMPI::Comm&, int*, ...))function;
  return temp;
}



inline int
PMPI::Comm::Create_keyval(PMPI::Comm::Copy_attr_function* comm_copy_attr_fn,
    PMPI::Comm::Delete_attr_function* comm_delete_attr_fn,
    void* extra_state)
{
  int keyval;
  (void)MPI_Keyval_create(copy_attr_intercept, delete_attr_intercept,
     &keyval, extra_state);
  key_pair_t* copy_and_delete =
    new key_pair_t(comm_copy_attr_fn, comm_delete_attr_fn);
  PMPI::Comm::key_fn_map[keyval] = copy_and_delete;
  return keyval;
}

inline void
PMPI::Comm::Free_keyval(int& comm_keyval)
{
  int save = comm_keyval;
  (void)MPI_Keyval_free(&comm_keyval);

  if (PMPI::Comm::key_fn_map[save] != 0)
    delete PMPI::Comm::key_fn_map[save];
  PMPI::Comm::key_fn_map.erase(save);
}

inline void
PMPI::Comm::Set_attr(int comm_keyval, const void* attribute_val) const
{
  CommType type;
  int status;

  (void)MPI_Comm_test_inter(mpi_comm, &status);
  if (status) {
    type = eIntercomm;
  }
  else {
    (void)MPI_Topo_test(mpi_comm, &status);
    if (status == 2)
      type = eCartcomm;
    else if (status == 1)
      type = eGraphcomm;
    else
      type = eIntracomm;
  }
  if (PMPI::Comm::mpi_comm_map[mpi_comm] == 0) {
    comm_pair_t* comm_type = new comm_pair_t((Comm*) this, type);
    PMPI::Comm::mpi_comm_map[mpi_comm] = comm_type;
  }
  (void)MPI_Attr_put(mpi_comm, comm_keyval, (void*) attribute_val);
}

inline MPI2CPP_BOOL_T
PMPI::Comm::Get_attr(int comm_keyval, void* attribute_val) const
{
  int flag;
  (void)MPI_Attr_get(mpi_comm, comm_keyval, attribute_val, &flag);
  return (MPI2CPP_BOOL_T)flag;
}

inline void
PMPI::Comm::Delete_attr(int comm_keyval)
{
  (void)MPI_Attr_delete(mpi_comm, comm_keyval);
}

inline int
PMPI::Comm::NULL_COPY_FN(const PMPI::Comm& oldcomm, int comm_keyval,
          void* extra_state, void* attribute_val_in,
          void* attribute_val_out, MPI2CPP_BOOL_T& flag)
{







  int f = (int)flag;
  int ret;
  if (MPIR_null_copy_fn != 0) {
    ret = MPIR_null_copy_fn(oldcomm, comm_keyval, extra_state, attribute_val_in,
      attribute_val_out, &f);
    flag = (MPI2CPP_BOOL_T)f;
  } else {
    ret = 0;
    flag = true;
  }
  return ret;
# 495 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/comm_inln.h"
}

inline int
PMPI::Comm::DUP_FN(const PMPI::Comm& oldcomm, int comm_keyval,
    void* extra_state, void* attribute_val_in,
    void* attribute_val_out, MPI2CPP_BOOL_T& flag)
{





  int f = (int)flag;
  int ret;
  ret = MPIR_dup_fn(oldcomm, comm_keyval, extra_state, attribute_val_in,
     attribute_val_out, &f);
  flag = (MPI2CPP_BOOL_T) f;
  return ret;





}

inline int
PMPI::Comm::NULL_DELETE_FN(PMPI::Comm& comm, int comm_keyval, void* attribute_val,
     void* extra_state)
{



  if (MPIR_null_delete_fn != 0)
    return MPIR_null_delete_fn(comm, comm_keyval, attribute_val, extra_state);
  else
    return 0;

}
# 163 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm_inln.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm_inln.h"
inline
PMPI::Intracomm::Intracomm(const MPI_Comm& data) {
  int flag;
  if (MPI::Is_initialized() && (data != ((MPI_Comm)0))) {
    (void)MPI_Comm_test_inter(data, &flag);
    if (flag)
      mpi_comm = ((MPI_Comm)0);
    else
      mpi_comm = data;
  }
  else {
    mpi_comm = data;
  }
}





inline void
PMPI::Intracomm::Barrier() const
{
  (void)MPI_Barrier(mpi_comm);
}

inline void
PMPI::Intracomm::Bcast(void *buffer, int count,
      const PMPI::Datatype& datatype, int root) const
{
  (void)MPI_Bcast(buffer, count, datatype, root, mpi_comm);
}

inline void
PMPI::Intracomm::Gather(const void *sendbuf, int sendcount,
         const PMPI::Datatype & sendtype,
         void *recvbuf, int recvcount,
         const PMPI::Datatype & recvtype, int root) const
{
  (void)MPI_Gather((void *)sendbuf, sendcount, sendtype,
     recvbuf, recvcount, recvtype, root, mpi_comm);
}

inline void
PMPI::Intracomm::Gatherv(const void *sendbuf, int sendcount,
 const PMPI::Datatype & sendtype, void *recvbuf,
 const int recvcounts[], const int displs[],
 const PMPI::Datatype & recvtype, int root) const
{
  (void)MPI_Gatherv((void *)sendbuf, sendcount, sendtype,
      recvbuf, (int *)recvcounts, (int *)displs,
      recvtype, root, mpi_comm);
}

inline void
PMPI::Intracomm::Scatter(const void *sendbuf, int sendcount,
 const PMPI::Datatype & sendtype,
 void *recvbuf, int recvcount,
 const PMPI::Datatype & recvtype, int root) const
{
  (void)MPI_Scatter((void *)sendbuf, sendcount, sendtype,
      recvbuf, recvcount, recvtype, root, mpi_comm);
}

inline void
PMPI::Intracomm::Scatterv(const void *sendbuf, const int sendcounts[],
  const int displs[], const PMPI::Datatype & sendtype,
  void *recvbuf, int recvcount,
  const PMPI::Datatype & recvtype, int root) const
{
  (void)MPI_Scatterv((void *)sendbuf, (int *) sendcounts,
       (int *) displs, sendtype,
       recvbuf, recvcount, recvtype,
       root, mpi_comm);
}

inline void
PMPI::Intracomm::Allgather(const void *sendbuf, int sendcount,
   const PMPI::Datatype & sendtype, void *recvbuf,
   int recvcount, const PMPI::Datatype & recvtype) const
{
  (void)MPI_Allgather((void *) sendbuf, sendcount,
        sendtype, recvbuf, recvcount,
        recvtype, mpi_comm);
}

inline void
PMPI::Intracomm::Allgatherv(const void *sendbuf, int sendcount,
    const PMPI::Datatype & sendtype, void *recvbuf,
    const int recvcounts[], const int displs[],
    const PMPI::Datatype & recvtype) const
{
  (void)MPI_Allgatherv((void *)sendbuf, sendcount,
         sendtype, recvbuf,
         (int *) recvcounts, (int *) displs,
         recvtype, mpi_comm);
}

inline void
PMPI::Intracomm::Alltoall(const void *sendbuf, int sendcount,
  const PMPI::Datatype & sendtype, void *recvbuf,
  int recvcount, const PMPI::Datatype & recvtype) const
{
  (void)MPI_Alltoall((void *) sendbuf, sendcount,
       sendtype, recvbuf, recvcount,
       recvtype, mpi_comm);
}

inline void
PMPI::Intracomm::Alltoallv(const void *sendbuf, const int sendcounts[],
   const int sdispls[], const PMPI::Datatype & sendtype,
   void *recvbuf, const int recvcounts[],
   const int rdispls[], const PMPI::Datatype & recvtype) const
{
    (void)MPI_Alltoallv((void *) sendbuf, (int *) sendcounts,
   (int *) sdispls, sendtype, recvbuf,
   (int *) recvcounts, (int *) rdispls,
   recvtype,mpi_comm);
}


inline void
PMPI::Intracomm::Reduce(const void *sendbuf, void *recvbuf, int count,
       const PMPI::Datatype & datatype, const PMPI::Op& op,
       int root) const
{
  current_op = (PMPI::Op*)&op;
  (void)MPI_Reduce((void*)sendbuf, recvbuf, count, datatype, op, root, mpi_comm);
  current_op = (Op*)0;
}

inline void
PMPI::Intracomm::Allreduce(const void *sendbuf, void *recvbuf, int count,
   const PMPI::Datatype & datatype, const PMPI::Op& op) const
{
  current_op = (PMPI::Op*)&op;
  (void)MPI_Allreduce ((void*)sendbuf, recvbuf, count, datatype, op, mpi_comm);
  current_op = (Op*)0;
}

inline void
PMPI::Intracomm::Reduce_scatter(const void *sendbuf, void *recvbuf,
        int recvcounts[],
        const PMPI::Datatype & datatype,
        const PMPI::Op& op) const
{
  current_op = (PMPI::Op*)&op;
  (void)MPI_Reduce_scatter((void*)sendbuf, recvbuf, recvcounts,
      datatype, op, mpi_comm);
  current_op = (Op*)0;
}

inline void
PMPI::Intracomm::Scan(const void *sendbuf, void *recvbuf, int count,
     const PMPI::Datatype & datatype, const PMPI::Op& op) const
{
  current_op = (PMPI::Op*)&op;
  (void)MPI_Scan((void *)sendbuf, recvbuf, count, datatype, op, mpi_comm);
  current_op = (Op*)0;
}

inline PMPI::Intracomm
PMPI::Intracomm::Dup() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  return newcomm;
}
# 208 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intracomm_inln.h"
inline PMPI::Comm&
PMPI::Intracomm::Clone() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  PMPI::Intracomm* dup = new PMPI::Intracomm(newcomm);
  return *dup;
}


inline PMPI::Intracomm
PMPI::Intracomm::Create(const PMPI::Group& group) const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_create(mpi_comm, group, &newcomm);
  return newcomm;
}

inline PMPI::Intracomm
PMPI::Intracomm::Split(int color, int key) const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_split(mpi_comm, color, key, &newcomm);
  return newcomm;
}



inline PMPI::Intercomm
PMPI::Intracomm::Create_intercomm(int local_leader,
     const PMPI::Comm& peer_comm,
     int remote_leader, int tag) const
{
  MPI_Comm newintercomm;
  (void)MPI_Intercomm_create(mpi_comm, local_leader, peer_comm,
        remote_leader, tag, &newintercomm);
  return newintercomm;
}

inline PMPI::Cartcomm
PMPI::Intracomm::Create_cart(int ndims, const int dims[],
       const MPI2CPP_BOOL_T periods[], MPI2CPP_BOOL_T reorder) const
{
  int *int_periods = new int [ndims];
  for (int i=0; i<ndims; i++)
    int_periods[i] = (int) periods[i];

  MPI_Comm newcomm;
  (void)MPI_Cart_create(mpi_comm, ndims, (int*)dims,
        int_periods, (int)reorder, &newcomm);
  delete [] int_periods;
  return newcomm;
}

inline PMPI::Graphcomm
PMPI::Intracomm::Create_graph(int nnodes, const int index[],
        const int edges[], MPI2CPP_BOOL_T reorder) const
{
  MPI_Comm newcomm;
  (void)MPI_Graph_create(mpi_comm, nnodes, (int*)index,
         (int*)edges, (int)reorder, &newcomm);
  return newcomm;
}
# 164 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology_inln.h"
inline
PMPI::Cartcomm::Cartcomm(const MPI_Comm& data) {
  int status;
  if (MPI::Is_initialized() && (data != ((MPI_Comm)0))) {
    (void)MPI_Topo_test(data, &status) ;
    if (status == 2)
      mpi_comm = data;
    else
      mpi_comm = ((MPI_Comm)0);
  }
  else {
    mpi_comm = data;
  }
}





inline PMPI::Cartcomm
PMPI::Cartcomm::Dup() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  return newcomm;
}





inline int
PMPI::Cartcomm::Get_dim() const
{
  int ndims;
  (void)MPI_Cartdim_get(mpi_comm, &ndims);
  return ndims;
}

inline void
PMPI::Cartcomm::Get_topo(int maxdims, int dims[], MPI2CPP_BOOL_T periods[],
          int coords[]) const
{
  int *int_periods = new int [maxdims];
  int i;
  for (i=0; i<maxdims; i++) {
    int_periods[i] = (int)periods[i];
  }
  (void)MPI_Cart_get(mpi_comm, maxdims, dims, int_periods, coords);
  for (i=0; i<maxdims; i++) {
    periods[i] = (MPI2CPP_BOOL_T)int_periods[i];
  }
  delete [] int_periods;
}

inline int
PMPI::Cartcomm::Get_cart_rank(const int coords[]) const
{
  int rank;
  (void)MPI_Cart_rank(mpi_comm, (int*)coords, &rank);
  return rank;
}

inline void
PMPI::Cartcomm::Get_coords(int rank, int maxdims, int coords[]) const
{
  (void)MPI_Cart_coords(mpi_comm, rank, maxdims, coords);
}

inline void
PMPI::Cartcomm::Shift(int direction, int disp,
       int &rank_source, int &rank_dest) const
{
  (void)MPI_Cart_shift(mpi_comm, direction, disp, &rank_source, &rank_dest);
}

inline PMPI::Cartcomm
PMPI::Cartcomm::Sub(const MPI2CPP_BOOL_T remain_dims[])
{
  int ndims;
  MPI_Cartdim_get(mpi_comm, &ndims);
  int* int_remain_dims = new int[ndims];
  for (int i=0; i<ndims; i++) {
    int_remain_dims[i] = (int)remain_dims[i];
  }
  MPI_Comm newcomm;
  (void)MPI_Cart_sub(mpi_comm, int_remain_dims, &newcomm);
  delete [] int_remain_dims;
  return newcomm;
}

inline int
PMPI::Cartcomm::Map(int ndims, const int dims[], const MPI2CPP_BOOL_T periods[]) const
{
  int *int_periods = new int [ndims];
  for (int i=0; i<ndims; i++) {
    int_periods[i] = (int) periods[i];
  }
  int newrank;
  (void)MPI_Cart_map(mpi_comm, ndims, (int*)dims, int_periods, &newrank);
  delete [] int_periods;
  return newrank;
}
# 149 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology_inln.h"
inline PMPI::Comm&
PMPI::Cartcomm::Clone() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  PMPI::Cartcomm* dup = new PMPI::Cartcomm(newcomm);
  return *dup;
}






inline
PMPI::Graphcomm::Graphcomm(const MPI_Comm& data) {
  int status;
  if (MPI::Is_initialized() && (data != ((MPI_Comm)0))) {
    (void)MPI_Topo_test(data, &status) ;
    if (status == 1)
      mpi_comm = data;
    else
      mpi_comm = ((MPI_Comm)0);
  }
  else {
    mpi_comm = data;
  }
}





inline PMPI::Graphcomm
PMPI::Graphcomm::Dup() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  return newcomm;
}





inline void
PMPI::Graphcomm::Get_dims(int nnodes[], int nedges[]) const
{
  (void)MPI_Graphdims_get(mpi_comm, nnodes, nedges);
}

inline void
PMPI::Graphcomm::Get_topo(int maxindex, int maxedges, int index[],
  int edges[]) const
{
  (void)MPI_Graph_get(mpi_comm, maxindex, maxedges, index, edges);
}

inline int
PMPI::Graphcomm::Get_neighbors_count(int rank) const
{
  int nneighbors;
  (void)MPI_Graph_neighbors_count(mpi_comm, rank, &nneighbors);
  return nneighbors;
}

inline void
PMPI::Graphcomm::Get_neighbors(int rank, int maxneighbors,
       int neighbors[]) const
{
  (void)MPI_Graph_neighbors(mpi_comm, rank, maxneighbors, neighbors);
}

inline int
PMPI::Graphcomm::Map(int nnodes, const int index[],
    const int edges[]) const
{
  int newrank;
  (void)MPI_Graph_map(mpi_comm, nnodes, (int*)index, (int*)edges, &newrank);
  return newrank;
}
# 241 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/topology_inln.h"
inline PMPI::Comm&
PMPI::Graphcomm::Clone() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  PMPI::Graphcomm* dup = new PMPI::Graphcomm(newcomm);
  return *dup;
}
# 165 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm_inln.h" 1
# 30 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm_inln.h"
inline PMPI::Intercomm
PMPI::Intercomm::Dup() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  return newcomm;
}
# 48 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/intercomm_inln.h"
inline PMPI::Comm&
PMPI::Intercomm::Clone() const
{
  MPI_Comm newcomm;
  (void)MPI_Comm_dup(mpi_comm, &newcomm);
  PMPI::Intercomm* dup = new PMPI::Intercomm(newcomm);
  return *dup;
}


inline int
PMPI::Intercomm::Get_remote_size() const
{
  int size;
  (void)MPI_Comm_remote_size(mpi_comm, &size);
  return size;
}

inline PMPI::Group
PMPI::Intercomm::Get_remote_group() const
{
  MPI_Group group;
  (void)MPI_Comm_remote_group(mpi_comm, &group);
  return group;
}

inline PMPI::Intracomm
PMPI::Intercomm::Merge(MPI2CPP_BOOL_T high)
{
  MPI_Comm newcomm;
  (void)MPI_Intercomm_merge(mpi_comm, (int)high, &newcomm);
  return newcomm;
}
# 166 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/group_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/group_inln.h"
inline int
PMPI::Group::Get_size() const
{
  int size;
  (void)MPI_Group_size(mpi_group, &size);
  return size;
}

inline int
PMPI::Group::Get_rank() const
{
  int rank;
  (void)MPI_Group_rank(mpi_group, &rank);
  return rank;
}

inline void
PMPI::Group::Translate_ranks (const PMPI::Group& group1, int n,
        const int ranks1[],
        const PMPI::Group& group2, int ranks2[])
{
  (void)MPI_Group_translate_ranks(group1, n, (int*)ranks1, group2, (int*)ranks2);
}

inline int
PMPI::Group::Compare(const PMPI::Group& group1, const PMPI::Group& group2)
{
  int result;
  (void)MPI_Group_compare(group1, group2, &result);
  return result;
}

inline PMPI::Group
PMPI::Group::Union(const PMPI::Group &group1, const PMPI::Group &group2)
{
  MPI_Group newgroup;
  (void)MPI_Group_union(group1, group2, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Intersect(const PMPI::Group &group1, const PMPI::Group &group2)
{
  MPI_Group newgroup;
  (void)MPI_Group_intersection( group1, group2, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Difference(const PMPI::Group &group1, const PMPI::Group &group2)
{
  MPI_Group newgroup;
  (void)MPI_Group_difference(group1, group2, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Incl(int n, const int ranks[]) const
{
  MPI_Group newgroup;
  (void)MPI_Group_incl(mpi_group, n, (int*)ranks, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Excl(int n, const int ranks[]) const
{
  MPI_Group newgroup;
  (void)MPI_Group_excl(mpi_group, n, (int*)ranks, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Range_incl(int n, const int ranges[][3]) const
{
  MPI_Group newgroup;
  (void)MPI_Group_range_incl(mpi_group, n, (int(*)[3])ranges, &newgroup);
  return newgroup;
}

inline PMPI::Group
PMPI::Group::Range_excl(int n, const int ranges[][3]) const
{
  MPI_Group newgroup;
  (void)MPI_Group_range_excl(mpi_group, n, (int(*)[3])ranges, &newgroup);
  return newgroup;
}

inline void
PMPI::Group::Free()
{
  (void)MPI_Group_free(&mpi_group);
}
# 167 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op_inln.h" 1
# 32 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op_inln.h"
inline
MPI::Op::Op() { }

inline
MPI::Op::Op(const MPI::Op& o) : pmpi_op(o.pmpi_op) { }

inline
MPI::Op::Op(const MPI_Op& o) : pmpi_op(o) { }

inline
MPI::Op::~Op() { }

inline
MPI::Op& MPI::Op::operator=(const MPI::Op& op) {
  pmpi_op = op.pmpi_op; return *this;
}


inline MPI2CPP_BOOL_T
MPI::Op::operator== (const MPI::Op &a) {
  return (MPI2CPP_BOOL_T)(pmpi_op == a.pmpi_op);
}

inline MPI2CPP_BOOL_T
MPI::Op::operator!= (const MPI::Op &a) {
  return (MPI2CPP_BOOL_T)!(*this == a);
}


inline MPI::Op&
MPI::Op::operator= (const MPI_Op &i) { pmpi_op = i; return *this; }

inline
MPI::Op::operator MPI_Op () const { return pmpi_op; }
# 119 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/op_inln.h"
inline void
PMPI::Op::Init(PMPI::User_function *func, MPI2CPP_BOOL_T commute)
{
  (void)MPI_Op_create(op_intercept , (int) commute, &mpi_op);
  op_user_function = (User_function*)func;
}


inline void
PMPI::Op::Free()
{
  (void)MPI_Op_free(&mpi_op);
}
# 168 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/errhandler_inln.h" 1
# 32 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/errhandler_inln.h"
inline PMPI::Errhandler::Errhandler(const PMPI::Errhandler& e)
  : handler_fn(e.handler_fn), mpi_errhandler(e.mpi_errhandler){ }

inline PMPI::Errhandler&
PMPI::Errhandler::operator=(const PMPI::Errhandler& e)
{
  handler_fn = e.handler_fn;
  mpi_errhandler = e.mpi_errhandler;
  return *this;
}

inline MPI2CPP_BOOL_T
PMPI::Errhandler::operator==(const PMPI::Errhandler &a)
{
  return (MPI2CPP_BOOL_T)(mpi_errhandler == a.mpi_errhandler);
}



inline void
PMPI::Errhandler::Free()
{
  (void)MPI_Errhandler_free(&mpi_errhandler);
}
# 169 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 1 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/status_inln.h" 1
# 34 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/status_inln.h"
inline int
PMPI::Status::Get_count(const PMPI::Datatype& datatype) const
{
  int count;

  (void)MPI_Get_count((MPI_Status*)&mpi_status, datatype, &count);
  return count;
}

inline MPI2CPP_BOOL_T
PMPI::Status::Is_cancelled() const
{
  int t;
  (void)MPI_Test_cancelled((MPI_Status*)&mpi_status, &t);
  return (MPI2CPP_BOOL_T) t;
}

inline int
PMPI::Status::Get_elements(const PMPI::Datatype& datatype) const
{
  int count;
  (void)MPI_Get_elements((MPI_Status*)&mpi_status, datatype, &count);
  return count;
}




inline int
PMPI::Status::Get_source() const
{
  int source;
  source = mpi_status.MPI_SOURCE;
  return source;
}

inline void
PMPI::Status::Set_source(int source)
{
  mpi_status.MPI_SOURCE = source;
}

inline int
PMPI::Status::Get_tag() const
{
  int tag;
  tag = mpi_status.MPI_TAG;
  return tag;
}

inline void
PMPI::Status::Set_tag(int tag)
{
  mpi_status.MPI_TAG = tag;
}

inline int
PMPI::Status::Get_error() const
{
  int error;
  error = mpi_status.MPI_ERROR;
  return error;
}

inline void
PMPI::Status::Set_error(int error)
{
  mpi_status.MPI_ERROR = error;
}
# 170 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi2c++/mpi++.h" 2
# 705 "/usr/mpi/gcc/mvapich-1.2.0/include/mpi.h" 2
# 36 "input.cpp" 2

# 1 "ljs.h" 1
# 35 "ljs.h"
# 1 "types.h" 1
# 35 "types.h"
enum ForceStyle {FORCELJ, FORCEEAM};


struct double2 {
  double x, y;
};
struct float2 {
  float x, y;
};
struct double4 {
  double x, y, z, w;
};
struct float4 {
  float x, y, z, w;
};
# 69 "types.h"
typedef double MMD_float;
typedef double2 MMD_float2;
typedef double4 MMD_float4;

typedef int MMD_int;
typedef int MMD_bigint;
# 36 "ljs.h" 2

struct In {
  int nx, ny, nz;
  MMD_float t_request;
  MMD_float rho;
  int units;
  ForceStyle forcetype;
  MMD_float epsilon, sigma;
  char* datafile;
  int ntimes;
  MMD_float dt;
  int neigh_every;
  MMD_float force_cut;
  MMD_float neigh_cut;
  int thermo_nstat;
};
# 38 "input.cpp" 2
# 1 "atom.h" 1
# 35 "atom.h"
# 1 "threadData.h" 1
# 35 "threadData.h"
class ThreadData
{
  public:
    ThreadData() {
      mpi_me = 0;
      mpi_num_threads = 0;
      omp_me = 0;
      omp_num_threads = 1;
      teams = 1;
    };
    ~ThreadData() {};
    int mpi_me;
    int mpi_num_threads;
    int omp_me;
    int omp_num_threads;
    int teams;
};
# 36 "atom.h" 2



class Neighbor;
struct Box {
  MMD_float xprd, yprd, zprd;
  MMD_float xlo, xhi;
  MMD_float ylo, yhi;
  MMD_float zlo, zhi;
};

class Atom
{
  public:
    int natoms;
    int nlocal, nghost;
    int nmax;

    MMD_float** x;
    MMD_float** v;
    MMD_float** f;

    MMD_float** xold;

    ThreadData* threads;
    MMD_float virial, mass;

    int comm_size, reverse_size, border_size;

    struct Box box;

    Atom();
    ~Atom();
    void addatom(MMD_float, MMD_float, MMD_float, MMD_float, MMD_float, MMD_float);
    void pbc();
    void growarray();

    void copy(int, int);

    void pack_comm(int, int*, MMD_float*, int*);
    void unpack_comm(int, int, MMD_float*);
    void pack_reverse(int, int, MMD_float*);
    void unpack_reverse(int, int*, MMD_float*);

    int pack_border(int, MMD_float*, int*);
    int unpack_border(int, MMD_float*);
    int pack_exchange(int, MMD_float*);
    int unpack_exchange(int, MMD_float*);
    int skip_exchange(MMD_float*);

    MMD_float** realloc_2d_MMD_float_array(MMD_float**, int, int, int);
    MMD_float** create_2d_MMD_float_array(int, int);
    void destroy_2d_MMD_float_array(MMD_float**);

    void sort(Neighbor & neighbor);

  private:
    int* binpos;
    int* bins;
    MMD_float** x_copy;
    MMD_float** v_copy;
    int copy_size;
};
# 39 "input.cpp" 2
# 1 "force.h" 1
# 37 "force.h"
# 1 "neighbor.h" 1
# 37 "neighbor.h"
# 1 "timer.h" 1
# 43 "timer.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime" 1 3
# 48 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime" 3
       
# 49 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime" 3



# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 132 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 181 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();

extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();
# 312 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 327 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 389 "/usr/include/time.h" 3 4
extern int getdate_err;
# 398 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 412 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 53 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime" 2 3
# 65 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/../../../../include/c++/4.1.2/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;
}
# 44 "timer.h" 2

class Timer
{
  public:
    Timer();
    ~Timer();
    void stamp();
    void stamp(int);
    void stamp_extra_start();
    void stamp_extra_stop(int);
    void barrier_start(int);
    void barrier_stop(int);
    double* array;

  private:



    double previous_time_d, previous_time_extra_d;

};
# 38 "neighbor.h" 2

class Neighbor
{
  public:
    int every;
    int nbinx, nbiny, nbinz;
    MMD_float cutneigh;
    MMD_float cutneighsq;
    int ncalls;
    int max_totalneigh;

    int* numneigh;
    int* neighbors;
    int maxneighs;
    int halfneigh;

    MMD_int ghost_newton;
    int count;
    Neighbor();
    ~Neighbor();
    int setup(Atom &);
    void build(Atom &);

    Timer* timer;

    ThreadData* threads;


    void binatoms(Atom & atom, int count = -1);

    int* bincount;
    int* bins;
    int mbins;
    int atoms_per_bin;
  private:
    MMD_float xprd, yprd, zprd;

    int nmax;

    int nstencil;
    int* stencil;

    int mbinx, mbiny, mbinz;
    int mbinxlo, mbinylo, mbinzlo;
    MMD_float binsizex, binsizey, binsizez;
    MMD_float bininvx, bininvy, bininvz;

    int resize;

    MMD_float bindist(int, int, int);
    int coord2bin(MMD_float, MMD_float, MMD_float);
};
# 38 "force.h" 2
# 1 "comm.h" 1
# 39 "comm.h"
class Comm
{
  public:
    Comm();
    ~Comm();
    int setup(MMD_float, Atom &);
    void communicate(Atom &);
    void reverse_communicate(Atom &);
    void exchange(Atom &);
    void exchange_all(Atom &);
    void borders(Atom &);
    void growsend(int);
    void growrecv(int);
    void growlist(int, int);

  public:
    int me;
    int nswap;
    int* pbc_any;
    int* pbc_flagx;
    int* pbc_flagy;
    int* pbc_flagz;
    int* sendnum, *recvnum;
    int* comm_send_size;
    int* comm_recv_size;
    int* reverse_send_size;
    int* reverse_recv_size;
    int* sendproc, *recvproc;
    int* sendproc_exc, *recvproc_exc;

    int* firstrecv;
    int** sendlist;
    int* maxsendlist;

    MMD_float* buf_send;
    MMD_float* buf_recv;
    MMD_float* buf;
    int maxsend;
    int maxrecv;

    int procneigh[3][2];
    int procgrid[3];
    int need[3];
    MMD_float* slablo, *slabhi;

    ThreadData* threads;

    int check_safeexchange;
    int do_safeexchange;
    Timer* timer;

    int copy_size;
    int* nsend_thread;
    int* nrecv_thread;
    int* nholes_thread;
    int** exc_sendlist_thread;
    int* send_flag;
    int* maxsend_thread;
    int maxthreads;
    int maxnlocal;
    int nrecv_atoms;


};
# 39 "force.h" 2

class Force
{
  public:
    MMD_float cutforce;
    MMD_float cutforcesq;
    MMD_float eng_vdwl;
    MMD_float mass;
    MMD_int evflag;
    MMD_float virial;

    Force() {};
    virtual ~Force() {};
    virtual void setup() {};
    virtual void finalise() {};
    virtual void compute(Atom &, Neighbor &, Comm &, int) {};

    int use_sse;
    int use_oldcompute;
    ThreadData* threads;
    MMD_int reneigh;
    Timer* timer;

    MMD_float epsilon, sigma6, sigma;

    ForceStyle style;
  protected:

    MMD_int me;
};
# 40 "input.cpp" 2

# 1 "integrate.h" 1
# 36 "integrate.h"
# 1 "thermo.h" 1
# 35 "thermo.h"
enum units {LJ, METAL};
# 44 "thermo.h"
class Integrate;

class Thermo
{
  public:
    MMD_int nstat;
    MMD_int mstat;
    MMD_int ntimes;
    MMD_int* steparr;
    MMD_float* tmparr;
    MMD_float* engarr;
    MMD_float* prsarr;

    Thermo();
    ~Thermo();
    void setup(MMD_float, Integrate &integrate, Atom &atom, MMD_int);
    MMD_float temperature(Atom &);
    MMD_float energy(Atom &, Neighbor &, Force*);
    MMD_float pressure(MMD_float, Force*);
    void compute(MMD_int, Atom &, Neighbor &, Force*, Timer &, Comm &);

    MMD_float t_act, p_act, e_act;
    MMD_float t_scale, e_scale, p_scale, mvv2e, dof_boltz;

    ThreadData* threads;
  private:
    MMD_float rho;
};
# 37 "integrate.h" 2



class Integrate
{
  public:
    MMD_float dt;
    MMD_float dtforce;
    MMD_int ntimes;
    MMD_int nlocal, nmax;
    MMD_float* x, *v, *f, *xold;
    MMD_float mass;

    MMD_int sort_every;

    Integrate();
    ~Integrate();
    void setup();
    void initialIntegrate();
    void finalIntegrate();
    void run(Atom &, Force*, Neighbor &, Comm &, Thermo &, Timer &);

    ThreadData* threads;
};
# 42 "input.cpp" 2






int input(In &in, const char* filename)
{
  FILE* fp;
  int flag;
  char line[256];

  int me;
  MPI_Comm_rank(91, &me);

  fp = fopen(filename, "r");

  if(fp == __null) flag = 0;
  else flag = 1;

  if(flag == 0) {
    if(me == 0) printf("ERROR: Cannot open %s\n", filename);

    return 1;
  }
# 124 "input.cpp"
      fgets(line, 256, fp);
      fgets(line, 256, fp);
      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "lj") == 0) in.units = 0;
      else if(strcmp(line, "metal") == 0) in.units = 1;
      else {
        printf("Unknown units option in file at line 3 ('%s'). Expecting either 'lj' or 'metal'.\n", line);
        MPI_Finalize();
        exit(0);
      }

      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "none") == 0) in.datafile = __null;
      else {
        in.datafile = new char[1000];
        char* ptr = strtok(line, " \t");

        if(ptr == __null) ptr = line;

        strcpy(in.datafile, ptr);
      }

      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "lj") == 0) in.forcetype = FORCELJ;
      else if(strcmp(line, "eam") == 0) in.forcetype = FORCEEAM;
      else {
        printf("Unknown forcetype option in file at line 5 ('%s'). Expecting either 'lj' or 'eam'.\n", line);
        MPI_Finalize();
        exit(0);
      }

      fgets(line, 256, fp);
      sscanf(line, "%le %le", &in.epsilon, &in.sigma);
      fgets(line, 256, fp);
      sscanf(line, "%d %d %d", &in.nx, &in.ny, &in.nz);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.ntimes);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.dt);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.t_request);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.rho);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.neigh_every);
      fgets(line, 256, fp);
      sscanf(line, "%le %le", &in.force_cut, &in.neigh_cut);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.thermo_nstat);
      fclose(fp);






  in.neigh_cut += in.force_cut;
  MPI_Barrier(91);

  return 0;
}
