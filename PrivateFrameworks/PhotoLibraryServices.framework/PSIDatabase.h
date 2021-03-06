/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, PSITokenizer;

@interface PSIDatabase : NSObject {
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_groupObjectsById;
    long long _options;
    NSString *_path;
    NSDictionary *_preparedStatements;
    int _queryCounter;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PSITokenizer *_tokenizer;
}

@property(readonly) long long options;
@property(readonly) NSString * path;

+ (void)_dropDatabase:(struct sqlite3 { }*)arg1 withCompletion:(id)arg2;
+ (struct sqlite3 { }*)_openDatabaseAtPath:(id)arg1 options:(long long)arg2;
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(id)arg2;

- (unsigned long long)_inqAddUUID:(id)arg1 string:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 isInBatch:(bool)arg5;
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 insertIfNeeded:(bool)arg2;
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(bool*)arg2;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 allowError:(int)arg2 withStatementBlock:(id)arg3;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id)arg2;
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 insertIfNeeded:(bool)arg4 outCopyTokens:(id*)arg5;
- (struct __CFArray { }*)_inqNewAssetIdsForGroupId:(unsigned long long)arg1;
- (struct __CFArray { }*)_inqNewAssetUUIDsForAssetIds:(const void**)arg1 count:(long long)arg2;
- (id)_inqNewContentStringForGroupId:(unsigned long long)arg1;
- (id)_inqNewGroupArraysFromGroupIdSets:(id)arg1 forQuery:(id)arg2;
- (struct __CFSet { }*)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;
- (struct __CFSet { }*)_inqNewGroupIdsMatchingToken:(id)arg1;
- (void*)_inqNewGroupsFromDeleteOperation:(bool)arg1 matchingGroupIds:(const void**)arg2 count:(long long)arg3;
- (id)_inqNewTokens:(id)arg1 forIndexing:(bool)arg2 outCopyRanges:(id*)arg3;
- (void)_inqPerformBatch:(id)arg1;
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPrepareStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPreparedContainsStatementWithPrefix:(const char *)arg1 matchingIds:(const void**)arg2 count:(long long)arg3;
- (void)_inqRecycleGroups;
- (void)_inqRemoveUUID:(id)arg1 isInBatch:(bool)arg2;
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;
- (void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg1 tokens:(id)arg2;
- (void)_query:(id)arg1 recursiveAddToGroupResults:(id)arg2 aggregate:(id)arg3 atIndex:(unsigned long long)arg4 outOf:(unsigned long long)arg5 inGroupArrays:(id)arg6;
- (void)addAsset:(id)arg1 withCompletion:(id)arg2;
- (void)addAssets:(id)arg1 withCompletion:(id)arg2;
- (void)dealloc;
- (void)dropDatabaseWithCompletion:(id)arg1;
- (void)group:(id)arg1 fetchOwningContentString:(bool)arg2 assetUUIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completionHandler:(id)arg4;
- (id)initWithPath:(id)arg1 options:(long long)arg2;
- (id)newQueryWithSearchText:(id)arg1;
- (long long)options;
- (id)path;
- (void)query:(id)arg1 searchString:(id)arg2 resultsHandler:(id)arg3;
- (void)removeAssetWithUUID:(id)arg1 completion:(id)arg2;
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(id)arg2;

@end
