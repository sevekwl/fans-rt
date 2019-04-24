#ifndef __STDDEF_H
#define __STDDEF_H

#ifndef NULL
#define NULL    (void *)0
#endif /* NULL */

typedef unsigned int size_t;
typedef long long   off_t;

#define offsetof(__type, __member)  ((size_t)&(((__type *)0)->__member))

#endif /* __GCC_STDDEF_H */

