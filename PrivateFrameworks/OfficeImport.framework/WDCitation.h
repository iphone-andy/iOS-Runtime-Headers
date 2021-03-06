/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, WDDocument;

@interface WDCitation : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
    NSString *mNumber;
    NSString *mPages;
    NSString *mPeriodicalTitle;
    NSString *mPubDate;
    NSString *mSection;
    NSString *mSourceType;
    NSMutableArray *mTitles;
    NSMutableArray *mUrls;
    NSString *mVolume;
    NSString *mYear;
}

@property(retain) NSMutableArray * authors;
@property(retain) NSString * number;
@property(retain) NSString * pages;
@property(retain) NSString * periodicalTitle;
@property(retain) NSString * pubDate;
@property(retain) NSString * section;
@property(retain) NSString * sourceType;
@property(retain) NSMutableArray * titles;
@property(retain) NSMutableArray * urls;
@property(retain) NSString * volume;
@property(retain) NSString * year;

+ (id)endNoteStringForRefType:(int)arg1;
+ (void)initialize;
+ (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)nodeAtPath:(id)arg1 docPtr:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
+ (int)refTypeForWordString:(id)arg1;
+ (id)stringValueForNodeAtPath:(id)arg1 docPtr:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2 trimStyle:(bool)arg3;
+ (id)stringValuesForNodesAtPath:(id)arg1 docPtr:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2 trimStyle:(bool)arg3;
+ (id)subStringOf:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 forPath:(id)arg2;
+ (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)trimStyle:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)wordStringForRefType:(int)arg1;

- (id)authors;
- (void)dealloc;
- (id)description;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)number;
- (id)pages;
- (id)periodicalTitle;
- (id)pubDate;
- (id)section;
- (void)setAuthors:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setPages:(id)arg1;
- (void)setPeriodicalTitle:(id)arg1;
- (void)setPubDate:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSourceType:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setYear:(id)arg1;
- (id)sourceType;
- (id)titles;
- (id)urls;
- (id)volume;
- (id)year;

@end
