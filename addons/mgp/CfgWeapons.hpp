class CfgWeapons {
    #undef PICTURE
    #define PICTURE(CLASS) class CLASS: ItemCore { \
        picture = QPATHTOF(ui\CLASS.paa); \
    }

    class ItemCore;

    #include "PictureBelts.hpp"
    #include "PictureHats.hpp"
    #include "PictureHelmets.hpp"
    #include "PictureVests.hpp"
};
