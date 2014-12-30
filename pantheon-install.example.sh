#!/bin/bash

# Some variable definitions
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

PANTHEON_DIR="~/Documents/www/pantheon/toolkit"
PANTHEON_ALIAS="@toolkit.dev"

rm -rf $PANTHEON_DIR/profiles/toolkit
cp -R toolkit $PANTHEON_DIR/profiles/toolkit

cd $PANTHEON_DIR
git add .
git commit -am "Site update"
git push

cd ..

# Execute Pantheon install outside of the Pantheon Dir.
drush $PANTHEON_ALIAS sql-drop -y

drush $PANTHEON_ALIAS si -y toolkit --account-pass=admin

# Development variables
drush $PANTHEON_ALIAS en pantheon_apachesolr -y --strict=0

# Import SQL files.
# Migrate all the data.
#drush $PANTHEON_ALIAS mi --all --user=1 --strict=0

drush $PANTHEON_ALIAS migrate-auto-register --strict=0
drush $PANTHEON_ALIAS uli
