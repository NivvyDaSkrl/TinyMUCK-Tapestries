/*
 * Copyright (c) 1990 Chelsea Dyerman
 * University of California, Berkeley (XCF)
 *
 * Some parts of this code -- in particular the dictionary based compression
 * code is Copyright 1995 by Dragon's Eye Productions
 *
 */

/*
 * This file is generated by mkversion.sh. Any changes made will go away.
 */

#include "patchlevel.h"
#include "params.h"
#include "externs.h"

const char *generation = "162";
const char *creation = "Tue Mar 13 2012 at 17:13:21 PDT";
const char *version = PATCHLEVEL;

const char *infotext[] =
{
    VERSION,
    " ",
    "Based on the original code written by these programmers:",
    "  David Applegate    James Aspnes    Timothy Freeman    Bennet Yee",
    " ",
    "Others who have done major coding work along the way:",
    "  Lachesis, ChupChups, FireFoot, Russ 'Random' Smith, and Dr. Cat",
    " ",
    "This is a user-extendible, user-programmable multi-user adventure game.",
    "TinyMUCK was derived from TinyMUD v1.5.2, with extensive modifications.",
    "Because of all the modifications, this program is not in any way, shape,",
    "or form being supported by any of the original authors.  Any bugs, ideas,",
    "suggestions,  etc, should be directed to the persons listed below.",
    "Do not send diff files, send us mail about the bug and describe as best",
    "as you can, where you were at when the bug occured, and what you think",
    "caused the bug to be was produced, so we can try to reproduce it and",
    "track it down.",
    " ",
    "The following programmers currently maintain the code:",
    "  Foxen/Revar:   foxen@belfry.com    Project Lead, Developer",
    "  Fre'ta:                            Crazy Developer",
    " ",
    "The following people helped out a lot along the way:",
    "  Fre'ta, Chris, Ermafelna, Lynx, WhiteFire, Kimi, Cynbe, Myk, Taldin,",
    "  Howard, darkfox, Moonchilde, Felorin, Xixia, Doran, Riss and King_Claudius.",
    " ",
    "Alpha and beta test sites, who put up with this nonsense:",
    "  HighSeasMUCK, TygryssMUCK, FurryMUCK, CyberFurry, PendorMUCK, Kalasia,",
    "  AnimeMUCK, Realms, FurryII, Tapestries, Unbridled Desires, TruffleMUCK,",
    "  and Brazillian Dreams.",
    " ",
    "Places silly enough to give Foxen a wizbit at some time or another:",
    "  ChupMuck, HighSeas, TygMUCK, TygMUCK II, Furry, Pendor, Realms,",
    "  Kalasia, Anime, CrossRoadsMUCK, TestMage, MeadowFaire, TruffleMUCK,",
    "  Tapestries, Brazillian Dreams, SocioPolitical Ramifications, & more.",
    " ",
    "Thanks also goes to those persons not mentioned here who have added",
    "their advice, opinions, and code to TinyMUCK.",
    0,
};


void
do_credits(dbref player)
{
    int i;

    for (i = 0; infotext[i]; i++) {
        notify(player, infotext[i]);
    }
}

