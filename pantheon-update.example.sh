#!/bin/bash

# This script updating pantheon

# Define font constant
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

PANTHEON_DIR="/home/ilya/pantheon/taglit-fellows"
PANTHEON_ALIAS="@pantheon.taglit-fellows.dev"

rm -rf $PANTHEON_DIR/profiles/taglit
cp -R taglit $PANTHEON_DIR/profiles/taglit
rm -rf $PANTHEON_DIR/profiles/taglit/data-migrate

cd $PANTHEON_DIR
git add .
git commit -am "Site update"
git push

printf "${GREEN}${BOLD}Done.${NORMAL}\n"
