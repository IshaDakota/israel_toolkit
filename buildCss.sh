#!/bin/bash

cd jekyll
grunt build

cd ..
rm -rf mlizard/libraries/mlizard
mkdir mlizard/libraries/mlizard
rsync -avz --exclude '.git' jekyll/dist/ mlizard/libraries/mlizard
