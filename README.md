[![Build Status](https://magnum.travis-ci.com/Gizra/taglit_fellows.svg?token=p2M1EeCrd3dY32WxWj3X&branch=installation-profile)](https://magnum.travis-ci.com/Gizra/taglit_fellows)

## Installation

```bash
# One time - copy the installation script locally.
cp default.install.sh install.sh
echo "Edit the file with you credentials"
```

Everytime you want to re-build the distribution: ``bash install.sh``

### Client application

Install libraries:
```bash
npm install
```

Install gems with bundler:
```bash
gem install bundler
bundle install
```

Run locally:
```bash
grunt serve
```

Apache solr configuration:

```bash
- copy example/solr/collection1 to example/solr/taglit
- edit example/solr/taglit/core.properties
- delete example/solr/taglit/data if it exists
- copy search_api_solr/solr-conf/4.x to example/solr/taglit/conf
```
This configuration can be changed according `search_ui` features data.

pages html design at : [taglit](http://gizra.github.io/taglit/)
