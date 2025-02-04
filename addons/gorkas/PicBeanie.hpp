#undef PICTURE
#define PICTURE(BASE) \
    class BASE: H_Watchcap_blu_hsless { \
        picture = QPATHTOF(pictures\##BASE##.paa); \
    }

class H_Watchcap_blk;
class H_Watchcap_blu_hsless: H_Watchcap_blk {
    picture = QPATHTOF(pictures\H_Watchcap_blu_hsless.paa);
};

class H_Watchcap_brown_hsless: H_Watchcap_blu_hsless {
    picture = QPATHTOF(pictures\H_Watchcap_brown_hsless.paa);
    displayName = "Beanie (Dark Green)";
};

PICTURE(H_Watchcap_aaf_hsless);
PICTURE(H_Watchcap_black_hsless);
PICTURE(H_Watchcap_blackred_hsless);
PICTURE(H_Watchcap_blackyellow_hsless);
PICTURE(H_Watchcap_blue2_hsless);
PICTURE(H_Watchcap_blueblack_hsless);
PICTURE(H_Watchcap_drkgrey_hsless);
PICTURE(H_Watchcap_green_hsless);
PICTURE(H_Watchcap_grey_hsless);
PICTURE(H_Watchcap_greyblack_hsless);
PICTURE(H_Watchcap_greyblue_hsless);
PICTURE(H_Watchcap_greyred_hsless);
PICTURE(H_Watchcap_hunter_hsless);
PICTURE(H_Watchcap_ldf_hsless);
PICTURE(H_Watchcap_red_hsless);
PICTURE(H_Watchcap_wdl_hsless);
PICTURE(H_Watchcap_wdlkhk_hsless);
PICTURE(H_Watchcap_yellow_hsless);
