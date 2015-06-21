core = 7.x
api = 2

; Modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.16"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "2.8"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.5"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.3"

projects[email_registration][subdir] = "contrib"
projects[email_registration][version] = "1.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.6"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2086225-entity-access-check-18.patch"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][patch][] = "https://drupal.org/files/issues/1994702-values-from-cache-20.patch"

projects[features][subdir] = "contrib"
projects[features][version] = "2.5"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-beta1"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "2.1"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.6"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[mandrill][subdir] = "contrib"
projects[mandrill][version] = 2.0

projects[mailsystem][subdir] = "contrib"
projects[mailsystem][version] = 2.34

projects[media][subdir] = "contrib"
projects[media][version] = 2.0-alpha4

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = 3.0

projects[mimemail][subdir] = "contrib"
projects[mimemail][version] = 1.0-beta3

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = 2.0

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.5"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[scroll_to_destination_anchors][subdir] = "contrib"
projects[scroll_to_destination_anchors][version] = "1.3"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[views][subdir] = "contrib"
projects[views][version] = "3.11"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.2"

projects[views_bootstrap][subdir] = "contrib"
projects[views_bootstrap][version] = "3.1"

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

libraries[colorbox][type] = "libraries"
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
