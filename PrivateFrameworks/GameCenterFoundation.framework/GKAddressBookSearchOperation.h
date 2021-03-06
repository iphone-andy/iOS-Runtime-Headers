/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {
    id _handler;
    NSMutableArray *_matches;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id handler;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray * matches;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)handler;
- (id)init;
- (id)matches;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(bool)arg3;
- (void)setHandler:(id)arg1;

@end
