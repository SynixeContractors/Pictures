#define MAINPREFIX synixe
#define PREFIX pictures

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH

#define REQUIRED_VERSION 2.18

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Synixe - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Synixe - COMPONENT)
#endif
