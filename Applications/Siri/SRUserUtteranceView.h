//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SRTapToEditView, SUICStreamingTextView;

@interface SRUserUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SUICStreamingTextView *_clonedStreamingTextView;	// 40 = 0x28
    SUICStreamingTextView *_streamingTextView;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 56 = 0x38
    SRTapToEditView *_tapToEditView;	// 64 = 0x40
    _Bool _chevronHasBeenShown;	// 72 = 0x48
    _Bool _editable;	// 73 = 0x49
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000000050a6c
- (void).cxx_destruct;	// IMP=0x0020000000051bd9
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (double)_scaledSiriTapToEditViewLeading;	// IMP=0x0010000000051b5a
- (double)_indentWidth;	// IMP=0x0010000000051b30
- (double)_streamingTextMaxYToTapToEditOriginDistance;	// IMP=0x0010000000051a2e
- (void)layoutSubviews;	// IMP=0x0010000000051720
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000005162b
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000050ad1
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0010000000050a7a
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x0010000000050a1e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000050859

@end
