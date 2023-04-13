#import <RNReanimated/REAAnimationsManager.h>
#import <RNReanimated/REASharedTransitionManagerPublic.h>
#import <RNReanimated/REASnapshot.h>

@interface REASharedTransitionManager : REASharedTransitionManagerPublic

- (void)notifyAboutNewView:(UIView *)view;
- (void)notifyAboutViewLayout:(UIView *)view withViewFrame:(CGRect)frame;
- (void)viewsDidLayout;
- (void)finishSharedAnimation:(UIView *)view;
- (void)setFindPrecedingViewTagForTransitionBlock:
    (REAFindPrecedingViewTagForTransitionBlock)findPrecedingViewTagForTransition;
- (void)setCancelAnimationBlock:(REACancelAnimationBlock)cancelAnimationBlock;
- (instancetype)initWithAnimationsManager:(REAAnimationsManager *)animationManager;
- (UIView *)getTransitioningView:(NSNumber *)tag;

@end
