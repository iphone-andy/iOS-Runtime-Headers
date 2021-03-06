/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem {
}

@property(readonly) NSString * email;
@property(readonly) NSString * phone;

+ (long long)dataType;

- (id)email;
- (bool)isValidWithError:(id*)arg1;
- (id)phone;

@end
