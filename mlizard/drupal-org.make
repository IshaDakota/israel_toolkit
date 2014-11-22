core = 7.x
api = 2

; Modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.3"

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.16"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.5"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.5"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.3"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2264079-entity-wrapper-access-single-entity-reference-2.patch"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2086225-entity-access-check-node-create-3.patch"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][patch][] = "https://drupal.org/files/issues/1994702-values-from-cache-20.patch"

projects[features][subdir] = "contrib"
projects[features][version] = "2.2"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "2.0"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.4"

projects[mandrill][version] = 2.0
projects[mandrill][subdir] = "contrib"

projects[mailsystem][version] = 2.34
projects[mailsystem][subdir] = "contrib"

projects[mimemail][version] = 1.0-beta3
projects[mimemail][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = 2.0-alpha2

projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = 1.2

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.4"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[purl][subdir] = "contrib"
projects[purl][version] = "1.x-dev"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[url][subdir] = "contrib"
projects[url][version] = "1.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.8"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.2"

; Themes
projects[bootstrap][subdir] = "contrib"
projects[bootstrap][version] = "3.0"

; Libraries

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.1/ckeditor_4.4.1_standard.zip"

libraries[mandrill][type] = "libraries"
libraries[mandrill][download][type] = "get"
libraries[mandrill][download][url] = "https://bitbucket.org/mailchimp/mandrill-api-php/get/1.0.52.zip"
