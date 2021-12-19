#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/luckycoin.png
ICON_DST=../../src/qt/res/icons/luckycoin.ico
convert ${ICON_SRC} -resize 16x16 luckycoin-16.png
convert ${ICON_SRC} -resize 32x32 luckycoin-32.png
convert ${ICON_SRC} -resize 48x48 luckycoin-48.png
convert luckycoin-16.png luckycoin-32.png luckycoin-48.png ${ICON_DST}

