--- base/base.gypi.orig	2014-10-10 09:15:29 UTC
+++ base/base.gypi
@@ -972,11 +972,16 @@
               'process/memory_stubs.cc',
             ],
             'sources/': [
+              ['exclude', '^debug/proc_maps_linux\\.cc$'],
               ['exclude', '^files/file_path_watcher_linux\\.cc$'],
-              ['exclude', '^files/file_path_watcher_stub\\.cc$'],
               ['exclude', '^files/file_util_linux\\.cc$'],
+              ['exclude', '^process/memory_linux\\.cc$'],
               ['exclude', '^process/process_linux\\.cc$'],
               ['exclude', '^sys_info_linux\\.cc$'],
+              ['exclude', '^process/process_iterator_linux\\.cc$'],
+              ['exclude', '^process/process_metrics_linux\\.cc$'],
+              ['exclude', '^files/file_path_watcher_fsevents\\.cc$'],
+              ['exclude', '^files/file_path_watcher_fsevents\\.h$'],
             ],
           }],
           # Remove all unnecessary files for build_nexe.py to avoid exceeding
