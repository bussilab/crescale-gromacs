/*
 * Library:   lmfit (Levenberg-Marquardt least squares fitting)
 *
 * File:      lmstruct.h
 *
 * Contents:  Declarations of parameter records, used in lmmin.h and lmcurve.h
 *
 * Copyright: Joachim Wuttke, Forschungszentrum Juelich GmbH (2004-2013)
 *
 * License:   see ../COPYING (FreeBSD)
 *
 * Homepage:  apps.jcns.fz-juelich.de/lmfit
 */

#ifndef GMX_LMSTRUCT_H
#define GMX_LMSTRUCT_H

#include <stdio.h>

/* Collection of input parameters for fit control. */
typedef struct {
    double ftol;      /* Relative error desired in the sum of squares.
                         Termination occurs when both the actual and
                         predicted relative reductions in the sum of squares
                         are at most ftol. */
    double xtol;      /* Relative error between last two approximations.
                         Termination occurs when the relative error between
                         two consecutive iterates is at most xtol. */
    double gtol;      /* Orthogonality desired between fvec and its derivs.
                         Termination occurs when the cosine of the angle
                         between fvec and any column of the Jacobian is at
                         most gtol in absolute value. */
    double epsilon;   /* Step used to calculate the Jacobian, should be
                         slightly larger than the relative error in the
                         user-supplied functions. */
    double stepbound; /* Used in determining the initial step bound. This
                         bound is set to the product of stepbound and the
                         Euclidean norm of diag*x if nonzero, or else to
                         stepbound itself. In most cases stepbound should lie
                         in the interval (0.1,100.0). Generally, the value
                         100.0 is recommended. */
    int   patience;   /* Used to set the maximum number of function evaluations
                         to patience*(number_of_parameters+1). */
    int   scale_diag; /* If 1, the variables will be rescaled internally.
                         Recommended value is 1. */
    FILE* msgfile;    /* Progress messages will be written to this file. */
    int   verbosity;  /* OR'ed: 1: print some messages; 2: print Jacobian. */
    int   n_maxpri;   /* -1, or max number of parameters to print. */
    int   m_maxpri;   /* -1, or max number of residuals to print. */
} lm_control_struct;

/* Collection of output parameters for status info. */
typedef struct {
    double fnorm;     /* norm of the residue vector fvec. */
    int    nfev;      /* actual number of iterations. */
    int    outcome;   /* Status indicator. Nonnegative values are used as index
                         for the message text lm_infmsg, set in lmmin.c. */
    int    userbreak; /* Set when function evaluation requests termination. */
} lm_status_struct;

/* Preset (and recommended) control parameter settings. */
extern const lm_control_struct gmx_lm_control_double;
extern const lm_control_struct gmx_lm_control_float;

/* Preset message texts. */

extern const char *gmx_lm_infmsg[];
extern const char *gmx_lm_shortmsg[];

#endif /* GMX_LMSTRUCT_H */