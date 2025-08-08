#!/bin/bash
cd "$(dirname -- "$(readlink -fn -- "${0}")")"

rm -rf 01; cp -r 00 01; cd 01; for i in *.png; do convert "$i" -resize 64x64   "$i"; done; cd ..
rm -rf 02; cp -r 00 02; cd 02; for i in *.png; do convert "$i" -resize 32x32   "$i"; done; cd ..
rm -rf 03; cp -r 00 03; cd 03; for i in *.png; do convert "$i" -resize 16x16   "$i"; done; cd ..
rm -rf 04; cp -r 00 04; cd 04; for i in *.png; do convert "$i" -resize 8x8     "$i"; done; cd ..

