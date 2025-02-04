// #include "\x\cba\addons\main\script_macros_common.hpp" // Included in ACE3's "script_macros.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Hide
#define HIDE(CLASS,PARENT) class CLASS: PARENT { scope = 1; scopeCurator = 1; }
