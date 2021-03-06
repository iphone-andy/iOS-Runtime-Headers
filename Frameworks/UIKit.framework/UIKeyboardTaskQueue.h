/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    NSConditionLock *_lock;
    id _mainThreadContinuation;
    NSMutableArray *_tasks;
    bool_executingOnMainThread;
}

@property(retain) UIKeyboardTaskExecutionContext * executionContext;

- (void)addDeferredTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)continueExecutionOnMainThread;
- (void)dealloc;
- (id)executionContext;
- (void)finishExecution;
- (id)init;
- (bool)isMainThreadExecutingTask;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)performTask:(id)arg1;
- (void)performTaskOnMainThread:(id)arg1 waitUntilDone:(bool)arg2;
- (void)promoteDeferredTaskIfIdle;
- (id)scheduleTask:(id)arg1 timeInterval:(double)arg2 repeats:(bool)arg3;
- (void)setExecutionContext:(id)arg1;
- (bool)tryLockWhenReadyForMainThread;
- (void)unlock;
- (void)waitUntilAllTasksAreFinished;

@end
