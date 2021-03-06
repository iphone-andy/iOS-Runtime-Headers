/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray *_entries;
    bool_flushEverything;
}

@property bool flushEverything;

- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(bool)arg4;
- (void)dealloc;
- (bool)flushEverything;
- (id)init;
- (void)setFlushEverything:(bool)arg1;
- (void)tileset:(unsigned int*)arg1 edition:(unsigned int*)arg2 provider:(unsigned int*)arg3 invalidateOnly:(bool*)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;

@end
