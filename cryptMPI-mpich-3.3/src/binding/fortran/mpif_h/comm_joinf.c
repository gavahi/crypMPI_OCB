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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_JOIN = PMPI_COMM_JOIN
#pragma weak mpi_comm_join__ = PMPI_COMM_JOIN
#pragma weak mpi_comm_join_ = PMPI_COMM_JOIN
#pragma weak mpi_comm_join = PMPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_JOIN = pmpi_comm_join__
#pragma weak mpi_comm_join__ = pmpi_comm_join__
#pragma weak mpi_comm_join_ = pmpi_comm_join__
#pragma weak mpi_comm_join = pmpi_comm_join__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_JOIN = pmpi_comm_join_
#pragma weak mpi_comm_join__ = pmpi_comm_join_
#pragma weak mpi_comm_join_ = pmpi_comm_join_
#pragma weak mpi_comm_join = pmpi_comm_join_
#else
#pragma weak MPI_COMM_JOIN = pmpi_comm_join
#pragma weak mpi_comm_join__ = pmpi_comm_join
#pragma weak mpi_comm_join_ = pmpi_comm_join
#pragma weak mpi_comm_join = pmpi_comm_join
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_COMM_JOIN = PMPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_join__ = pmpi_comm_join__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_join = pmpi_comm_join
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_join_ = pmpi_comm_join_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_JOIN  MPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_join__  mpi_comm_join__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_join  mpi_comm_join
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_join_  mpi_comm_join_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_JOIN as PMPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_join__ as pmpi_comm_join__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_join as pmpi_comm_join
#else
#pragma _CRI duplicate mpi_comm_join_ as pmpi_comm_join_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_join__ = MPI_COMM_JOIN
#pragma weak mpi_comm_join_ = MPI_COMM_JOIN
#pragma weak mpi_comm_join = MPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_JOIN = mpi_comm_join__
#pragma weak mpi_comm_join_ = mpi_comm_join__
#pragma weak mpi_comm_join = mpi_comm_join__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_JOIN = mpi_comm_join_
#pragma weak mpi_comm_join__ = mpi_comm_join_
#pragma weak mpi_comm_join = mpi_comm_join_
#else
#pragma weak MPI_COMM_JOIN = mpi_comm_join
#pragma weak mpi_comm_join__ = mpi_comm_join
#pragma weak mpi_comm_join_ = mpi_comm_join
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_JOIN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_join__ = PMPI_COMM_JOIN
#pragma weak pmpi_comm_join_ = PMPI_COMM_JOIN
#pragma weak pmpi_comm_join = PMPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_JOIN = pmpi_comm_join__
#pragma weak pmpi_comm_join_ = pmpi_comm_join__
#pragma weak pmpi_comm_join = pmpi_comm_join__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_JOIN = pmpi_comm_join_
#pragma weak pmpi_comm_join__ = pmpi_comm_join_
#pragma weak pmpi_comm_join = pmpi_comm_join_
#else
#pragma weak PMPI_COMM_JOIN = pmpi_comm_join
#pragma weak pmpi_comm_join__ = pmpi_comm_join
#pragma weak pmpi_comm_join_ = pmpi_comm_join
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_JOIN")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_JOIN( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_join_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_join")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_comm_join_ PMPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_join_ pmpi_comm_join__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_join_ pmpi_comm_join
#else
#define mpi_comm_join_ pmpi_comm_join_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_join
#define MPI_Comm_join PMPI_Comm_join 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_join_ MPI_COMM_JOIN
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_join_ mpi_comm_join__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_join_ mpi_comm_join
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_join_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_Comm_join( (int)*v1, (MPI_Comm *)(v2) );
}
