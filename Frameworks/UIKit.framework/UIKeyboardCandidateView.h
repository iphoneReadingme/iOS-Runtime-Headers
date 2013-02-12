/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateGrid, UIKeyboardCandidateSortControl, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateUnsplitKeyboardToggleButton;

@interface UIKeyboardCandidateView : UIInputView {
    struct { 
        unsigned int isExtended; 
        unsigned int didMinimizeKeyboard; 
        unsigned int isSplit; 
    UIKeyboardCandidateBar *_bar;
    } _candidateBarFlags;
    UIKeyboardCandidateGrid *_extendedView;
    UIImageView *_leftBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIImageView *_rightBackground;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    UIKeyboardCandidateSortControl *_sortControl;
}

+ (id)activeCandidateList;
+ (id)activeCandidateView;
+ (float)defaultExtendedControlHeight;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)sharedInstance;

- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setCandidateBarCanExtend:(BOOL)arg1;
- (void)setCandidateBarExtended:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updatePageControlStatus;
- (void)willMoveToSuperview:(id)arg1;

@end