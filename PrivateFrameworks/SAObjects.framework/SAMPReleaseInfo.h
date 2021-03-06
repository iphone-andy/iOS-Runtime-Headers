/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SACalendar;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SACalendar * releaseDate;
@property long long releaseYear;
@property(readonly) Class superclass;

+ (id)releaseInfo;
+ (id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)releaseDate;
- (long long)releaseYear;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseYear:(long long)arg1;

@end
