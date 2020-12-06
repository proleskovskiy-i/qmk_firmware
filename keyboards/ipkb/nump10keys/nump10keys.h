#pragma once

#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, \
      k10, k11, k12, \
      k20, k21, k22, \
      k30, k31, k32  \
) { \
    { KC_NO, KC_NO, k02 }, \
    { k10,   k11,   k12 }, \
    { k20,   k21,   k22 }, \
    { k30,   k31,   k32 }  \
} 
