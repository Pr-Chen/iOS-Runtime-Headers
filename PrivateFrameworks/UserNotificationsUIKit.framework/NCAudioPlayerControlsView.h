/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioPlayerControlsView : UIView {
    UIView * _contentView;
    BOOL  _contentViewLayoutConstraintsLoaded;
    BOOL  _contentViewLoaded;
    <NCAudioPlayerControlsDelegate> * _delegate;
    BOOL  _enabled;
    UIButton * _pauseButton;
    UIButton * _playButton;
    int  _state;
    NCAudioPlayerTimelineSlider * _timelineSlider;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) BOOL contentViewLayoutConstraintsLoaded;
@property (nonatomic) BOOL contentViewLoaded;
@property (nonatomic) <NCAudioPlayerControlsDelegate> *delegate;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, retain) UIButton *pauseButton;
@property (nonatomic, retain) UIButton *playButton;
@property (nonatomic) int state;
@property (nonatomic, retain) NCAudioPlayerTimelineSlider *timelineSlider;

- (void).cxx_destruct;
- (id)contentView;
- (BOOL)contentViewLayoutConstraintsLoaded;
- (BOOL)contentViewLoaded;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (void)loadContentView;
- (void)loadContentViewLayoutConstraints;
- (id)pauseButton;
- (void)pauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (id)playButton;
- (void)playButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setContentViewLayoutConstraintsLoaded:(BOOL)arg1;
- (void)setContentViewLoaded:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (void)setTimelineSlider:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)state;
- (void)stopButtonTapped:(id)arg1 withEvent:(id)arg2;
- (id)timelineSlider;
- (void)transitionToState:(int)arg1 animated:(BOOL)arg2;

@end