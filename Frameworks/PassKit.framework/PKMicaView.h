/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CALayer, NSString;

@interface PKMicaView : UIView <PKMicaResizableView> {
    CALayer *_micaLayer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) CALayer * micaLayer;
@property(readonly) Class superclass;

- (struct CGSize { double x1; double x2; })boundsSizeToMatchPointScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)micaLayer;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x1; double x2; })arg1;

@end
