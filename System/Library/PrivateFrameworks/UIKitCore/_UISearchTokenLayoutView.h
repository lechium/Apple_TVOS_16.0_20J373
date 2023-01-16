//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol _UIAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface _UISearchTokenLayoutView : UIView
{
    double _verticalDelegateViewOrigin;	// 8 = 0x8
    _Bool _isLastSearchToken;	// 16 = 0x10
    UIView<_UIAtomTextViewAtomLayout> *_delegateView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001eba02
@property(nonatomic) _Bool isLastSearchToken; // @synthesize isLastSearchToken=_isLastSearchToken;
@property(retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
- (void)updateMaskLayerForVisibleRect:(struct CGRect)arg1;	// IMP=0x00000000001eb2dc
- (void)updateMaskLayerForAttachmentRect:(struct CGRect)arg1 lineFragment:(struct CGRect)arg2;	// IMP=0x00000000001eaabb
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3;	// IMP=0x00000000001ea935
- (struct CGRect)selectionBounds;	// IMP=0x00000000001ea8be
- (void)layoutSubviews;	// IMP=0x00000000001ea7c4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ea74f
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001ea732
- (_Bool)isEnabled;	// IMP=0x00000000001ea715
- (id)viewForLastBaselineLayout;	// IMP=0x00000000001ea6f8
- (struct UIEdgeInsets)atomInsets;	// IMP=0x00000000001ea61f
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000001ea60a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001ea598
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000001ea543
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ea4f6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ea4b2
- (id)init;	// IMP=0x00000000001ea46e
- (id)initWithDelegateView:(id)arg1;	// IMP=0x00000000001ea398

@end

