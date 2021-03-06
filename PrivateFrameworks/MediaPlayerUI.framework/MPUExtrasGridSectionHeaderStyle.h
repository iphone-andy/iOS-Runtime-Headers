/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSDictionary, NSString, UIColor;

@interface MPUExtrasGridSectionHeaderStyle : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    NSDictionary *_defaultFontAttributes;
    } _insets;
    double _textBaselineDescender;
    double _textBaselineHeight;
    UIColor *_textColor;
    NSString *_textStyle;
}

@property(retain) NSDictionary * defaultFontAttributes;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property double textBaselineDescender;
@property double textBaselineHeight;
@property(retain) UIColor * textColor;
@property(retain) NSString * textStyle;

- (void).cxx_destruct;
- (id)defaultFontAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setDefaultFontAttributes:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextBaselineDescender:(double)arg1;
- (void)setTextBaselineHeight:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (double)textBaselineDescender;
- (double)textBaselineHeight;
- (id)textColor;
- (id)textStyle;

@end
