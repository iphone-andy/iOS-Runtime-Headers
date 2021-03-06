/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSBundle, NSExtension, NSString;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {
    boolisDisplayed;
    NSString *hardwareLayout;
    NSString *identifier;
    NSString *languageWithRegion;
    NSString *normalizedIdentifier;
    NSString *primaryLanguage;
    NSString *softwareLayout;
}

@property(readonly) NSBundle * containingBundle;
@property(readonly) NSString * containingBundleDisplayName;
@property(readonly) bool defaultLayoutIsASCIICapable;
@property(readonly) NSString * displayName;
@property(readonly) NSString * extendedDisplayName;
@property(readonly) NSExtension * extension;
@property(retain) NSString * hardwareLayout;
@property(retain) NSString * identifier;
@property(readonly) NSString * identifierWithLayouts;
@property(readonly) bool isDefaultRightToLeft;
@property bool isDisplayed;
@property(readonly) bool isExtensionInputMode;
@property(retain) NSString * languageWithRegion;
@property(retain) NSString * normalizedIdentifier;
@property(retain,readonly) NSArray * normalizedIdentifierLevels;
@property(retain) NSString * primaryLanguage;
@property(retain) NSString * softwareLayout;

+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)dictationInputMode;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;

- (id)containingBundle;
- (id)containingBundleDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)defaultLayoutIsASCIICapable;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedDisplayName;
- (id)extension;
- (id)hardwareLayout;
- (id)identifier;
- (id)identifierWithLayouts;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1 forceASCIICapable:(bool)arg2;
- (bool)isDisplayed;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionInputMode;
- (id)languageWithRegion;
- (id)normalizedIdentifier;
- (id)normalizedIdentifierLevels;
- (id)primaryLanguage;
- (void)setHardwareLayout:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDisplayed:(bool)arg1;
- (void)setLanguageWithRegion:(id)arg1;
- (void)setNormalizedIdentifier:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (id)softwareLayout;

@end
