--- chrome/browser/ui/ash/system_tray_delegate_common.cc.orig.port	Tue Mar 10 23:41:40 2015
+++ chrome/browser/ui/ash/system_tray_delegate_common.cc	Wed Mar 11 07:22:50 2015
@@ -118,7 +118,7 @@ void SystemTrayDelegateCommon::ShowDisplaySettings() {
 }
 
 void SystemTrayDelegateCommon::ShowChromeSlow() {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   chrome::ScopedTabbedBrowserDisplayer displayer(
       ProfileManager::GetPrimaryUserProfile(), chrome::HOST_DESKTOP_TYPE_ASH);
   chrome::ShowSlow(displayer.browser());
