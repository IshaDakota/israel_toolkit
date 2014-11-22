#!/bin/bash

# Some variable definitions
BOLD=`tput bold`
NORMAL=`tput sgr0`
GREEN='\e[0;32m'

# Modify the MySQL settings below so they will match your own.
MYSQL_USERNAME="root"
MYSQL_PASSWORD="root"
MYSQL_HOST="localhost"
MYSQL_DB_NAME="drupal_mlizard"

# Modify the URL below to match your OpenScholar base domain URL.
BASE_DOMAIN_URL="http://mlizard.dev"

# Modify the login details below to be the desired login details for the Administrator account.
ADMIN_USERNAME="admin"
ADMIN_PASSWORD="admin"
ADMIN_EMAIL="admin@example.com"

chmod 777 www/sites/default
rm -rf www/
mkdir www

bash scripts/build

# Create the private files directory.
mkdir -p www/sites/default/files/private
chmod 755 www/sites/default/files/private

# Build the jekyll and copy all the resources that needed as a library contrib.
#cd jekyll
#bundle install
#npm install
#bower install
#grunt build

#cd ..

# Create the contrib jekyll CSS folder and copy all the related files
# that needed.
#rm -rf taglit/libraries/taglit
#mkdir taglit/libraries/taglit
#rsync -avz --exclude '.git' jekyll/dist/ taglit/libraries/taglit

cd www

drush si -y mlizard --locale=en --account-name=$ADMIN_USERNAME --account-pass=$ADMIN_PASSWORD --account-mail=$ADMIN_EMAIL --db-url=mysql://$MYSQL_USERNAME:$MYSQL_PASSWORD@$MYSQL_HOST/$MYSQL_DB_NAME --uri=$BASE_DOMAIN_URL

# Development modules
drush en devel diff views_ui field_ui migrate_ui mimemail -y

# Development variable

# These commands migrates dummy content and is used for development and testing. Comment out both lines if you wish to have a clean OpenScholar installation.

# Migrate data.
# drush en taglit_migrate -y
# drush mi --all --user=1

# This command does the login for you when the build script is done. It will open a new tab in your default browser and login to your project as the Administrator. Comment out this line if you do not want the login to happen automatically.
drush uli --uri=$BASE_DOMAIN_URL
