/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDragInsertionContext : TSDInsertionContext {
    struct CGPoint { 
        double x; 
        double y; 
    boolmFromDragToInsertController;
    boolmInsertFloating;
    boolmPreferredCenterRequired;
    boolmShouldEndEditing;
    } mPreferredCenter;
}

- (bool)fromDragToInsertController;
- (bool)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint { double x1; double x2; })arg1 required:(bool)arg2 shouldEndEditing:(bool)arg3 fromDragToInsertController:(bool)arg4 insertFloating:(bool)arg5;
- (bool)insertFloating;
- (bool)insertFromDrag;
- (bool)isInteractive;
- (bool)isPreferredCenterRequired;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (bool)shouldEndEditing;

@end
