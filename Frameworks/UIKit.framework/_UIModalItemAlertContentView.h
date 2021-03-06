/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView, UITableView, UIView, _UIModalItemTextFiledBGView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView {
    UIView *_2ButtonsSeparators;
    UIScrollView *_labelsScrollView;
    UITableView *_otherTableView;
    UIView *_tableViewTopSeparator;
    _UIModalItemTextFiledBGView *_textFieldBGView;
    bool_alertViewIsSetup;
    bool_itemNeedsTwoTableViews;
    bool_itemWantsVerticalButtons;
}

- (void)_prepareViewIfNeeded;
- (void)_reloadButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (void)setEnableFirstOtherButton:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
