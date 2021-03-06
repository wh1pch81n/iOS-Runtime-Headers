/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageLoader : NSObject {
    NSMutableSet * _cancelledTasks;
    int  _currentLoadIndex;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)QLImageCopyScaledImage:(id)arg1 toFitInSize:(float)arg2;
- (BOOL)_isLoadCancelled:(int)arg1;
- (void)cancelLoad:(int)arg1;
- (id)init;
- (int)loadImageForItem:(id)arg1 imageHint:(id)arg2 dispatchQueue:(id)arg3 replyHandler:(id /* block */)arg4;

@end
