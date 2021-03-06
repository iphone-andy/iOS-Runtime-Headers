/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {
    SKUIGiftConfirmView *_confirmView;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
    bool_isShowingConfirmation;
}

- (void).cxx_destruct;
- (void)_buyButtonAction:(id)arg1;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_finishPurchaseWithResult:(bool)arg1 errorMessage:(id)arg2;
- (void)_purchaseGift;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(bool)arg1 animated:(bool)arg2;
- (void)_showSuccessPage;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;

@end
