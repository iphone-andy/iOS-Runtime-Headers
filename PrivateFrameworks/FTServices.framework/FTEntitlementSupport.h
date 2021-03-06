/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property(readonly) bool faceTimeNonWiFiEntitled;
@property(retain,readonly) NSDictionary * registrationState;

+ (id)sharedInstance;

- (void)_cleanupMachInfo;
- (bool)_disconnectCTServerConnection;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (void)_handleEntitlementNotification:(struct __CFDictionary { }*)arg1;
- (id)_rawEntitlementValue;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (bool)_registerForCTEntitlementNotifications;
- (void)_registrationStateChanged;
- (bool)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (bool)faceTimeNonWiFiEntitled;
- (id)init;
- (id)registrationState;

@end
