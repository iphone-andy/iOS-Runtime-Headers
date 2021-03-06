/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSObject<TSDContainerInfo>, NSString, TSWPRep, TSWPStorage;

@interface TSWPShapeRep : TSDShapeRep <TSDContainerRep, TSWPShapeLayoutDelegate, TSDMagicMoveMatching> {
    struct CGPoint { 
        double x; 
        double y; 
    TSWPRep *_containedRep;
    } _originalAutosizePositionOffset;
    CALayer *_overflowGlyphLayer;
    bool_editingContainedRep;
}

@property(readonly) TSWPRep * containedRep;
@property(readonly) NSObject<TSDContainerInfo> * containerInfo;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) bool isShapeInvisible;
@property(readonly) bool shouldBeginEditingOnSingleClick;
@property(readonly) Class superclass;
@property(readonly) TSWPStorage * textStorageForTexture;

+ (id)magicMoveAnimationMatchesFromMatches:(id)arg1;
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 textDeliveryType:(long long)arg4 repToOpacityTextRangeDictMap:(id)arg5;
+ (void)p_getOutgoingTextureSet:(id*)arg1 incomingTextureSet:(id*)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 incomingRep:(id)arg5 incomingChunkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 includeListLabels:(bool)arg7;
+ (bool)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(long long)arg2 incomingStorage:(id)arg3 incomingCharIndex:(long long)arg4 shouldMatch:(bool*)arg5;
+ (unsigned long long)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(long long)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5;
+ (double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2;
+ (id)p_potentialMatchesWithChunkLength:(unsigned long long)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureContext:(id)arg4 textDeliveryType:(long long)arg5;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toString:(id)arg3;
+ (id)p_textureSetFromRep:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 includeListLabel:(bool)arg3 desiredContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

- (id).cxx_construct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (bool)canBeUsedForImageMask;
- (bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dynamicResizeDidBegin;
- (unsigned long long)enabledKnobMask;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)hyperlinkRegions;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isEditingChildRep;
- (bool)isInvisible;
- (bool)isSelectable;
- (bool)isShapeInvisible;
- (bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)newTextureRenderableForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includeListLabel:(bool)arg2 isMagicMove:(bool)arg3 desiredContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 includeGroupedShadow:(bool)arg5 groupedShadowOnly:(bool)arg6;
- (id)overlayLayers;
- (double)pParagraphAlignmentOffset;
- (void)p_drawRubyInContext:(struct CGContext { }*)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)p_getBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 applyReflection:(bool*)arg4 applyShadow:(bool*)arg5 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 includeListLabel:(bool)arg7 isMagicMove:(bool)arg8;
- (bool)p_hasContentForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 labelOnly:(bool)arg2;
- (id)p_overflowKnobImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForRubyFields:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (bool)p_shouldShowTextOverflowGlyph;
- (double)p_textureSetOpacity;
- (void)processChangedProperty:(int)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)selectChildRep:(id)arg1;
- (bool)selectionIsAppropriateToShowInvisiblePathHighlight;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (bool)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (bool)shouldBeginEditingOnSingleClick;
- (bool)shouldHitTestWithFill;
- (bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldShowKnobs;
- (bool)shouldShowSelectionHighlight;
- (id)stageChunks;
- (long long)stageIndexForStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textStorageForTexture;
- (id)textureForContext:(id)arg1;
- (void)updateChildrenFromLayout;
- (bool)wantsToHandleTapsOnContainingGroup;
- (bool)wantsToHandleTapsWhenLocked;
- (void)willBeRemoved;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
