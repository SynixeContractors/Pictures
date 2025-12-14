#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_pictures_main",
            "eo_gorkas",
        };
        skipWhenMissingDependencies = 1;
        authors[] = {"Brett"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
