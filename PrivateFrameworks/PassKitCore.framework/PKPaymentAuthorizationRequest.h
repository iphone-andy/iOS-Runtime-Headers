/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData, NSString, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject <NSSecureCoding> {
    NSData *_credential;
    NSData *_nonceData;
    NSString *_passUniqueIdentifier;
    PKPaymentRequest *_paymentRequest;
    bool_didSetNonce;
}

@property(retain) NSData * credential;
@property(retain) NSData * nonceData;
@property(retain) NSString * passUniqueIdentifier;
@property(retain) PKPaymentRequest * paymentRequest;

+ (bool)supportsSecureCoding;

- (id)credential;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nonceData;
- (id)passUniqueIdentifier;
- (id)paymentRequest;
- (void)setCredential:(id)arg1;
- (void)setNonceData:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (id)transactionRequestWithPaymentApplication:(id)arg1;

@end
