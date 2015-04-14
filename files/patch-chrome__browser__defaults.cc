--- chrome/browser/defaults.cc.orig.port	Tue Mar 10 23:29:07 2015
+++ chrome/browser/defaults.cc	Wed Mar 11 07:22:50 2015
@@ -41,7 +41,7 @@ const bool kSyncAutoStarts = false;
 const bool kShowOtherBrowsersInAboutMemory = true;
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 const bool kScrollEventChangesTab = true;
 #else
 const bool kScrollEventChangesTab = false;
