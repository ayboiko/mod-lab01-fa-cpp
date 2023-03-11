// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) { int i = 0; int kl = 0; bool byk; bool kon=false; while (str[i-1]!='\0') { if (str[i]!=' '&&str[i]!='\0') { if (kon == false) { byk = true; }if (str[i] >= '1' && str[i] <= '9') { byk = false; }kon = true;} else {if ( kon == true ) { kon = false; if ( byk == true ) { kl++; }}} i++; } return kl;
}

unsigned int faStr2(const char *str) { int i = 0; int kl = 0; bool bykva=false; bool nach = true; bool norm=false; while (str[i - 1] != '\0') {if (str[i] != ' ' && str[i] != '\0') { if (nach == true) { bykva = true;norm =true; }if (nach == true) { if (str[i] >= 'A' and str[i] <= 'Z') { bykva = true; } else { bykva = false; }} else { if (str[i] >= 'a' and str[i] <= 'z') { norm = true; } else { norm = false; }} nach = false; } else { nach = true; if (norm && bykva) {kl++;}}i++;} return kl;
}

unsigned int faStr3(const char *str) { int i = 0; int kl; bool nach = true; double ob_kl = 0; double kl_slov = 0;while (str[i - 1] != '\0') { if (str[i] != ' ' && str[i] != '\0') { if (nach == true) { kl = 0; kl_slov++; } kl++; if (str[i + 1] == ' ' || str[i+1] == '\0') { ob_kl = ob_kl + kl; } nach = false; } else { nach = true; }i++;} double sr = ob_kl / kl_slov; int itog; int okon = static_cast<int>(sr * 10)%10; if (okon >= 5) { itog = static_cast<int>(sr)+ 1;} else {itog = static_cast<int>(sr);} return itog;
}
