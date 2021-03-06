/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {
    NSDictionary *_appIDsByContainerID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSDictionary *_cloudDocsContainersByAppID;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)cloudDocsAppsMonitor;

- (void).cxx_destruct;
- (void)_refetchApps;
- (void)_start;
- (void)addObserver:(id)arg1;
- (id)allApplicationIdentifiers;
- (void)appListChanged;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)forceRefetchAppList;
- (id)init;
- (bool)isApplicationInstalledForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
