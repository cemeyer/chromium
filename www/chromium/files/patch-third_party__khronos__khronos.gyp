--- ./third_party/khronos/khronos.gyp.orig	2014-06-30 21:03:00.000000000 +0200
+++ ./third_party/khronos/khronos.gyp	2014-07-08 20:31:15.000000000 +0200
@@ -11,6 +11,7 @@
         'include_dirs': [
           '.',
           '../../gpu',  # Contains GLES2/gl2chromium.h
+          '<(prefix_dir)/include',
         ],
       },
     },
