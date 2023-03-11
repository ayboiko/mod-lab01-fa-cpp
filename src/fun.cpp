// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
  int kl = 0;
    int f1 = 0, f2 = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            f1 = 1;
        }
        if (str[i] != ' ') {
            f2 = 1;
        }
        if (str[i] == ' ' && f2 == 1) {
            if (f1 == 0)
                kl++;
            f1 = 0;
            f2 = 0;
        }
    }
    return kl;
}

unsigned int faStr2(const char *str) {
  int kl = 0;
    int fw = 0;
    int fs = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' && fs != 0)
            fw = 1;
        if (str[i] >= 'A' && str[i] <= 'z') {
            fs = 0;
        } else if (str[i] != ' ') {
            fw = 0;
        } else {
            if (fw == 1) {
                kl++;
            }
            fs = 1;
            fw = 0;
        }
    }
    return kl;
}
unsigned int faStr3(const char *str) {
  int kl_slov = 0;
    int ob_kl = 0;
    int fw = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            ob_kl++;
            fw = 1;
        }
        if (str[i] == ' ') {
            if (fw != 0) kl_slov++;
            fw = 0;
        }
    }
    if (fw != 0)
        kl_slov++;
    float sr = ob_kl / kl_slov;
    if ((sr - static_cast<int>(sr)) >= 0.5)
        return static_cast<int>(sr) + 1;
    return static_cast<int>(sr);
}
