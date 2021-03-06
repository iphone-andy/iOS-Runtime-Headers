/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayOccurrenceTravelTimeViewMetricsDelegate>, NSString, UIColor, UIImageView, UILabel, UIView;

@interface EKDayOccurrenceTravelTimeView : UIView {
    <EKDayOccurrenceTravelTimeViewMetricsDelegate> *_delegate;
    UIColor *_elementColor;
    double _hairlineYPosition;
    UIView *_horizontalLineView;
    UIColor *_lineColor;
    NSString *_location;
    int _occurrenceBackgroundStyle;
    long long _routingMode;
    double _travelTime;
    UIImageView *_travelTimeIcon;
    UILabel *_travelTimeLabel;
    bool_selected;
}

@property <EKDayOccurrenceTravelTimeViewMetricsDelegate> * delegate;
@property(retain) UIColor * elementColor;
@property double hairlineYPosition;
@property(retain) UIColor * lineColor;
@property(copy) NSString * location;
@property int occurrenceBackgroundStyle;
@property long long routingMode;
@property bool selected;
@property double travelTime;

- (void).cxx_destruct;
- (double)_iconScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_parentPadding;
- (void)_setupStringContent;
- (id)_textFont;
- (id)_travelTimeIconForTravelModeWithColor:(id)arg1;
- (void)_updateColors;
- (id)delegate;
- (id)elementColor;
- (double)hairlineYPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReusableTravelTimeView:(id)arg1;
- (void)layoutSubviews;
- (id)lineColor;
- (id)location;
- (double)minimumNaturalHeightForPrimaryText;
- (int)occurrenceBackgroundStyle;
- (long long)routingMode;
- (bool)selected;
- (void)setDelegate:(id)arg1;
- (void)setElementColor:(id)arg1;
- (void)setHairlineYPosition:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setRoutingMode:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTravelTime:(double)arg1;
- (double)travelTime;

@end
