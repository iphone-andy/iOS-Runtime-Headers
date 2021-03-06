/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
