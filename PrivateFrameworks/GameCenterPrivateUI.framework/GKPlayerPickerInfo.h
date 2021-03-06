/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKGameMatch, GKPlayer, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject {
    NSAttributedString *_achievementString;
    GKGameMatch *_gameMatch;
    GKPlayer *_player;
    NSAttributedString *_rankString;
    unsigned long long _selectionStatus;
    NSDate *_sortDate;
    bool_canSelectPlayer;
    bool_hasAchievement;
    bool_hasRank;
    bool_nearby;
}

@property(retain) NSAttributedString * achievementString;
@property(readonly) bool canSelectPlayer;
@property(retain) GKGameMatch * gameMatch;
@property bool hasAchievement;
@property bool hasRank;
@property bool nearby;
@property(readonly) bool playedGame;
@property(retain) GKPlayer * player;
@property(retain) NSAttributedString * rankString;
@property(readonly) unsigned long long selectionStatus;
@property(retain) NSDate * sortDate;

- (void)_setSelectionStatus:(unsigned long long)arg1;
- (id)achievementString;
- (bool)canSelectPlayer;
- (void)dealloc;
- (id)description;
- (id)gameMatch;
- (bool)hasAchievement;
- (bool)hasRank;
- (bool)nearby;
- (bool)playedGame;
- (id)player;
- (void)prepareForLoad;
- (id)rankString;
- (unsigned long long)selectionStatus;
- (void)setAchievementString:(id)arg1;
- (void)setGameMatch:(id)arg1;
- (void)setHasAchievement:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setNearby:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRankString:(id)arg1;
- (void)setSortDate:(id)arg1;
- (id)sortDate;

@end
