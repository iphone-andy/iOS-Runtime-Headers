/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFWirelessSettingsControllerDelegate>, NSObject<OS_dispatch_semaphore>;

@interface SFWirelessSettingsController : NSObject {
    id _delegate;
    NSObject<OS_dispatch_semaphore> *_firstCallBackSemaphore;
    struct __SFOperation { } *_information;
    bool_bluetoothEnabled;
    bool_deviceSupportsWAPI;
    bool_firstCallbackCompleted;
    bool_wifiEnabled;
}

@property(getter=isBluetoothEnabled) bool bluetoothEnabled;
@property <SFWirelessSettingsControllerDelegate> * delegate;
@property(readonly) bool deviceSupportsWAPI;
@property(getter=isWifiEnabled) bool wifiEnabled;

- (void)dealloc;
- (id)delegate;
- (bool)deviceSupportsWAPI;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (bool)isBluetoothEnabled;
- (bool)isWifiEnabled;
- (void)repairAppleID;
- (void)setBluetoothEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWifiEnabled:(bool)arg1;

@end
