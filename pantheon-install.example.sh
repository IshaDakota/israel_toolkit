#!/bin/bash

# Some variable definitions
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

PANTHEON_DIR="/var/www/pantheon/mlizard"
PANTHEON_ALIAS="@pantheon.mlizard.dev"

rm -rf $PANTHEON_DIR/profiles/mlizard
cp -R mlizard $PANTHEON_DIR/profiles/mlizard

cd $PANTHEON_DIR
git add .
git commit -am "Site update"
git push

cd ..

# Execute Pantheon install outside of the Pantheon Dir.
drush $PANTHEON_ALIAS sql-drop -y

drush $PANTHEON_ALIAS si -y mlizard --account-pass=admin

# Development variables
drush $PANTHEON_ALIAS en pantheon_apachesolr -y --strict=0

# Import SQL files.
# Migrate all the data.
#drush $PANTHEON_ALIAS mi --all --user=1 --strict=0

drush $PANTHEON_ALIAS migrate-auto-register --strict=0
drush $PANTHEON_ALIAS uli
