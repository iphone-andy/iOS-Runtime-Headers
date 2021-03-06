/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class IKViewElement;

@interface MPUExtrasViewElementViewController : MPUExtrasElementViewController {
    IKViewElement *_viewElement;
    bool_embedded;
}

@property bool embedded;
@property(readonly) bool matchParentHeight;
@property(readonly) long long preferredLayoutAttribute;
@property(readonly) id preferredLayoutGuide;
@property(retain) IKViewElement * viewElement;

- (void).cxx_destruct;
- (bool)embedded;
- (id)initWithViewElement:(id)arg1;
- (bool)matchParentHeight;
- (long long)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setEmbedded:(bool)arg1;
- (void)setViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)viewElement;

@end
