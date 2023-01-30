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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_SET_INFO = PMPI_WIN_SET_INFO
#pragma weak mpi_win_set_info__ = PMPI_WIN_SET_INFO
#pragma weak mpi_win_set_info_ = PMPI_WIN_SET_INFO
#pragma weak mpi_win_set_info = PMPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_SET_INFO = pmpi_win_set_info__
#pragma weak mpi_win_set_info__ = pmpi_win_set_info__
#pragma weak mpi_win_set_info_ = pmpi_win_set_info__
#pragma weak mpi_win_set_info = pmpi_win_set_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_SET_INFO = pmpi_win_set_info_
#pragma weak mpi_win_set_info__ = pmpi_win_set_info_
#pragma weak mpi_win_set_info_ = pmpi_win_set_info_
#pragma weak mpi_win_set_info = pmpi_win_set_info_
#else
#pragma weak MPI_WIN_SET_INFO = pmpi_win_set_info
#pragma weak mpi_win_set_info__ = pmpi_win_set_info
#pragma weak mpi_win_set_info_ = pmpi_win_set_info
#pragma weak mpi_win_set_info = pmpi_win_set_info
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_WIN_SET_INFO = PMPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_set_info__ = pmpi_win_set_info__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_set_info = pmpi_win_set_info
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_set_info_ = pmpi_win_set_info_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_SET_INFO  MPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_set_info__  mpi_win_set_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_set_info  mpi_win_set_info
#else
#pragma _HP_SECONDARY_DEF pmpi_win_set_info_  mpi_win_set_info_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_SET_INFO as PMPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_set_info__ as pmpi_win_set_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_set_info as pmpi_win_set_info
#else
#pragma _CRI duplicate mpi_win_set_info_ as pmpi_win_set_info_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_set_info__ = MPI_WIN_SET_INFO
#pragma weak mpi_win_set_info_ = MPI_WIN_SET_INFO
#pragma weak mpi_win_set_info = MPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_SET_INFO = mpi_win_set_info__
#pragma weak mpi_win_set_info_ = mpi_win_set_info__
#pragma weak mpi_win_set_info = mpi_win_set_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_SET_INFO = mpi_win_set_info_
#pragma weak mpi_win_set_info__ = mpi_win_set_info_
#pragma weak mpi_win_set_info = mpi_win_set_info_
#else
#pragma weak MPI_WIN_SET_INFO = mpi_win_set_info
#pragma weak mpi_win_set_info__ = mpi_win_set_info
#pragma weak mpi_win_set_info_ = mpi_win_set_info
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_SET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_set_info__ = PMPI_WIN_SET_INFO
#pragma weak pmpi_win_set_info_ = PMPI_WIN_SET_INFO
#pragma weak pmpi_win_set_info = PMPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_SET_INFO = pmpi_win_set_info__
#pragma weak pmpi_win_set_info_ = pmpi_win_set_info__
#pragma weak pmpi_win_set_info = pmpi_win_set_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_SET_INFO = pmpi_win_set_info_
#pragma weak pmpi_win_set_info__ = pmpi_win_set_info_
#pragma weak pmpi_win_set_info = pmpi_win_set_info_
#else
#pragma weak PMPI_WIN_SET_INFO = pmpi_win_set_info
#pragma weak pmpi_win_set_info__ = pmpi_win_set_info
#pragma weak pmpi_win_set_info_ = pmpi_win_set_info
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_SET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_SET_INFO( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_set_info_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_set_info")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_win_set_info_ PMPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_set_info_ pmpi_win_set_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_set_info_ pmpi_win_set_info
#else
#define mpi_win_set_info_ pmpi_win_set_info_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_set_info
#define MPI_Win_set_info PMPI_Win_set_info 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_win_set_info_ MPI_WIN_SET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_set_info_ mpi_win_set_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_set_info_ mpi_win_set_info
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_set_info_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_Win_set_info( (MPI_Win)*v1, (MPI_Info)(*v2) );
}
