/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageContentProgressLayer : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    UILabel *_loadingText;
    UIActivityIndicatorView *_progressIndicator;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;

- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end