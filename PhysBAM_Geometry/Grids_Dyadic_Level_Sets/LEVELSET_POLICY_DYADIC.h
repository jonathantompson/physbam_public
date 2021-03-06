//#####################################################################
// Copyright 2006-2009, Geoffrey Irving, Andrew Selle.
// This file is part of PhysBAM whose distribution is governed by the license contained in the accompanying file PHYSBAM_COPYRIGHT.txt.
//#####################################################################
// Class LEVELSET_POLICY_DYADIC 
//#####################################################################
#ifndef COMPILE_WITHOUT_DYADIC_SUPPORT
// #if !COMPILE_WITHOUT_DYADIC_SUPPORT || COMPILE_WITH_BINTREE_SUPPORT
#ifndef __LEVELSET_POLICY_DYADIC__
#define __LEVELSET_POLICY_DYADIC__

#include <PhysBAM_Geometry/Level_Sets/LEVELSET_POLICY.h>
namespace PhysBAM{

template<class T> class BINTREE_GRID;

template<class TV> class DYADIC_IMPLICIT_OBJECT;

template<class T_GRID> class LEVELSET_DYADIC;
template<class T_GRID> class LEVELSET_BINTREE;
template<class T_GRID> class FAST_LEVELSET;
template<class T_GRID> class LEVELSET_MULTIPLE_DYADIC;
template<class T_GRID> class PARTICLE_LEVELSET_DYADIC;
template<class T_GRID> class PARTICLE_LEVELSET_EVOLUTION_DYADIC;
template<class T_GRID,class T2> struct EXTRAPOLATION_DYADIC;

template<class T> struct LEVELSET_POLICY<BINTREE_GRID<T> >
{
    typedef LEVELSET_BINTREE<T> LEVELSET;
//     typedef LEVELSET FAST_LEVELSET_T;
//     typedef LEVELSET_MULTIPLE_DYADIC<BINTREE_GRID<T> > LEVELSET_MULTIPLE;
//     typedef DYADIC_IMPLICIT_OBJECT<VECTOR<T,1> > LEVELSET_IMPLICIT_OBJECT;
//     typedef PARTICLE_LEVELSET_DYADIC<BINTREE_GRID<T> > PARTICLE_LEVELSET;
//     typedef PARTICLE_LEVELSET_EVOLUTION_DYADIC<BINTREE_GRID<T> > PARTICLE_LEVELSET_EVOLUTION;
//     typedef EXTRAPOLATION_DYADIC<BINTREE_GRID<T>,T> EXTRAPOLATION_SCALAR;
//     typedef EXTRAPOLATION_DYADIC<BINTREE_GRID<T>,VECTOR<T,1> > EXTRAPOLATION_VECTOR;
};

#ifndef COMPILE_WITHOUT_DYADIC_SUPPORT
template<class T> class OCTREE_GRID;
template<class T> class QUADTREE_GRID;
template<class T_GRID> class LEVELSET_OCTREE;
template<class T_GRID> class LEVELSET_QUADTREE;

template<class T> struct LEVELSET_POLICY<OCTREE_GRID<T> >
{
    typedef LEVELSET_OCTREE<T> LEVELSET;
    typedef LEVELSET FAST_LEVELSET_T;
    typedef LEVELSET_MULTIPLE_DYADIC<OCTREE_GRID<T> > LEVELSET_MULTIPLE;
    typedef DYADIC_IMPLICIT_OBJECT<VECTOR<T,3> > LEVELSET_IMPLICIT_OBJECT;
    typedef PARTICLE_LEVELSET_DYADIC<OCTREE_GRID<T> > PARTICLE_LEVELSET;
    typedef PARTICLE_LEVELSET_EVOLUTION_DYADIC<OCTREE_GRID<T> > PARTICLE_LEVELSET_EVOLUTION;
    typedef EXTRAPOLATION_DYADIC<OCTREE_GRID<T>,T> EXTRAPOLATION_SCALAR;
    typedef EXTRAPOLATION_DYADIC<OCTREE_GRID<T>,VECTOR<T,3> > EXTRAPOLATION_VECTOR;
};

template<class T> struct LEVELSET_POLICY<QUADTREE_GRID<T> >
{
    typedef LEVELSET_QUADTREE<T> LEVELSET;
    typedef LEVELSET FAST_LEVELSET_T;
    typedef LEVELSET_MULTIPLE_DYADIC<QUADTREE_GRID<T> > LEVELSET_MULTIPLE;
    typedef DYADIC_IMPLICIT_OBJECT<VECTOR<T,2> > LEVELSET_IMPLICIT_OBJECT;    
    typedef PARTICLE_LEVELSET_DYADIC<QUADTREE_GRID<T> > PARTICLE_LEVELSET;
    typedef PARTICLE_LEVELSET_EVOLUTION_DYADIC<QUADTREE_GRID<T> > PARTICLE_LEVELSET_EVOLUTION;
    typedef EXTRAPOLATION_DYADIC<QUADTREE_GRID<T>,T> EXTRAPOLATION_SCALAR;
    typedef EXTRAPOLATION_DYADIC<QUADTREE_GRID<T>,VECTOR<T,2> > EXTRAPOLATION_VECTOR;
};
#endif
}
#endif
#endif
