#!/bin/sh
dviEnding=".dvi"
psEnding=".ps"
latex $1
bibtex $1
latex $1
latex $1
dvips -t a4 $1$dviEnding
ps2pdf -sPAPERSIZE=a4 $1$psEnding
#dvips -Ppdf $1
#dvipdf $1
