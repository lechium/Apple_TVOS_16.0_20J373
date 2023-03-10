//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIView, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectHost : NSObject
{
    NSMutableArray *_views;	// 8 = 0x8
    _Bool _autosetSubviewLabelTintColor;	// 16 = 0x10
    _Bool _contentViewRequired;	// 17 = 0x11
    UIView<_UIVisualEffectViewParticipating> *_contentView;	// 24 = 0x18
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 32 = 0x20
    _UIVisualEffectBackdropView *_captureView;	// 40 = 0x28
    _UIVisualEffectDescriptor *_currentEffectDescriptor;	// 48 = 0x30
    _UIVisualEffectDescriptor *_transitionEffectDescriptor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e14e1
@property(readonly, nonatomic) _UIVisualEffectDescriptor *transitionEffectDescriptor; // @synthesize transitionEffectDescriptor=_transitionEffectDescriptor;
@property(retain, nonatomic) _UIVisualEffectDescriptor *currentEffectDescriptor; // @synthesize currentEffectDescriptor=_currentEffectDescriptor;
@property(nonatomic) __weak _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
@property(readonly, nonatomic) NSArray *views; // @synthesize views=_views;
@property(nonatomic) _Bool contentViewRequired; // @synthesize contentViewRequired=_contentViewRequired;
@property(readonly, nonatomic) UIView<_UIVisualEffectViewParticipating> *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy) NSString *description;
- (void)willLoseDescendent:(id)arg1;	// IMP=0x00000000000e132f
- (void)willGainDescendent:(id)arg1;	// IMP=0x00000000000e12cd
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;	// IMP=0x00000000000e12b8
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;	// IMP=0x00000000000e12a3
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;	// IMP=0x00000000000e1244
- (void)_applyRequestedDescriptorEffectInvertingView:(id)arg1;	// IMP=0x00000000000e1113
- (void)_applyIdentityDescriptorEffectInvertingView:(id)arg1;	// IMP=0x00000000000e0fe2
- (void)_iterateViews:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e0e37
- (void)_evaluateInPlaceFiltering;	// IMP=0x00000000000e0d3d
- (id)_cloneFilters:(id)arg1;	// IMP=0x00000000000e0b64
- (void)_configureEffectDescriptor:(id)arg1;	// IMP=0x00000000000e01d0
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;	// IMP=0x00000000000e0006
- (void)_applyEffectDescriptor:(id)arg1;	// IMP=0x00000000000df84b
- (void)endTransition;	// IMP=0x00000000000df776
- (void)beginTransition;	// IMP=0x00000000000df716
- (void)prepareToTransitionToEffectDescriptor:(id)arg1;	// IMP=0x00000000000df545
- (void)_updateAdjustTintColors;	// IMP=0x00000000000df40b
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(_Bool)arg2;	// IMP=0x00000000000df2f0
- (void)monitorSubviewsOf:(id)arg1;	// IMP=0x00000000000df2d5
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000000dee78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

