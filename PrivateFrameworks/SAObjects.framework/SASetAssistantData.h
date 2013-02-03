/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * abSources;
@property(copy) NSString * aceId;
@property(copy) NSString * anchor;
@property BOOL censorSpeech;
@property(retain) NSNumber * debugFlags;
@property(copy) NSString * deviceVersion;
@property(copy) NSString * firstName;
@property BOOL handsFree;
@property(copy) NSString * language;
@property(copy) NSString * lastName;
@property(copy) NSArray * meCards;
@property(copy) NSString * osVersion;
@property(copy) NSArray * parentalRestrictions;
@property(copy) NSString * refId;
@property(copy) NSString * region;
@property(copy) NSString * timeZoneId;
@property(retain) NSNumber * twentyFourHourTimeDisplay;

+ (id)setAssistantData;
+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)abSources;
- (id)anchor;
- (BOOL)censorSpeech;
- (id)debugFlags;
- (id)deviceVersion;
- (id)encodedClassName;
- (id)firstName;
- (id)groupIdentifier;
- (BOOL)handsFree;
- (id)language;
- (id)lastName;
- (id)meCards;
- (id)osVersion;
- (id)parentalRestrictions;
- (id)region;
- (void)setAbSources:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setCensorSpeech:(BOOL)arg1;
- (void)setDebugFlags:(id)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHandsFree:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMeCards:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setParentalRestrictions:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setTwentyFourHourTimeDisplay:(id)arg1;
- (id)timeZoneId;
- (id)twentyFourHourTimeDisplay;

@end