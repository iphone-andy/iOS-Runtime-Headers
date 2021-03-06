/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand {
}

@property(copy) NSString * language;
@property(copy) NSArray * utterances;

+ (id)setSuggestedUtterances;
+ (id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setLanguage:(id)arg1;
- (void)setUtterances:(id)arg1;
- (id)utterances;

@end
