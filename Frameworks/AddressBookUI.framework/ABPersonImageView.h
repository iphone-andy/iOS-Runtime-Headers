/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonImageDataDelegate>, <ABStyleProvider>, ABClippingImageView, ABUIPerson, UIImage, UIImageView;

@interface ABPersonImageView : ABPasteboardControl {
    ABUIPerson *_displayedPerson;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    UIImageView *_personImageView;
    <ABStyleProvider> *_styleProvider;
    bool_allowsEditing;
    bool_isEditing;
    bool_multiplePhotoBackdropEnabled;
    bool_needsReflow;
    bool_needsReload;
    bool_showLabel;
}

@property bool allowsEditing;
@property(readonly) UIImage * attributionImage;
@property(readonly) UIImage * backgroundImage;
@property(retain) ABUIPerson * displayedPerson;
@property <ABPersonImageDataDelegate> * imageDataDelegate;
@property(readonly) UIImage * maskImage;
@property bool multiplePhotoBackdropEnabled;
@property(readonly) UIImage * overlayImage;
@property(retain) <ABStyleProvider> * styleProvider;

+ (id)newImageWithName:(id)arg1;

- (void)_drawEditLabelInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(bool)arg1;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (bool)abShouldShowMenu;
- (bool)allowsEditing;
- (id)attributionImage;
- (id)backgroundImage;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)copyDefaultImageForPerson:(id)arg1;
- (void)dealloc;
- (id)displayedPerson;
- (id)editingImageView;
- (id)emptyImageView;
- (id)framedPhoto;
- (id)imageDataDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)layoutSubviews;
- (id)maskImage;
- (bool)multiplePhotoBackdropEnabled;
- (id)overlayImage;
- (void)paste:(id)arg1;
- (id)pasteboardMaskImageView;
- (id)personImageView;
- (void)reflow;
- (void)reflowIfNeeded;
- (void)reload;
- (void)reloadIfNeeded;
- (void)setAllowsEditing:(bool)arg1;
- (void)setDisplayedPerson:(id)arg1;
- (void)setImageDataDelegate:(id)arg1;
- (void)setIsEditing:(bool)arg1 animate:(bool)arg2;
- (void)setMultiplePhotoBackdropEnabled:(bool)arg1;
- (void)setNeedsReflow;
- (void)setNeedsReload;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
