int layer0[44] = {

        _____P_____ , _____O_____ , _____I_____ , _____U_____ , _____Y_____ ,         /**/ 0 /**/ ,       _____T_____ , _____R_____ , _____E_____ , _____W_____ , _____Q_____ ,

        _SEMICOLON_ , _____L_____ , _____K_____ , _____J_____ , _____H_____ ,         /**/ 0 /**/ ,       _____G_____ , _____F_____ , _____D_____ , _____S_____ , _____A_____ ,

        ___SLASH___ , __PERIOD___ , ___COMMA___ , _____M_____ , _____N_____ , M__SHIFT__M ,               _____B_____ , _____V_____ , _____C_____ , _____X_____ , _____Z_____ ,

        ___ENTER___ , ___ENTER___ , M___ALT___M , M__CTRL___M , ___SPACE___ ,               M__FUNC___M , ___BKSP____ , M___CMD___M , ____TAB____ , SHIFT(_TAB_), ____ESC____

};

int layer1[44] = {

        _____0_____ , _____9_____ , _____8_____ , _____7_____ , _____6_____ ,        /**/ 0 /**/        , _____5_____ , _____4_____ , _____3_____ , _____2_____ , _____1_____ ,

        ___ENTER___ , ___QUOTE___ , ___EQUAL___ , ___MINUS___ , _BACKSLASH_ ,        /**/ 0 /**/        , SHIFT(__0__), SHIFT(__9__), _L_SQ_BRKT_ , SHIFT(_LSB_), ___TILDE___ ,

        /**/ 0 /**/ , SHIFT(_QOT_), SHIFT(_EQL_), SHIFT(_MIN_), SHIFT(_BKS_), M__SHIFT__M ,               /**/ 0 /**/ , SHIFT(__0__), _R_SQ_BRKT_ , SHIFT(_RSB_), SHIFT(_TLD_),

        ___ENTER___ , FUNCTION(2) , M___ALT___M , M__CTRL___M , ___SPACE___ ,               M__FUNC___M , ___BKSP____ , M___CMD___M , ____TAB____ , SHIFT(_TAB_), ____ESC____

};

int layer2[44] = {

        ____F10____ , ____F9_____ , ____F8_____ , ____F7_____ , ____UP_____ ,        /**/ 0 /**/        , ___PG_UP___ , ____END____ , ____UP_____ , ___HOME____ , __INSERT___ ,

        ____F11____ , ____F6_____ , ____F5_____ , ____F4_____ , ___DOWN____ ,        /**/ 0 /**/        , __PG_DOWN__ , ___RIGHT___ , ___DOWN____ , ___LEFT____ , __DELETE___ ,

        ____F12____ , ____F3_____ , ____F2_____ , ____F1_____ , /**/ 0 /**/ , M__SHIFT__M ,               /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ , /**/ 0 /**/ ,

        FUNCTION(0) , /**/ 0 /**/ , M___ALT___M , M__CTRL___M , ___SPACE___ ,               M__FUNC___M , ___BKSP____ , M___CMD___M , /**/ 0 /**/ , FUNCTION(3) , /**/ 0 /**/

};

int *layers[] = {layer0, layer1, layer2};

#include "layout_common.h"
