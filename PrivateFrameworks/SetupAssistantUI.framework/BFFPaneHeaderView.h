/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFPaneHeaderView : UIView {
    UIView * _bottomLine;
    UILabel * _detailTextLabel;
    float  _flexibleHeight;
    UIImage * _icon;
    UIImageView * _iconView;
    UIButton * _linkButton;
    id /* block */  _linkHandler;
    UILabel * _subLabel;
    UILabel * _textLabel;
    BOOL  _textLabelAlignedByLastBaseline;
}

@property (nonatomic, retain) UIColor *bottomLineColor;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) float flexibleHeight;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=isTextLabelAlignedByLastBaseline, nonatomic) BOOL textLabelAlignedByLastBaseline;

- (void).cxx_destruct;
- (float)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (void)_linkButtonPressed;
- (id)bottomLineColor;
- (id)detailTextLabel;
- (float)flexibleHeight;
- (float)heightForWidth:(float)arg1 inView:(id)arg2;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTextLabelAlignedByLastBaseline;
- (void)layoutSubviews;
- (void)setBottomLineColor:(id)arg1;
- (void)setFlexibleHeight:(float)arg1;
- (void)setIcon:(id)arg1;
- (void)setLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setTextLabelAlignedByLastBaseline:(BOOL)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subLabel;
- (id)textLabel;

@end
