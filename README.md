# CWbase64
## Clarion interface to base64, encode and decode

### How to use:
! ========================================================================== !
!  Include this file (cwB64.INC) in your program MAP                         !
! ========================================================================== !
! MAP

    module('cwB64.cpp')
        CWencode64(*CSTRING _out, *CSTRING _in, long inlen),SIGNED,RAW ,NAME('_cwencode64')
        CWdecode64(*CSTRING  out, *CSTRING in, long inlen),SIGNED,RAW ,NAME('_cwdecode64')
    end !* end *
    
! END
