### Notes on the GROMACS implementation

More info can be found in [this repository](https://github.com/bussilab/crescale).

Here we host the GROMACS implementation of the algorithm. This is a dummy branch that just contains this readme file.
Several branches and tags can be found with the actual code:
- Tag [v2019.4-crescale](https://github.com/bussilab/crescale-gromacs/releases/tag/v2019.4-crescale)
  is the version used in the manuscript and is based on GROMACS 2019.4.<sup>1</sup>
- Tag [v2019.6-crescale](https://github.com/bussilab/crescale-gromacs/releases/tag/v2019.6-crescale)
  integrates GROMACS updates up to 2019.6.
- Tag [v2020.2-crescale](https://github.com/bussilab/crescale-gromacs/releases/tag/v2020.2-crescale)
  is based on GROMACS 2020.2.
- Branches [release-2019](http://github.com/bussilab/crescale-gromacs/tree/release-2019),
  [release-2020](http://github.com/bussilab/crescale-gromacs/tree/release-2020),
  and [master](http://github.com/bussilab/crescale-gromacs/tree/master) are in sync with the official GROMACS repository.
- Branch [release-2019-crescale](http://github.com/bussilab/crescale-gromacs/tree/release-2019-crescale)
  is based on branch [release-2019](http://github.com/bussilab/crescale-gromacs/tree/release-2019).
- Branch [release-2020-crescale](http://github.com/bussilab/crescale-gromacs/tree/release-2020-crescale)
  is based on branch [release-2020](http://github.com/bussilab/crescale-gromacs/tree/release-2020).
- Branch [master-crescale](http://github.com/bussilab/crescale-gromacs/tree/master-crescale)
  is based on branch [master](http://github.com/bussilab/crescale-gromacs/tree/master).

The changes in version 2019 are [relatively small](https://github.com/bussilab/crescale-gromacs/compare/release-2019..release-2019-crescale). The added code is basically a copy of the Berendsen code, with some modification. The changes in version 2020 are [slighly more complicated](https://github.com/bussilab/crescale-gromacs/compare/release-2020..release-2020-crescale) since in this version the coordinate update might be done on the GPU only. In this case, it was necessary to add a function to allow scaling of the velocities to be performed on the GPU. Changes on master branch are [similar](https://github.com/bussilab/crescale-gromacs/compare/master..master-crescale) and just required some adjustment to be compatible with master branch.

<sup>1</sup> There's a bug in the matrix inversion hard coded at [these lines](https://github.com/bussilab/crescale-gromacs/blob/v2019.4-crescale/src/gromacs/mdlib/coupling.cpp#L919-L925). The bug is harmless, since only diagonal terms are used in currently available schemes (anisotropic variant is not implemented). All the other tags and branches listed in this page use the gromacs routine to invert box matrices instead, which is correct.
