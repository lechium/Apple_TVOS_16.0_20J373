//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISnapshotView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject
{
    UIView *_headerView;	// 8 = 0x8
    UIView *_footerView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIView *_snapshotTargetView;	// 32 = 0x20
    UIView *_rotatingSnapshotView;	// 40 = 0x28
    UIView *_footerStartSnapshotView;	// 48 = 0x30
    UIView *_footerEndSnapshotView;	// 56 = 0x38
    _Bool _headerWasHidden;	// 64 = 0x40
    _Bool _footerWasHidden;	// 65 = 0x41
    _Bool _contentWasHidden;	// 66 = 0x42
    _Bool _snapshotTargetWasHidden;	// 67 = 0x43
    _Bool _orderKeyboardInAfterRotating;	// 68 = 0x44
    long long _fromOrientation;	// 72 = 0x48
    long long _toOrientation;	// 80 = 0x50
    double _duration;	// 88 = 0x58
    UISnapshotView *_headerSnapshotViewStart;	// 96 = 0x60
    UISnapshotView *_footerSnapshotViewStart;	// 104 = 0x68
    UISnapshotView *_contentSnapshotViewStart;	// 112 = 0x70
    id _rotatingClient;	// 120 = 0x78
    CDStruct_8bdd0ba6 _rotationSettings;	// 128 = 0x80
    double contentBottomInset;	// 152 = 0x98
    UIWindow *_window;	// 160 = 0xa0
    _Bool _skipClientRotationCallbacks;	// 168 = 0xa8
}

@property(nonatomic) _Bool skipClientRotationCallbacks; // @synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks;
@property(readonly, nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property(readonly, nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id rotatingClient; // @synthesize rotatingClient=_rotatingClient;
- (void)finishFullRotateUsingOnePartAnimation:(_Bool)arg1;	// IMP=0x00000000003da913
- (void)finishFirstHalfRotation;	// IMP=0x00000000003da492
- (void)rotateSnapshots;	// IMP=0x00000000003d9df5
- (void)setupRotationOrderingKeyboardInAfterRotation:(_Bool)arg1;	// IMP=0x00000000003d919a
- (_Bool)_isFooterTranslucent;	// IMP=0x00000000003d9155
- (_Bool)_isHeaderTranslucent;	// IMP=0x00000000003d90d8
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;	// IMP=0x00000000003d8e3c
- (void)slideHeaderViewAndFooterViewOffScreen:(_Bool)arg1 forInterfaceOrientation:(long long)arg2;	// IMP=0x00000000003d8e1c
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;	// IMP=0x00000000003d8b39
- (void)dealloc;	// IMP=0x00000000003d8ad0
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;	// IMP=0x00000000003d8884

@end

