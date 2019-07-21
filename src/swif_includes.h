/**
 * SWiF Codec: an open-source sliding window FEC codec in C
 * https://github.com/irtf-nwcrg/swif-codec
 */

#ifndef SWIF_INCLUDES_H
#define SWIF_INCLUDES_H


#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "swif_general.h"
#include "swif_api.h"
#include "swif_rlc_cb.h"
#include "swif_linear-code.h"
#include "swif_prng.h"
#include "swif_symbol.h"

#ifdef DEBUG
#define DEBUG_PRINT(...) do { fprintf( stderr, __VA_ARGS__ ); } while(0)
#else
#define DEBUG_PRINT(...) do {} while(0)
#endif

#endif /* SWIF_INCLUDES_H */
