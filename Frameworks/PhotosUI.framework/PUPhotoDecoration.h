/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoDecoration : NSObject <NSCopying> {
    UIColor *_borderColor;
    float _borderWidth;
    UIColor *_foregroundColor;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) float borderWidth;
@property (nonatomic, copy) UIColor *foregroundColor;

- (void).cxx_destruct;
- (id)borderColor;
- (float)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)foregroundColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(int)arg1;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(int)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setForegroundColor:(id)arg1;

@end