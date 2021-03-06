#!/bin/bash

# This script updating pantheon

# Define font constant
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

PANTHEON_DIR="/Users/adamstewart/Sites/pantheon/toolkit"

rm -rf $PANTHEON_DIR/profiles/toolkit
cp -R toolkit $PANTHEON_DIR/profiles/toolkit

cd $PANTHEON_DIR
git pull origin
git add .
git commit -am "Site update"
git push

printf "${GREEN}${BOLD}Done.${NORMAL}\n"
