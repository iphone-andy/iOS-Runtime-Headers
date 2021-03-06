/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSData, NSDate, NSString;

@interface CPLMasterChange : CPLItemChange {
    NSDate *_creationDate;
    NSString *_filename;
    unsigned long long _fullSizeJPEGSource;
    NSDate *_importDate;
    NSString *_importGroupIdentifier;
    NSString *_itemType;
    NSData *_mediaMetaData;
    NSString *_mediaMetaDataType;
    long long _originalOrientation;
    NSArray *_resources;
}

@property(copy) NSDate * creationDate;
@property(copy) NSString * filename;
@property unsigned long long fullSizeJPEGSource;
@property(copy) NSDate * importDate;
@property(copy) NSString * importGroupIdentifier;
@property(readonly) bool isImage;
@property(readonly) bool isVideo;
@property(copy) NSString * itemType;
@property(retain) NSData * mediaMetaData;
@property(copy) NSString * mediaMetaDataType;
@property long long originalOrientation;
@property(copy) NSArray * resources;

- (void).cxx_destruct;
- (void)awakeFromStorage;
- (id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)creationDate;
- (unsigned long long)dataClassType;
- (long long)dequeueOrder;
- (id)filename;
- (unsigned long long)fullSizeJPEGSource;
- (id)importDate;
- (id)importGroupIdentifier;
- (id)init;
- (bool)isImage;
- (bool)isVideo;
- (id)itemType;
- (id)mediaMetaData;
- (id)mediaMetaDataType;
- (id)name;
- (long long)originalOrientation;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)resources;
- (void)setCreationDate:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFullSizeJPEGSource:(unsigned long long)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportGroupIdentifier:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setMediaMetaDataType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalOrientation:(long long)arg1;
- (void)setResources:(id)arg1;
- (bool)supportsResources;

@end
