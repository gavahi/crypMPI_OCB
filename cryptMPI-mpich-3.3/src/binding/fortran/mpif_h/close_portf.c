/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_CLOSE_PORT = PMPI_CLOSE_PORT
#pragma weak mpi_close_port__ = PMPI_CLOSE_PORT
#pragma weak mpi_close_port_ = PMPI_CLOSE_PORT
#pragma weak mpi_close_port = PMPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CLOSE_PORT = pmpi_close_port__
#pragma weak mpi_close_port__ = pmpi_close_port__
#pragma weak mpi_close_port_ = pmpi_close_port__
#pragma weak mpi_close_port = pmpi_close_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CLOSE_PORT = pmpi_close_port_
#pragma weak mpi_close_port__ = pmpi_close_port_
#pragma weak mpi_close_port_ = pmpi_close_port_
#pragma weak mpi_close_port = pmpi_close_port_
#else
#pragma weak MPI_CLOSE_PORT = pmpi_close_port
#pragma weak mpi_close_port__ = pmpi_close_port
#pragma weak mpi_close_port_ = pmpi_close_port
#pragma weak mpi_close_port = pmpi_close_port
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_CLOSE_PORT = PMPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_close_port__ = pmpi_close_port__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_close_port = pmpi_close_port
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_close_port_ = pmpi_close_port_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_CLOSE_PORT  MPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_close_port__  mpi_close_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_close_port  mpi_close_port
#else
#pragma _HP_SECONDARY_DEF pmpi_close_port_  mpi_close_port_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_CLOSE_PORT as PMPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_close_port__ as pmpi_close_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_close_port as pmpi_close_port
#else
#pragma _CRI duplicate mpi_close_port_ as pmpi_close_port_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_close_port__ = MPI_CLOSE_PORT
#pragma weak mpi_close_port_ = MPI_CLOSE_PORT
#pragma weak mpi_close_port = MPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CLOSE_PORT = mpi_close_port__
#pragma weak mpi_close_port_ = mpi_close_port__
#pragma weak mpi_close_port = mpi_close_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CLOSE_PORT = mpi_close_port_
#pragma weak mpi_close_port__ = mpi_close_port_
#pragma weak mpi_close_port = mpi_close_port_
#else
#pragma weak MPI_CLOSE_PORT = mpi_close_port
#pragma weak mpi_close_port__ = mpi_close_port
#pragma weak mpi_close_port_ = mpi_close_port
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_CLOSE_PORT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL mpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_close_port__ = PMPI_CLOSE_PORT
#pragma weak pmpi_close_port_ = PMPI_CLOSE_PORT
#pragma weak pmpi_close_port = PMPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_CLOSE_PORT = pmpi_close_port__
#pragma weak pmpi_close_port_ = pmpi_close_port__
#pragma weak pmpi_close_port = pmpi_close_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_CLOSE_PORT = pmpi_close_port_
#pragma weak pmpi_close_port__ = pmpi_close_port_
#pragma weak pmpi_close_port = pmpi_close_port_
#else
#pragma weak PMPI_CLOSE_PORT = pmpi_close_port
#pragma weak pmpi_close_port__ = pmpi_close_port
#pragma weak pmpi_close_port_ = pmpi_close_port
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_CLOSE_PORT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_CLOSE_PORT( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port__( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_close_port_( char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_close_port")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_close_port_ PMPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_close_port_ pmpi_close_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_close_port_ pmpi_close_port
#else
#define mpi_close_port_ pmpi_close_port_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Close_port
#define MPI_Close_port PMPI_Close_port 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_close_port_ MPI_CLOSE_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_close_port_ mpi_close_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_close_port_ mpi_close_port
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_close_port_ ( char *v1 FORT_MIXED_LEN(d1), MPI_Fint *ierr FORT_END_LEN(d1) ){
    char *p1;

    {char *p = v1 + d1 - 1;
     int  li;
        while (*p == ' ' && p > v1) p--;
        p++;
        p1 = (char *)MPL_malloc( p-v1 + 1, MPL_MEM_OTHER );
        for (li=0; li<(p-v1); li++) { p1[li] = v1[li]; }
        p1[li] = 0; 
    }
    *ierr = MPI_Close_port( p1 );
    MPL_free( p1 );
}
