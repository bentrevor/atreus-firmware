// FUNCTION(0) == reset (upload layout.h)
// FUNCTION(2) == use layer2
// FUNCTION(3) == use layer0

int layer0[44] = {

        _____Q_____ , _____W_____ , _____E_____ , _____R_____ , _____T_____ ,        /**/ 0 /**/        , _____Y_____ , _____U_____ , _____I_____ , _____O_____ , _____P_____ ,


        _____A_____ , _____S_____ , _____D_____ , _____F_____ , _____G_____ ,        /**/ 0 /**/        , _____H_____ , _____J_____ , _____K_____ , _____L_____ , _SEMICOLON_ ,


        _____Z_____ , _____X_____ , _____C_____ , _____V_____ , _____B_____ ,               M__FUNC___M , _____N_____ , _____M_____ , ___COMMA___ , __PERIOD___ , ___SLASH___ ,


        ____TAB____ , M__CTRL___M , M___ALT___M , M___CMD___M , ___BKSP____ , M__SHIFT__M ,               ___SPACE___ , M__CTRL___M , M___ALT___M , ____ESC____ , ___ENTER___

};

int layer1[44] = {

        _____1_____ , _____2_____ , _____3_____ , _____4_____ , _____5_____ ,        /**/ 0 /**/        , _____6_____ , _____7_____ , _____8_____ , _____0_____ , _____9_____ ,


        ___TILDE___ , _L_SQ_BRKT_ , _R_SQ_BRKT_ , SHIFT(__9__), SHIFT(__0__),        /**/ 0 /**/        , ____UP_____ , _BACKSLASH_ , ___MINUS___ , ___EQUAL___ , ___QUOTE___ ,


        SHIFT(_TLD_), SHIFT(_LSB_), SHIFT(_RSB_), SHIFT(_TAB_), ____TAB____ ,               M__FUNC___M , ___DOWN____ , SHIFT(_BKS_), SHIFT(_MIN_), SHIFT(_EQL_), SHIFT(_QOT_),


        M__CTRL___M , M__CTRL___M , M___ALT___M , M___CMD___M , ___BKSP____ , M__SHIFT__M ,               ___SPACE___ , M__CTRL___M , M___ALT___M , FUNCTION(2) , ___ENTER___

};

int layer2[44] = {

        ____F10____ , ____F9_____ , ____F8_____ , ____F7_____ , ____UP_____ ,        /**/ 0 /**/        , ___PG_UP___ , ____END____ , ____UP_____ , ___HOME____ , __INSERT___ ,

        ____F11____ , ____F6_____ , ____F5_____ , ____F4_____ , ___DOWN____ ,        /**/ 0 /**/        , __PG_DOWN__ , ___RIGHT___ , ___DOWN____ , ___LEFT____ , __DELETE___ ,

        ____F12____ , ____F3_____ , ____F2_____ , ____F1_____ , /**/ 0 /**/ ,               M__FUNC___M , /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ ,

        FUNCTION(0) , /**/ 0 /**/ , M___ALT___M , M__CTRL___M , ___SPACE___ , M__SHIFT__M ,               ___BKSP____ , M___CMD___M , /**/ 0 /**/ , FUNCTION(3) , FUNCTION(0)
};

int *layers[] = {layer0, layer1, layer2};

#include "layout_common.h"
