//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView
{
    UIView *_shadowView;	// 176 = 0xb0
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;	// 184 = 0xb8
    _Bool _usesInnerShadow;	// 188 = 0xbc
    _Bool _usesRoundedCorners;	// 189 = 0xbd
    id <UILayoutContainerViewDelegate> _delegate;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000003e4cd7
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) __weak id <UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000003e4c09
- (void)dealloc;	// IMP=0x00000000003e4bcb
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000003e4b5b
- (void)addSubview:(id)arg1;	// IMP=0x00000000003e4b05
- (void)_tearDownShadowViews;	// IMP=0x00000000003e4acd
- (void)_installShadowViews;	// IMP=0x00000000003e452e
- (void)_updateShadowViews;	// IMP=0x00000000003e44f6
- (void)didMoveToWindow;	// IMP=0x00000000003e4337
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000003e42c2
- (void)layoutSubviews;	// IMP=0x00000000003e41bd
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000003e40eb
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000003e400e
- (void)_setFlagsFromDelegate:(id)arg1;	// IMP=0x00000000003e3f56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e3e55
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e3da4

@end

