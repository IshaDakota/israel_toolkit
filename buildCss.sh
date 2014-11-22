#!/bin/bash

cd jekyll
grunt build

cd ..
rm -rf taglit/libraries/taglit
mkdir taglit/libraries/taglit
rsync -avz --exclude '.git' jekyll/dist/ taglit/libraries/taglit
