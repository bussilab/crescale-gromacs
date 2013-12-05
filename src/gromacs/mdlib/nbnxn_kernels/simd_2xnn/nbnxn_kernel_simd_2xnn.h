/*
 * This file is part of the GROMACS molecular simulation package.
 *
 * Copyright (c) 2012,2013,2014, by the GROMACS development team, led by
 * Mark Abraham, David van der Spoel, Berk Hess, and Erik Lindahl,
 * and including many others, as listed in the AUTHORS file in the
 * top-level source directory and at http://www.gromacs.org.
 *
 * GROMACS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 *
 * GROMACS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with GROMACS; if not, see
 * http://www.gnu.org/licenses, or write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
 *
 * If you want to redistribute modifications to GROMACS, please
 * consider that scientific software is very special. Version
 * control is crucial - bugs must be traceable. We will be happy to
 * consider code for inclusion in the official distribution, but
 * derived work must not be called official GROMACS. Details are found
 * in the README & COPYING files - if they are missing, get the
 * official version at http://www.gromacs.org.
 *
 * To help us fund GROMACS development, we humbly ask that you cite
 * the research papers on the package. Check out http://www.gromacs.org.
 */
/*
 * Note: this file was generated by the Verlet kernel generator for
 * kernel type 2xnn.
 */

#include "typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif
#if 0
}
#endif

/*! \brief Run-time dispatcher for nbnxn kernel functions. */
void
nbnxn_kernel_simd_2xnn(nbnxn_pairlist_set_t       *nbl_list,
                       const nbnxn_atomdata_t     *nbat,
                       const interaction_const_t  *ic,
                       int                         ewald_excl,
                       rvec                       *shift_vec,
                       int                         force_flags,
                       int                         clearF,
                       real                       *fshift,
                       real                       *Vc,
                       real                       *Vvdw);

/* Need an #include guard so that sim_util.c can include all
 * such files. */
#ifndef _nbnxn_kernel_simd_include_h
#define _nbnxn_kernel_simd_include_h
/*! \brief Typedefs for declaring kernel functions. */
typedef void (nbk_func_ener)(const nbnxn_pairlist_t     *nbl,
                             const nbnxn_atomdata_t     *nbat,
                             const interaction_const_t  *ic,
                             rvec                       *shift_vec,
                             real                       *f,
                             real                       *fshift,
                             real                       *Vvdw,
                             real                       *Vc);
typedef nbk_func_ener *p_nbk_func_ener;

typedef void (nbk_func_noener)(const nbnxn_pairlist_t     *nbl,
                               const nbnxn_atomdata_t     *nbat,
                               const interaction_const_t  *ic,
                               rvec                       *shift_vec,
                               real                       *f,
                               real                       *fshift);
typedef nbk_func_noener *p_nbk_func_noener;
#endif

nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJCombLB_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJ_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJFSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJPSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJEwCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJCombLB_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJ_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJFSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJPSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJEwCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombLB_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJ_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJFSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJPSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJCombLB_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJ_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJFSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJPSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJEwCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJCombGeom_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJCombLB_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJ_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJFSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJPSw_VgrpF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VgrpF_2xnn;

nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJCombLB_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJ_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJFSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJPSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecRF_VdwLJEwCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJCombLB_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJ_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJFSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJPSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTab_VdwLJEwCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombLB_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJ_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJFSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJPSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJCombLB_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJ_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJFSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJPSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEw_VdwLJEwCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJCombGeom_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJCombLB_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJ_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJFSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJPSw_VF_2xnn;
nbk_func_ener         nbnxn_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VF_2xnn;

nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJCombLB_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJ_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJFSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJPSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecRF_VdwLJEwCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJCombLB_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJ_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJFSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJPSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTab_VdwLJEwCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJCombLB_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJ_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJFSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJPSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJCombLB_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJ_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJFSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJPSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEw_VdwLJEwCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJCombGeom_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJCombLB_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJ_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJFSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJPSw_F_2xnn;
nbk_func_noener       nbnxn_kernel_ElecEwTwinCut_VdwLJEwCombGeom_F_2xnn;



#if 0
{
#endif
#ifdef __cplusplus
}
#endif
