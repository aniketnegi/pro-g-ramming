def decode(enc_str: str, shift: int) -> str:
    if (shift == 0):
        return enc_str
    elif (shift < 0):
        # this is a property of Shift Ciphers => shifting left by "N" = shifting right by "26 + N"
        shift = shift + 26

    decoded_str = ""

    for char in enc_str:
        if not char.isalpha():
            decoded_str += char
        else:
            char_ascii = ord(char)
            if 65 <= char_ascii <= 90:
                # character is UPPERCASE => according to ASCII codes
                decoded_str += chr(ord('A') +
                                   (char_ascii + shift - ord('A')) % 26)
            elif 97 <= char_ascii <= 122:
                # character is lowercase => according to ASCII codes
                decoded_str += chr(ord('a') +
                                   (char_ascii + shift - ord('a')) % 26)
            else:
                print(
                    f"Encountered non-standard character: {char} at position {enc_str.index(char)}. Could not decode string!")

    return decoded_str


def decode_file_io(file_ptr: str, shift: int) -> str:
    # Implement
    return


q_str = """Mkvv wo Scrwkov. Cywo iokbc kqy--xofob wsxn ryg vyxq zbomscovi--rkfsxq
vsddvo yb xy wyxoi sx wi zebco, kxn xydrsxq zkbdsmevkb dy sxdobocd wo
yx crybo, S dryeqrd S gyevn cksv klyed k vsddvo kxn coo dro gkdobi zkbd
yp dro gybvn. Sd sc k gki S rkfo yp nbsfsxq ypp dro czvoox kxn
boqevkdsxq dro msbmevkdsyx. Groxofob S psxn wicovp qbygsxq qbsw klyed
dro wyedr; groxofob sd sc k nkwz, nbsjjvi Xyfowlob sx wi cyev; groxofob
S psxn wicovp sxfyvexdkbsvi zkecsxq lopybo myppsx gkboryecoc, kxn
lbsxqsxq ez dro bokb yp ofobi pexobkv S wood; kxn oczomskvvi groxofob
wi rizyc qod cemr kx ezzob rkxn yp wo, drkd sd boaesboc k cdbyxq wybkv
zbsxmszvo dy zbofoxd wo pbyw novslobkdovi cdozzsxq sxdy dro cdbood, kxn
wodrynsmkvvi uxymusxq zoyzvo’c rkdc ypp--drox, S kmmyexd sd rsqr dswo dy
qod dy cok kc cyyx kc S mkx. Drsc sc wi celcdsdedo pyb zscdyv kxn lkvv.
Gsdr k zrsvycyzrsmkv pvyebscr Mkdy drbygc rswcovp ezyx rsc cgybn; S
aesodvi dkuo dy dro crsz. Drobo sc xydrsxq cebzbscsxq sx drsc. Sp droi
led uxog sd, kvwycd kvv wox sx drosb noqboo, cywo dswo yb ydrob,
mrobscr fobi xokbvi dro ckwo poovsxqc dygkbnc dro ymokx gsdr wo.

Drobo xyg sc iyeb sxcevkb msdi yp dro Wkxrkddyoc, lovdon byexn li
grkbfoc kc Sxnskx scvoc li mybkv boopc--mywwobmo cebbyexnc sd gsdr rob
cebp. Bsqrd kxn vopd, dro cdboodc dkuo iye gkdobgkbn. Sdc ohdbowo
nygxdygx sc dro lkddobi, grobo drkd xylvo wyvo sc gkcron li gkfoc, kxn
myyvon li lboojoc, grsmr k pog ryebc zbofsyec gobo yed yp csqrd yp
vkxn. Vyyu kd dro mbygnc yp gkdob-qkjobc drobo.

Droco kbo cywo xewlobc: 12345678900912479237593457943758
"""
key = -10

print(decode(q_str, key))
