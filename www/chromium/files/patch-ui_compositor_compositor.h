--- ui/compositor/compositor.h.orig	2020-09-08 19:14:28 UTC
+++ ui/compositor/compositor.h
@@ -370,7 +370,7 @@ class COMPOSITOR_EXPORT Compositor : public cc::LayerT
   void StopThroughtputTracker(TrackerId tracker_id) override;
   void CancelThroughtputTracker(TrackerId tracker_id) override;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   void OnCompleteSwapWithNewSize(const gfx::Size& size);
 #endif
 
