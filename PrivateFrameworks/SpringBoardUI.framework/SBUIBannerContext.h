/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIBannerSource>, <SBUIBannerTarget>, NSString, SBUIBannerAction, SBUIBannerItem;

@interface SBUIBannerContext : NSObject {
    SBUIBannerItem *_item;
    NSString *_presentingActionIdentifier;
    <SBUIBannerSource> *_source;
    <SBUIBannerTarget> *_target;
    bool_isValid;
    bool_requestsModalPresentation;
}

@property(readonly) SBUIBannerAction * interactiveAction;
@property(retain,readonly) SBUIBannerItem * item;
@property(copy) NSString * presentingActionIdentifier;
@property bool requestsModalPresentation;
@property(retain,readonly) <SBUIBannerSource> * source;
@property(retain,readonly) <SBUIBannerTarget> * target;
@property(getter=isValid,readonly) bool valid;

- (void)dealloc;
- (id)description;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(bool)arg5;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)interactiveAction;
- (void)invalidate;
- (bool)isValid;
- (id)item;
- (id)presentingActionIdentifier;
- (bool)requestsModalPresentation;
- (void)setPresentingActionIdentifier:(id)arg1;
- (void)setRequestsModalPresentation:(bool)arg1;
- (id)source;
- (id)target;

@end
