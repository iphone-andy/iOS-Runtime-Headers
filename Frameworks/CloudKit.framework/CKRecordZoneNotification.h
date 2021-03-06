/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {
    CKRecordZoneID *_recordZoneID;
}

@property(copy) CKRecordZoneID * recordZoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (id)recordZoneID;
- (void)setRecordZoneID:(id)arg1;

@end
