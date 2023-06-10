#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "caesar.h"

// #define MAX_STR_LEN 1024

int main(void) {
  char *encoded_string =
      "Mkvv wo Scrwkov. Cywo iokbc kqy--xofob wsxn ryg vyxq zbomscovi--rkfsxq \
vsddvo yb xy wyxoi sx wi zebco, kxn xydrsxq zkbdsmevkb dy sxdobocd wo \
yx crybo, S dryeqrd S gyevn cksv klyed k vsddvo kxn coo dro gkdobi zkbd \
yp dro gybvn. Sd sc k gki S rkfo yp nbsfsxq ypp dro czvoox kxn \
boqevkdsxq dro msbmevkdsyx. Groxofob S psxn wicovp qbygsxq qbsw klyed \
dro wyedr; groxofob sd sc k nkwz, nbsjjvi Xyfowlob sx wi cyev; groxofob \
S psxn wicovp sxfyvexdkbsvi zkecsxq lopybo myppsx gkboryecoc, kxn \
lbsxqsxq ez dro bokb yp ofobi pexobkv S wood; kxn oczomskvvi groxofob \
wi rizyc qod cemr kx ezzob rkxn yp wo, drkd sd boaesboc k cdbyxq wybkv \
zbsxmszvo dy zbofoxd wo pbyw novslobkdovi cdozzsxq sxdy dro cdbood, kxn \
wodrynsmkvvi uxymusxq zoyzvo’c rkdc ypp--drox, S kmmyexd sd rsqr dswo dy \
qod dy cok kc cyyx kc S mkx. Drsc sc wi celcdsdedo pyb zscdyv kxn lkvv. \
Gsdr k zrsvycyzrsmkv pvyebscr Mkdy drbygc rswcovp ezyx rsc cgybn; S \
aesodvi dkuo dy dro crsz. Drobo sc xydrsxq cebzbscsxq sx drsc. Sp droi \
led uxog sd, kvwycd kvv wox sx drosb noqboo, cywo dswo yb ydrob, \
mrobscr fobi xokbvi dro ckwo poovsxqc dygkbnc dro ymokx gsdr wo. \
 \
Drobo xyg sc iyeb sxcevkb msdi yp dro Wkxrkddyoc, lovdon byexn li \
grkbfoc kc Sxnskx scvoc li mybkv boopc--mywwobmo cebbyexnc sd gsdr rob \
cebp. Bsqrd kxn vopd, dro cdboodc dkuo iye gkdobgkbn. Sdc ohdbowo \
nygxdygx sc dro lkddobi, grobo drkd xylvo wyvo sc gkcron li gkfoc, kxn \
myyvon li lboojoc, grsmr k pog ryebc zbofsyec gobo yed yp csqrd yp \
vkxn. Vyyu kd dro mbygnc yp gkdob-qkjobc drobo. \
 \
Droco kbo cywo xewlobc: 12345678900912479237593457943758";

  size_t length = strlen(
      encoded_string); // using strlen for now because i am controlling input,
                       // and frankly at this stage, couldnt be bothered to add
                       // complexity with dynamic mem alloc

  char *decoded_buffer = (char *)malloc(sizeof(char) * length);

  decode(encoded_string, decoded_buffer, length, -10);

  printf("%s\n", decoded_buffer);

  free(decoded_buffer);

  return EXIT_SUCCESS;
}
