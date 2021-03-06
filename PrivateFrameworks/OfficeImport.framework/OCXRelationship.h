/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OCXRelationship : NSObject {
    boolmExternal;
    NSString *mIdString;
    NSString *mTarget;
    NSString *mType;
}

@property(readonly) NSString * idString;
@property(readonly) NSString * target;
@property(readonly) NSString * type;

- (void)dealloc;
- (id)idString;
- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(bool)arg4;
- (id)target;
- (id)type;
- (void)writeToStreamWriter:(id)arg1;

@end
