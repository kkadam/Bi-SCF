!Gridsize
       integer, parameter :: numr = 256
       integer, parameter :: numz = 256
       integer, parameter :: numphi = 512

       real, parameter :: n1 = 1.5
       real, parameter :: nc1 = 4.0
       real, parameter :: mu1 = 2.0
       real, parameter :: muc1 = 1.0

       real, parameter :: n2 = 1.5
       real, parameter :: nc2 = 4.0
       real, parameter :: mu2 = 2.0
       real, parameter :: muc2 = 1.0       
       
!Primary-secondary boundary 
       integer, parameter :: phi1 = 127             !0.248
       integer, parameter :: phi2 = 129             !0.252
       integer, parameter :: phi3 = 383             !0.748
       integer, parameter :: phi4 = 385             !0.752 
       
!Maximum iterations
       integer, parameter :: maxit = 3
       
!Mystery parameters for Poisson Solver
       integer, parameter :: maxterm = 10  !spherical harmonic moment L 
                                           !for boundary potential
                                           !Explained in BDYGEN
       integer, parameter :: isym = -2     !Explained in BDYGEN, SETBDY -ve?
       real, parameter    :: redge = 1.0   !Explained in BDYGEN
       integer, parameter :: npoint = 10   !Used in pot3, ?
       integer, parameter :: iprint = 1    !Used in pot3, ?
       integer, parameter :: icall = 0     !Explained in SETBDY ?
