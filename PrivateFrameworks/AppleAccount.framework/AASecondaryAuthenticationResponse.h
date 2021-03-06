/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSData, NSString;

@interface AASecondaryAuthenticationResponse : AAResponse {
    NSData *_buddyML;
    NSString *_secondFactorToken;
}

@property(readonly) NSData * buddyML;
@property(readonly) NSString * secondFactorToken;

- (void).cxx_destruct;
- (id)buddyML;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)secondFactorToken;

@end
