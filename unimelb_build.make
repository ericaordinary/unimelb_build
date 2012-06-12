core = 7.x
api = 2

; Includes
includes[custom_formatters] = 'http://dl.dropbox.com/u/1804559/makefiles/custom_formatters-7.x.make'

; Modules
projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "2.4"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"

projects[ctools][version] = "1.0"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta2"
projects[context][subdir] = "contrib"

projects[devel][version] = "1.2"
projects[devel][subdir] = "contrib"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-rc3"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.0-rc3"

projects[features][version] = "1.0-rc1"
projects[features][subdir] = "contrib"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"

projects[ds][version] = "1.5"
projects[ds][subdir] = "contrib"

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

projects[strongarm][version] = "2.0-rc1"
projects[strongarm][subdir] = "contrib"

projects[token][subdir] = "contrib"
projects[token][version] = "1.1"

projects[views][version] = "3.3"
projects[views][subdir] = "contrib"

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.6"

; Download a specific Git commit as Features exportability has been committed
; but no stable build has been released.
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "3e7568e8b8ed077caadcac4dfa147fb394b0b041"
projects[wysiwyg][subdir] = "contrib"

; Themes
; --------
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"

projects[rubik][version] = "4.0-beta8"
projects[rubik][subdir] = "contrib"

projects[tao][version] = "3.0-beta4"
projects[tao][subdir] = "contrib"

projects[omega_d7mu][type] = "theme"
projects[omega_d7mu][subdir] = "moat"
projects[omega_d7mu][download][type] = "git"
projects[omega_d7mu][download][url] = "https://github.com/moatmedia/omega_d7mu.git"

  
; Libraries
; ---------
libraries[tinymce][type] = "libraries"
libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://www.tinymce.com/track.php?url=http%3A%2F%2Fgithub.com%2Fdownloads%2Ftinymce%2Ftinymce%2Ftinymce_3.5.zip"

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"

libraries[profiler][type] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"
