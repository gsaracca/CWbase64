! ========================================================================== !
!   Clarion INCLUDE file  cwB64.INC                                          !
!      cwB64.cpp                                                             !
!   adapted from GPL code for Clarion For Windows by John Griffiths -2009    !
!   Published with express permission of the author by Gustavo Saracca -2024 !
!                                                                            !
!   Description: Base64 encode and Decode CPP for Clarion                    !
!   Tested and supplied without any warranty. Use at your own risk           !
!                                                                            !
! ========================================================================== !
!  Include this file in your programs MAP                                    !
! ========================================================================== !
! MAP

    module('cwB64.cpp')
        CWencode64(*CSTRING _out, *CSTRING _in, long inlen),SIGNED,RAW ,NAME('_cwencode64')
        CWdecode64(*CSTRING  out, *CSTRING in, long inlen),SIGNED,RAW ,NAME('_cwdecode64')
    end !* end *
    
! END
