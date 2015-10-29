/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDescriptionSection : SPSection <PRSDescriptionSection, SearchUIDescriptionCardSection>

@property (nonatomic, retain) NSURL *attribution_url;
@property (nonatomic) BOOL card_padding_bottom;
@property (nonatomic) BOOL card_padding_top;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptionExpandText;
@property (nonatomic, readonly) unsigned int descriptionMaxLines;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic) BOOL description_expand;
@property (nonatomic, retain) NSString *description_expand_text;
@property (nonatomic) int description_maxlines;
@property (nonatomic) int description_size;
@property (nonatomic) int description_weight;
@property (nonatomic, readonly) BOOL hasBottomPadding;
@property (nonatomic, readonly) BOOL hasTopPadding;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hideDivider;
@property (nonatomic) BOOL hide_divider;
@property (nonatomic, retain) PRSImage *image;
@property (nonatomic, retain) NSString *image_align;
@property (nonatomic, readonly) NSArray *punchoutOptions;
@property (nonatomic, readonly) NSString *punchoutPickerDismissLabel;
@property (nonatomic, readonly) NSString *punchoutPickerLabel;
@property (nonatomic, retain) NSString *resultDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) BOOL title_nowrap;
@property (nonatomic) int title_weight;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, retain) NSURL *url;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

- (id)descriptionExpandText;
- (unsigned int)descriptionMaxLines;
- (id)descriptionText;

@end