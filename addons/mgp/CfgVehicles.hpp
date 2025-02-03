class CfgVehicles {
    #undef PICTURE
    #define PICTURE(CLASS) class CLASS: milgp_Bag_Base { picture = QPATHTOF(ui\CLASS.paa); }

    class milgp_Bag_Base;

    #include "PictureBackpacks.hpp"
};
