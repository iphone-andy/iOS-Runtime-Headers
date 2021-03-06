/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {
    id _animations;
    double _duration;
    bool_earlyLayoutIsNeeded;
    bool_skipCallbacks;
    bool_updateStatusBarIfNecessary;
}

@property(copy) id animations;
@property double duration;
@property bool earlyLayoutIsNeeded;
@property bool skipCallbacks;
@property bool updateStatusBarIfNecessary;

- (void)animateTransition:(id)arg1;
- (id)animations;
- (void)dealloc;
- (double)duration;
- (bool)earlyLayoutIsNeeded;
- (void)setAnimations:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEarlyLayoutIsNeeded:(bool)arg1;
- (void)setSkipCallbacks:(bool)arg1;
- (void)setUpdateStatusBarIfNecessary:(bool)arg1;
- (bool)skipCallbacks;
- (double)transitionDuration:(id)arg1;
- (bool)updateStatusBarIfNecessary;

@end
