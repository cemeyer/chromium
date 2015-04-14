--- chrome/browser/ui/browser_command_controller.cc.orig	2015-01-21 20:28:15 UTC
+++ chrome/browser/ui/browser_command_controller.cc
@@ -68,7 +68,7 @@
 #include "chrome/browser/ui/ash/multi_user/multi_user_window_manager.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 #include "ui/events/linux/text_edit_key_bindings_delegate_auralinux.h"
 #endif
 
@@ -280,7 +280,7 @@
   if (window()->IsFullscreen() && command_id == IDC_FULLSCREEN)
     return true;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // If this key was registered by the user as a content editing hotkey, then
   // it is not reserved.
   ui::TextEditKeyBindingsDelegateAuraLinux* delegate =
@@ -473,7 +473,7 @@
       break;
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
     case IDC_USE_SYSTEM_TITLE_BAR: {
       PrefService* prefs = browser_->profile()->GetPrefs();
       prefs->SetBoolean(prefs::kUseCustomChromeFrame,
@@ -897,7 +897,7 @@
   command_updater_.UpdateCommandEnabled(IDC_VISIT_DESKTOP_OF_LRU_USER_2, true);
   command_updater_.UpdateCommandEnabled(IDC_VISIT_DESKTOP_OF_LRU_USER_3, true);
 #endif
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   command_updater_.UpdateCommandEnabled(IDC_USE_SYSTEM_TITLE_BAR, true);
 #endif
 
