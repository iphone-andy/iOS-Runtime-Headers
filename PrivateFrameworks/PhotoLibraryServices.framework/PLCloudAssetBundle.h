/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString;

@interface PLCloudAssetBundle : NSObject {
    unsigned int _combinedAvailableResourcesSize;
    NSString *_masterIdentifier;
    NSArray *_resources;
}

@property(readonly) unsigned int combinedAvailableResourcesSize;
@property(retain,readonly) NSString * masterIdentifier;
@property(retain,readonly) NSArray * resources;

- (unsigned int)combinedAvailableResourcesSize;
- (id)description;
- (id)initWithAsset:(id)arg1 verifyAvailability:(BOOL)arg2;
- (id)masterIdentifier;
- (id)resources;

@end