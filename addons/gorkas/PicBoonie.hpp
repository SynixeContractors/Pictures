#undef PICTURE
#define PICTURE(BASE) \
    class BASE: H_Booniehat_khk { \
        picture = QPATHTOF(pictures\##BASE##.paa); \
    }

class H_Booniehat_khk;

PICTURE(H_Booniehat_aaf);
PICTURE(H_Booniehat_black);
PICTURE(H_Booniehat_blue);
PICTURE(H_Booniehat_green);
PICTURE(H_Booniehat_grey);
PICTURE(H_Booniehat_hunter);
PICTURE(H_Booniehat_ldf);
PICTURE(H_Booniehat_urban);
PICTURE(H_Booniehat_woodland);
